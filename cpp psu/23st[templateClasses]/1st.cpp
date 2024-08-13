#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
template <class T>
class Arrays {
private:
    int len;
    T* arr;
public:
    Arrays(T* a, int len) {
        this->len = len;
        arr = new T[len];
        for(int i = 0; i < len; i++) {
            *(arr + i) = *(a + i);
        }
    }
    void get() {
        for(int i = 0; i < len; i++) {
            cout << *(arr + i) << endl;
        }
    }
    ~Arrays() {
        delete[] arr;
    }
};
int main() {
    int arr1[]= {1,2,3,4,5,5};
    float arr2[]= {1.1,2.1,3.1,4,5,5};
    Arrays<int> arr(arr1,4);
    Arrays<float> arrs(arr2,6);
    arr.get();
    arrs.get();
    return 0;
}
