#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator-(const Complex& other) const {
        double newReal = real - other.real;
        double newImaginary = imaginary - other.imaginary;
        return Complex(newReal, newImaginary);
    }

    void display() const {
        cout << "The complex number is: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex myComplex1(4, 7);
    Complex myComplex2(2, 3);

    Complex result = myComplex1 - myComplex2;

    cout << "Subtracting two complex numbers:" << endl;
    result.display();

    return 0;
}
