#include <iostream>

int main() {
  
  //declare variables
  int year;
  int r4;
  int r100;
  int r400;

  //Input year
  std::cout << "This program will tell you if the year entered is a leap year.\n";
  std::cout << "Enter a four-digit number to test if it is a leap year\n";
  std::cin >> year;

  //Four-digit number check
  while(year <= 999 or year >= 10000){
    if(year > 999 and year < 10000){
      break;
    }
    else{
      std::cout << "Try again, enter a four-digit number to test if it is a leap year\n";
      std::cin >> year;
      }
  }

  //Check if leap year
  r4 = year % 4;
  r100 = year % 100;
  r400 = year % 400;

  while(r4==0){  
    if(r100!=0){
      std::cout << year << " is a leap year.\n";
      break;
    }
    else if(r100==0 and r400==0){
      std::cout << year << " is a leap year.\n";
      break;
    }
    else{
      std::cout << year << " is NOT a leap year.\n";
      break;
    }
  }
}

