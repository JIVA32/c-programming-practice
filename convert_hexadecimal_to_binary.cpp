#include <iostream>
#include <string>

std::string hexToBin(const std::string& hex) {
    std::string binary;
    for (char hexDigit : hex) {
        switch (hexDigit) {
            case '0': binary += "0000"; break;
            case '1': binary += "0001"; break;
            case '2': binary += "0010"; break;
            case '3': binary += "0011"; break;
            case '4': binary += "0100"; break;
            case '5': binary += "0101"; break;
            case '6': binary += "0110"; break;
            case '7': binary += "0111"; break;
            case '8': binary += "1000"; break;
            case '9': binary += "1001"; break;
            case 'A': case 'a': binary += "1010"; break;
            case 'B': case 'b': binary += "1011"; break;
            case 'C': case 'c': binary += "1100"; break;
            case 'D': case 'd': binary += "1101"; break;
            case 'E': case 'e': binary += "1110"; break;
            case 'F': case 'f': binary += "1111"; break;
            default: std::cerr << "Invalid hexadecimal digit: " << hexDigit << std::endl; return "";
        }
    }
    return binary;
}

int main() {
    std::string hexNum;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> hexNum;

    std::string binaryNum = hexToBin(hexNum);
    if (!binaryNum.empty()) {
        std::cout << "Hexadecimal: " << hexNum << " -> Binary: " << binaryNum << std::endl;
    }

    return 0;
}