#include <iostream>

class Line {
private:
  int lenght_;

public:
  Line(int lenght) : lenght_(lenght) {}
  void PrintName() {
    std::cout << "I am a line with lenght"
              << " " << lenght_ << std::endl;
  }
};

int main() {
  Line k(10);
  k.PrintName();
}