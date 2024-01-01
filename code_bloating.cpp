#include <iostream>

// A simple template class performing arithmetic operations
template <typename T>
class Arithmetic {
public:
    T add(T a, T b) { return a + b; }
    T subtract(T a, T b) { return a - b; }
    T multiply(T a, T b) { return a * b; }
    T divide(T a, T b) { return b != 0 ? a / b : 0; }
};

// When compiled, the compiler generates separate code for
// each instantiation of the Arithmetic class for int, double, 
// and float types, potentially leading to code bloat if these instantiations
// are not optimized or if the code becomes more complex.

int main() {
    Arithmetic<int> intArithmetic;
    std::cout << "Addition: " << intArithmetic.add(5, 3) << std::endl;
    std::cout << "Subtraction: " << intArithmetic.subtract(8, 3) << std::endl;
    std::cout << "Multiplication: " << intArithmetic.multiply(4, 6) << std::endl;
    std::cout << "Division: " << intArithmetic.divide(9, 3) << std::endl;

    return 0;
}

