#include <iostream>


int main() {
    int number;
    std::cin >> number;
    switch(number) {
        case 6: std::cout << "this is 6"; break;
        case 9: std::cout << "this is 9"; break;
        case 69: std::cout << "this is good"; break;
        default: std::cout << "bimbimbambam"; break;
    }
    return 0;
}
