#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 11; i++) {
        cout << i << endl;
    }
    int j = 0;
    while (j < 66) {
        cout << j << endl;
        j++;
    }
    int o = 900;
    do {
        cout << o << endl;
        o /= 10;
    }while(o >= 9);
    for (int i = 1; i < 15; i++) {
        if(i == 10)
            break;
        cout << i << endl;
    }
    return 0;
}
