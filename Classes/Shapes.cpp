#include <iostream>

struct Point {
  int x;
  int y;
};
class Shapes {
public:
  virtual void PrintName() { std::cout << "Unknown Shape" << std::endl; }

protected:
  Point point;
};

class Line : public Shapes {
private:
  int lenght_;

public:
  Line(int lenght) : lenght_(lenght) {}
  void PrintName() {
    std::cout << "I am a line with lenght"
              << " " << lenght_ << std::endl;
  }
};
class Shape2D : public Shapes {
public:
  virtual float GetArea() { return 0; }
};
class Shape3D : public Shapes {
public:
  virtual float GetVolume() { return 0; }
};
class Square : public Shape2D {
private:
  int lenght_;

public:
  Square(int lenght) : lenght_(lenght) {}
  float GetArea() { return lenght_ * lenght_; }
  void PrintName() {
    std::cout << "I am a Square with lenght: " << lenght_
              << " and Area= " << GetArea() << std::endl;
  }
};
class Cube : public Shape3D {
private:
  int lenght_;

public:
  Cube(int lenght) : lenght_(lenght) {}
  float GetVolume() { return lenght_ * lenght_ * lenght_; }
  void PrintName() {
    std::cout << "I am a Cube with lenght: " << lenght_
              << " and volume= " << GetVolume() << std::endl;
  }
};
void PrintShape(Shapes *shape) { shape->PrintName(); }

int main() {
  Line line(5);
  Square square(10);
  Cube cube(8);
  PrintShape(&line);
  PrintShape(&square);
  PrintShape(&cube);
}