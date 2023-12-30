#include <iostream>

using namespace std;

int main() {
    int base, power, result = 1;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    // Calculate power using a loop
    for (int i = 0; i < power; ++i) {
        result *= base;
    }

    cout << "Result: " << result << endl;

    return 0;
} 
