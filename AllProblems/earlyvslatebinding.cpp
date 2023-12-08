#include <iostream>

//abstract base class
class Shape {
public:
  virtual void draw() = 0;
};

class Circle : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a circle" << std::endl;
  }
};

class Square : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a square" << std::endl;
  }
};

int main() {
  // Early binding
  Shape* shape1 = new Circle();
  shape1->draw(); // Output: Drawing a circle

  // Late binding
  Shape* shape2 = new Square();
  shape2->draw(); // Output: Drawing a square
}
