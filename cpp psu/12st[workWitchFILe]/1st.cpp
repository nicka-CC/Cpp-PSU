#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // ofstream file("./test.txt",ios_base::out);
    // if(file.is_open()) {
    //     file << "kill me";
    //     cout << "is open";
    //     file.close();
    // }

    ifstream file("test.txt");
    if (file.is_open()) {
        // string str;
        // file >> str;
        char str[100];
        file.getline(str, 100);
        cout << str << endl;
        file.close();
    }

    return 0;
}
