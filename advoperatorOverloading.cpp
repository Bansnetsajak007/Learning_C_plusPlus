#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Overload the addition operator (+)
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overload the subtraction operator (-)
    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overload the multiplication operator (*)
    Complex operator*(const Complex& other) {
        double newReal = (real * other.real) - (imaginary * other.imaginary);
        double newImaginary = (real * other.imaginary) + (imaginary * other.real);
        return Complex(newReal, newImaginary);
    }

    // Overload the division operator (/)
    Complex operator/(const Complex& other) {
        double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
        double newReal = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
        double newImaginary = ((imaginary * other.real) - (real * other.imaginary)) / denominator;
        return Complex(newReal, newImaginary);
    }

    // Overload the << operator for displaying complex numbers
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real;
        if (complex.imaginary >= 0)
            os << " + " << complex.imaginary << "i";
        else
            os << " - " << -complex.imaginary << "i";
        return os;
    }
};


int main() {
    Complex a(3.0, 4.0);
    Complex b(1.0, -2.0);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "a + b: " << sum << std::endl;
    std::cout << "a - b: " << difference << std::endl;
    std::cout << "a * b: " << product << std::endl;
    std::cout << "a / b: " << quotient << std::endl;

    return 0;
}
