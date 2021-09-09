#include <iostream>
#include <string>
#include <sstream>


int main() {
  std::string s;

  while (std::getline(std::cin, s)) {
    bool jolly = true;

    std::stringstream input;
    input << s;

    int size;
    input >> size;

    int items[size];
    int tally[size-1];

    for (int i = 0; i < size; ++i) {
      input >> items[i];
      //std::cout << items[i] << " ";
      if (i < size - 1) {
        tally[i] = 0;
      }
    }

    //std::cout << "\n";

    for (int i = 1; i < size; ++i) {
      int j = abs(items[i-1] - items[i]);
      //std::cout << j << " ";
      if (j < size) {
        ++tally[j-1];
      } else {
        jolly = false;
        break;
      }
    }

    //std::cout << "\n";

    if (jolly) {
      for (int i = 0; i < size - 1; ++i){
        if (tally[i] != 1) {
          jolly = false;
          //break;
        }
      }
    }

    if (jolly) {
      std::cout << "Jolly\n";
    } else {
      std::cout << "Not jolly\n";
    }
  }
  
  s = "";
}
