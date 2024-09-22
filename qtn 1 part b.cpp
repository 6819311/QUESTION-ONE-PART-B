#include <iostream>
using namespace std;

int main() {
    double sum = 0.0; // Variable to store the sum of the series

    // Looping through odd numbers from 1 to 95
    for (int i = 1; i <= 95; i += 2) {
        int denominator = i + 2; // Calculating the denominator (i + 2)
        sum += static_cast<double>(i) / denominator; // Add the fraction to the sum
    }
	cout << "The sum of the series is: " << sum <<endl;
    return 0;
}

