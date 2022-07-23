#include <iostream>

int main() {
  
  int weight;
  int planet;
  int cpweight;

  //Weight input
  std::cout << "What is your Earth weight?\n";
  std::cin >> weight;

  //Planet input
  std::cout << "1-Mercury, 2-Venus, 3-Mars, 4-Jupiter, 5-Saturn, 6-Uranus, 7-Neptune\n";
  std::cout << "Input a number corresponding to the planet you would like to fight on.\n";
  std::cin >> planet;

  switch(planet){
    case 1:
    cpweight = weight * 0.38;
    std::cout << "You chose Mercury and your weight would be [" << cpweight << "]\n";
    break;
    case 2:
    cpweight = weight * 0.91;
    std::cout << "You chose Venus and your weight would be [" << cpweight << "]\n";
    break;
    case 3:
    cpweight = weight * 0.38;
    std::cout << "You chose Mars and your weight would be [" << cpweight << "]\n";
    break;
    case 4:
    cpweight = weight * 2.34;
    std::cout << "You chose Jupiter and your weight would be [" << cpweight << "]\n";
    break;
    case 5:
    cpweight = weight * 1.06;
    std::cout << "You chose Saturn and your weight would be [" << cpweight << "]\n";
    break;
    case 6:
    cpweight = weight * 0.92;
    std::cout << "You chose Uranus and your weight would be [" << cpweight << "]\n";
    break;
    case 7:
    cpweight = weight * 1.19;
    std::cout << "You chose Neptune and your weight would be [" << cpweight << "]\n";
    break;
  }
}
