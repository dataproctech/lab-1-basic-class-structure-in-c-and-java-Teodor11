// include the necessary libraries
#include <iostream>
#include <string>
using namespace std;

class Car
{
    // attributes
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    // Method to display car information
    void displayInfo()
    {
        cout << "Car: " << this->make << " / " << this->model << " / " << this->year << "\n";
    }

    int getCarAge()
    {
        return this.currentYear - this.year;
    }

    bool isSameCar(Car otherCar)
    {
        if (this.make == otherCar.make && this.model == otherCar.model && this.year == otherCar.year)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // Create a Car object
    Car car1("Toyota", "Corolla", 2019);

    // Display car details
    car1.displayInfo();

    int carAge = car1.getCarAge();
    cout << "Car age (in years): " << carAge << "\n";

    Car car2 = new Car("Toyota", "Corolla", 2019);
    Car car3 = new Car("Toyota", "Corolla", 2017);

    cout << "Is car 1 same as car 2: " << car1.isSameCar(car2) << "\n";
    cout << "Is car 1 same as car 3: " << car1.isSameCar(car3) << "\n";

    return 0;
}