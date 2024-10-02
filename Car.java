public class Car {
    // Attributes
    String make;
    String model;
    int year;
    
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


    public static void main(String[] args) {
        // Create a Car object
        Car car1 = new Car("Toyota", "Corolla", 2019);
        
        // Display car details
        car1.displayInfo();
    }
}
