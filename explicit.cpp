#include <iostream>

class Distance {
private:
    int meters;
    int centimeters;

public:
    explicit Distance(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    void display() const {
        std::cout << "Distance: " << meters << " meters and " << centimeters << " centimeters\n";
    }
};


void displayDistance(Distance d) {
    d.display();
}

int main() {
    // Creating Distance objects
    Distance d1(5, 80);
    d1.display(); // Output: Distance: 5 meters and 80 centimeters

    // No implicit conversion due to 'explicit'
    // Distance d2 = 200; // Error - no implicit conversion allowed
    Distance d2 = Distance(0, 200); // Explicit conversion required

    // if the constructor is not explicitly defined then we can do
    // Distance d2 = 200;    `Error prone - allows implicit conversion`
  

    d2.display(); // Output: Distance: 0 meters and 200 centimeters



    // No implicit conversion due to 'explicit'
    // displayDistance(150); // Error - no implicit conversion allowed
    displayDistance(Distance(1, 50)); // Explicit conversion required

    return 0;
}
