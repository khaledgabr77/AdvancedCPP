#include <iostream>

class ChikenPizza {
public:
  void CreateDough() { std::cout << "Create Dough" << std::endl; }
  void AddToppings() { std::cout << "Adding Chicken Toppings" << std::endl; }
  void Bake() { std::cout << "Baking" << std::endl; }
  void MakePizza() {
    CreateDough();
    AddToppings();
    Bake();
    std::cout << "Pizza is Ready" << std::endl;
  }
};
class BeefPizza {
public:
  void CreateDough() { std::cout << "Create Dough" << std::endl; }
  void AddToppings() { std::cout << "Adding Beef Toppings" << std::endl; }
  void Bake() { std::cout << "Baking" << std::endl; }
  void Make() {}
  void MakePizza() {
    CreateDough();
    AddToppings();
    Bake();
    std::cout << "Pizza is Ready" << std::endl;
  }
};
class CheesePizza {
public:
  void CreateDough() { std::cout << "Create Dough" << std::endl; }
  void AddToppings() { std::cout << "Adding Cheese Toppings" << std::endl; }
  void Bake() { std::cout << "Baking" << std::endl; }
  void MakePizza() {
    CreateDough();
    AddToppings();
    Bake();
    std::cout << "Pizza is Ready" << std::endl;
  }
};
int main() {
  ChikenPizza chicken;
  BeefPizza beef;
  CheesePizza cheese;
  std::cout << "For checkin Enter 1, for beef Enter 2, for cheese, Enter 3"
            << std::endl;
  int choise;
  std::cin >> choise;

  if (choise == 1) {
    chicken.MakePizza();
  } else if (choise == 2) {
    beef.MakePizza();
  } else if (choise == 3) {
    cheese.MakePizza();
  } else {
    std::cerr << "Error" << std::endl;
  }
}