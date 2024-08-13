#include <iostream>
#include <string>
#include <fstream>
using namespace std;

enum FstEnum {
    check,
    uncheck,
    wait,
    fast,
    close
};
struct File {
    int weight;
    string name;
    FstEnum stfenum;
};
int main() {
    File my_file;
    my_file.weight = 1.5f;
    my_file.name = "14th.txt";
    my_file.stfenum = FstEnum::close;
    if(my_file.stfenum == FstEnum::close)
        cout << "File is close" << endl;
    return 0;
}
