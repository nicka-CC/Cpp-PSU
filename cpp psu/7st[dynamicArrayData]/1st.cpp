#include <iostream>
using namespace std;

int main() {
    //dynamic array data выделили память
    int *nums= new int[3];
    nums[0] = 33;
    cout << nums[0] <<endl;
    //очистили память
    delete[] nums;

    return 0;

}
