#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
template <typename T>
void print_arr(T* arr, int len) {
    for(int i = 0; i < len; i++ )
        cout << *(arr+i) << " ";
}
int main() {
    int aa1[] = {3,7,6,3,4,56,9,54,33,45,56,665,7};
    float aa2[] = {3,7.7,6,3,4,56,9,54,33,45,56,665,7};
    print_arr<int>(aa1, 7);
    print_arr<float>(aa2,9);
    return 0;
}
