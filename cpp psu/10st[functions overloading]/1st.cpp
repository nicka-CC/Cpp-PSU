#include <iostream>
#include <string>
using namespace std;

void print(string str) {
    cout << str <<endl;
}
void print(int str) {
    cout << str <<endl;
}



void add(int a, int b) {
    int  res = a + b;
    print(res);
}
int main() {
    add(6,7);
    print("sd");
    return 0;

}

