#include <iostream>
#include <bitset> // For binary representation

// Function to add two integers and return the sum in binary
std::string addAndConvertToBinary(int num1, int num2) {
    int sum = num1 + num2;
    return std::bitset<sizeof(int) * 8>(sum).to_string(); // Convert sum to binary string
}

int main() {
    int number1 = 1;
    int number2 =1 ;
    
    std::string binarySum = addAndConvertToBinary(number1, number2);
    
    std::cout << "Sum of " << number1 << " and " << number2 << " in binary is: " << binarySum << std::endl;
    
    return 0;
}

