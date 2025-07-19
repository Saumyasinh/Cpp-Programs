#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;
    string color;

public:
    // Default constructor
    Car() {
        brand = "Unknown";
        year = 0;
        color = "Unspecified";
        cout << "Default constructor called\n";
    }

    // Parameterized constructor
    Car(string b, int y, string c) {
        brand = b;
        year = y;
        color = c;
        cout << "Parameterized constructor called\n";
    }

    // Copy constructor
    Car(const Car &c) {
        brand = c.brand;
        year = c.year;
        color = c.color;
        cout << "Copy constructor called\n";
    }

    // Method to display car details
    void display() const {
        cout << "Brand: " << brand << ", Year: " << year << ", Color: "
		 << color << endl;
    }
};

int main() {
    // Using default constructor
    Car car1;
    car1.display();

    // Using parameterized constructor
    Car car2("Toyota", 2020, "Red");
    car2.display();

    // Using copy constructor
    Car car3 = car2;
    car3.display();

    return 0;
}

