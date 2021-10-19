#include <iostream>
#include <sstream>

int main() {
  long x, y;
  while(std::cin >> x){
    std::cin >> y;
    std::cout << std::abs(x - y) << "\n";
  }
  return 0;
}