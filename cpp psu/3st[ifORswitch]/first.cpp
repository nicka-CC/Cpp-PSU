#include <iostream>


int main() {
    int firstNum, secondNum;
    std::cin >> firstNum;

    if(firstNum > 3) {
        std::cout << "big" << std::endl;
    }
    else if (firstNum < 3){
        std::cout << "bign't" << std::endl;
    }
    else {
        std::cout << "." <<std::endl;
    }
    return 0;
}
