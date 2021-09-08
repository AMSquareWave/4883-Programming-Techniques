#include <iostream>
#include <vector>
#include <bits/stdc++.h>

void timeFormat(int secs){
  int s = secs % 60;
  int mins = secs / 60;
  int m = mins % 60;
  int h = mins / 60;

  std::cout << "0" << h << ":";
  if(m < 10){
    std::cout << "0";
  }
  std::cout << m << ":";
  if(s < 10) {
    std::cout << "0";
  }
  std::cout << s << "\n";
}

void bruteForceAnswer(std::vector<int> nums){
  bool tooLong = true;

  for(int i = (*std::min_element(nums.begin(), nums.end())) * 2; i <= 18000; ++i){
    bool correct = true;

    for(int j = 0; j < nums.size(); ++j){
      if(i % (nums[j] * 2) >= (nums[j]) - 5){
        correct = false;
        break;
      }
    }

    if(correct){
      tooLong = false;
      timeFormat(i);
      break;
    }
  }

  if(tooLong){
    std::cout << "Signals fail to synchronise in 5 hours\n";
  }
}

void printNums(std::vector<int> nums){
  for(auto i = nums.begin(); i != nums.end(); ++i){
    std::cout << *i << " ";
  }
  std::cout << "\n";
}

int main() {
  int i;
  std::cin >> i;
    while (i) {
      std::vector<int> nums;
      while(i) {
        nums.push_back(i);
        std::cin >> i;
      }

      //printNums(nums);
      bruteForceAnswer(nums);

      std:: cin >> i;
      if(!i){
        std::cin >> i;
        if(!i){
          std::cin >> i;
        }
      }
    }
}