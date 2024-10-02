// include the necessary libraries
#include <iostream>
#include <string>
using namespace std;

class Car {
    //attributes
    string make;
    string model;
    int year;

    public:
    // Constructor
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    // Method to display car information
    void displayInfo() {
        cout << "Car: " << this->make << " / " << this->model << " / " << this->year << "\n";
    }
   
};

int main() {
    // Create a Car object
    Car car1("Toyota", "Corolla", 2019);
    
    // Display car details
    car1.displayInfo();

    return 0;
}
