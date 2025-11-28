#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // constructors
    Complex() : real(0), imag(0) {}
    Complex(int r, int i){
        this->real = r;
        this->imag = i;
    }

    // input
    void input() {
        cin >> real >> imag;
    }

    // display
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // add two complex numbers
    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // subtract
    Complex subtract(Complex c) {

        Complex result = Complex (real-c.real , imag - c.imag);
        return result;
    }

    // multiply
    Complex multiply(Complex c) {
        return Complex(
            (real * c.real) - (imag * c.imag),
            (real * c.imag) + (imag * c.real)
        );
    }
};

int main() {
    Complex c1, c2, result;
    int choice;

    cout << "Enter first complex number (real imag): ";
    c1.input();

    cout << "Enter second complex number (real imag): ";
    c2.input();

    do {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = c1.add(c2);
                result.display();
                break;

            case 2:
                result = c1.subtract(c2);
                result.display();
                break;

            case 3:
                result = c1.multiply(c2);
                result.display();
                break;

            case 4:
                cout << "Exited";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}
