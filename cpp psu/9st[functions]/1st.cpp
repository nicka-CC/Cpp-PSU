#include <iostream>
#include <string>
using namespace std;

void Void(string word) {
    cout << word << "\n"<<endl;
}
//skelets functions
void add(int a, int b) ;
int addInt(int a, int b);

int main() {
    Void("l");
    add(8,9);
    int addIntRes = addInt(8,1);
    cout << addIntRes << endl;
    return 0;

}
void add(int a, int b) {
    cout << a + b << "\n"<<endl;
}
int addInt(int a, int b) {
    return a + b;
}
