#include <iostream>
class Pizza {
protected:
  void CreateDough() { std::cout << "Create Dough" << std::endl; }
  void Bake() { std::cout << "Baking" << std::endl; }
  virtual void AddToppings() = 0;

public:
  void MakePizza() {
    CreateDough();
    Bake();
    AddToppings();
    std::cout << "Pizza is Ready" << std::endl;
  }
};

class ChikenPizza : public Pizza {

  void AddToppings() { std::cout << "Adding Chicken Toppings" << std::endl; }
};
class BeefPizza : public Pizza {
  void AddToppings() { std::cout << "Adding Beef Toppings" << std::endl; }
};
class CheesePizza : public Pizza {
  void AddToppings() { std::cout << "Adding Cheese Toppings" << std::endl; }
};
void ll(Pizza *p) { p->MakePizza(); }
class Shrimp : public Pizza {
  void AddToppings() { std::cout << "Adding Shrimp Topping" << std::endl; }
};
int main() {

  std::cout << "For checkin Enter 1, for beef Enter 2, for cheese Enter 3, for "
               "shrimp Enter 4"
            << std::endl;
  int choise;
  std::cin >> choise;

  if (choise == 1) {
    ll(new ChikenPizza());
  } else if (choise == 2) {
    ll(new BeefPizza());
  } else if (choise == 3) {
    ll(new CheesePizza());
  } else if (choise == 4) {
    ll(new Shrimp());
  } else {
    std::cerr << "Error" << std::endl;
  }
}