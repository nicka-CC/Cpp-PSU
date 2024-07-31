#include <iostream>
//Переменные и типв данных

int main() {
    //целое число 4байтв
    int intNum = 69;
    intNum = 99;

    int age,year;

    std::cout << intNum << std::endl;
    std::cout << "Youre age: ";

    std::cin >> age;
    std::cout << "Youre year: ";

    std::cin >> year;
    std::cout << "You borned: " << year - age << std::endl;

    // целое число от -32к ло 32к 2байтв
    short shorNum = -69;
    // целое число 8 байт
    long longNum = 88;
    //цеое число от 0 до 64к 2 байта
    unsigned short unsignedShortNum = 55;
    //число с точкой (f на конец) int
    float floatNum = 7.8846f;
    //число с точкой (f на конец) long
    double doubleNum = 733444.8846f;
    //хоанение символа один символ но любой
    char charNum = 'r';
    //логический
    bool isHappy = false;


    return 0;
}
