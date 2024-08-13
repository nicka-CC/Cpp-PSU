#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void devide(int a, int b) {
    if (b == 0) throw 100;
    else cout << (a /b);
}
int main() {
    try {
      devide(5.2f, 0.0f);
    }catch(int err){
        if(err== 100) cout << "error delen in 0";
    }
    return 0;
}
