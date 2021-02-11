#include <iostream>
#include <tuple>
#include <list>

int main() {
//  std::tuple<int, char, bool> t(42, 'a', true);
//  более удобное создание:
//  auto t = std::make_tuple(42, 'a', true);

//  std::cout << std::get < 0 > (t) << std::endl; // compile time <0>


  std::list<int> l1, l2;

  for (auto i{1}; i<6; ++i){
    l1.push_back(i);
    l2.push_front(i);
  }

  l1.splice(std::next(std::begin(l1), 2),
            l2,
            std::next(std::begin(l2), 1),
            std::prev(std::end(l2), 1));

  for (auto x: l1){
    std::cout << x << ' ';
  }

  std::cout << '\n';

  for (auto x: l2){
    std::cout << x << ' ';
  }

  return 0;
}
