#include <iostream>
#include <string>
using namespace std;


void minimam(int* arr, int len) {
    int min = *arr;
    for(int i = 0; i < len; i++) {
        if(min > *(arr + 1)) {
            min = *(arr+1);
        }

    }
cout <<"min: " << min << endl;
}


int main() {
    int num = 10;
    //reference PATH in data peremennoi
    int &a = num;
    a = 25;
    cout << &num << ":" << num << endl;
    cout << &a << ":" << a << endl;

    //pointer
    int val = 23;
    int *ptrval;
    ptrval = &val;
    *ptrval = 90;
    // ptrval = nullptr;
    cout << &val << ":" << val << endl;
    cout << ptrval << ":" << *ptrval << endl;

    int arrs[] = {9,6,1};
    minimam(arrs,3);
    return 0;

}

