public class Car {
    // Attributes
    String make;
    String model;
    int year;
    int currentYear = 2024;

    // Constructor
    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }

    // Method to display car information
    public void displayInfo() {
        System.out.println(this.make + " / " + this.model + " / " + this.year);
    }

    public int getCarAge() {
        return this.currentYear - this.year;
    }

    boolean isSameCar(Car otherCar) {
        if (this.make == otherCar.make && this.model == otherCar.model && this.year == otherCar.year) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        // Create a Car object
        Car car1 = new Car("Toyota", "Corolla", 2019);

        // Display car details
        car1.displayInfo();

        int carAge = car1.getCarAge();
        System.out.println("Car age (in years): " + carAge);

        Car car2 = new Car("Toyota", "Corolla", 2019);
        Car car3 = new Car("Toyota", "Corolla", 2017);

        System.out.println("Is car 1 same as car 2: " + car1.isSameCar(car2));
        System.out.println("Is car 1 same as car 3: " + car1.isSameCar(car3));
    }
}
