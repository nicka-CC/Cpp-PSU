#include <iostream>
using namespace std;

int main() {
    int  Arr[3];
    Arr[0] = 21;
    Arr[1] = 1;
    Arr[2] = 2;
    cout << Arr[2] <<endl;
    float nums2[] = {4,6,7};
    for (int i = 0; i < 3; i++) {
        cout << i << nums2[i] <<endl;
    }
    // int matrix[3][2];
    // matrix[0][0] = 6;
    int matrix[3][2]={
    {6,7},
    {8,9},
    {8,9}
    };
    cout <<matrix[1][1] <<endl;
    for(int i = 0; i <3; i++) {
        for(int j=0; j < 2; j++) {
            cout << matrix[i][j] << endl;
        }
    }
    return 0;

}
