#include <algorithm>
#include <iomanip>
#include <iostream>

#include <boost/multi_array.hpp>

template< std::size_t N, typename C>
auto make_extent(const C & c){
  if (N > 1U){
    return boost::extents[std::size(c)]
      [make_extent_implementation<N_1U>(*std::begin)];
  } else{
    return boost::extents[std::size(c)];
  }
}

template < typename T, std::size_t N, typename C >
auto make_multiarray(const C & c){
  using array_t =boost::multi_array <T, N>;

  array_t a(make_extent<N>(c));

  // ...
}

int main(int argc, char** argv){
  const auto n = 3U;
  const auto m = 5U;

  std::vector<std::vector<int>> v(n, std::vector<int> (m,0));
  auto counter = 0;

  for (auto i = 0U; i<n; ++i){
    for (auto j = 0U; j<m; ++j){
      std::cout << std::setw(2) << std::right <<
                                              (v[i][j] = ++counter) << ' ';
    }
    std::cout << '\n';
  }

  std::cout << '\n';

  auto a = make_multiarray<int, 2U>(v);

  for (auto i = 0U; i<n; ++i){
    for (auto j = 0U; j<m; ++j){
      std::cout << std::setw(2) << std::right << a[i][j]
    }
  }
}
