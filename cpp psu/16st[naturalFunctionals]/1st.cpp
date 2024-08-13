#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
//встроенные функции

int main() {
    string str = "im";
    string str2 = "gay";
    str.append(str2);
    cout << str << endl;
    str.push_back('5');
    cout << str <<endl;
    str.push_back('5');
    cout << str <<endl;
    cout << str.length() << endl;


    cout << pow(2,8) << endl;
    cout << abs(-2) << endl;
    cout << sqrt(16) << endl;
    cout << ceil(1.09f) << round(3.45) << floor(6.99f) << endl;
    return 0;
}
