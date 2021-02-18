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
class Circle : public Shape2D {
private:
  float raduis_;

public:
  Circle(float raduis) : raduis_(raduis) {}
  float GetArea() { return raduis_ * raduis_ * 3.14; }
  void PrintName() {
    std::cout << "I am Circle With Raduis " << raduis_
              << " and Area= " << GetArea() << std::endl;
  }
};
class Cylinder : public Shape3D {
public:
  Cylinder(float raduis, float height) : raduis_(raduis), height_(height) {}
  float GetVolume() { return height_ * raduis_ * raduis_ * 3.14; }
  void PrintName() {
    std::cout << "I am Cylinder with raduis " << raduis_ << " and height "
              << height_ << " and Volume= " << GetVolume() << std::endl;
  }

private:
  float raduis_;
  float height_;
};
void PrintShape(Shapes *shape) { shape->PrintName(); }

int main() {
  Line line(5);
  Square square(10);
  Cube cube(8);
  Circle circle(2.5);
  Cylinder cylinder(3, 2);
  PrintShape(&line);
  PrintShape(&square);
  PrintShape(&cube);
  PrintShape(&circle);
  PrintShape(&cylinder);
}