#include <iostream>
#include "../librarys/includes/Lib/Lib.hpp"



int main() {
  std::string m;
  std::cin >> m;
  std::cout << m << "And ";
  librarys::Say_Hello();
  return 0;
}