#include <iostream>

void MakeChekenPizza() {
  std::cout << "Making dough" << std::endl;
  std::cout << "Adding Chiken Topping" << std::endl;
  std::cout << "Baking Pizaa" << std::endl;
}

void MakeBeefPizza() {
  std::cout << "Making dough" << std::endl;
  std::cout << "Adding Beef Topping" << std::endl;
  std::cout << "Baking Pizaa" << std::endl;
}
void MakeCheesePizza() {
  std::cout << "Making dough" << std::endl;
  std::cout << "Adding Cheese Topping" << std::endl;
  std::cout << "Baking Pizaa" << std::endl;
}

int main() {
  std::cout << "For checkin Enter 1, for beef Enter 2, for cheese, Enter 3"
            << std::endl;
  int choise;
  std::cin >> choise;

  if (choise == 1) {
    MakeChekenPizza();
  } else if (choise == 2) {
    MakeBeefPizza();
  } else if (choise == 3) {
    MakeCheesePizza();
  } else {
    std::cerr << "Error" << std::endl;
  }
}