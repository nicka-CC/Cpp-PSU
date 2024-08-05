#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Tree {
    string name;
    int ages;
    bool is_alive;
    float height;

    void get_info() {
        cout << "Name:" << name << " Age: " << ages << endl;
    }
};

int main() {
    Tree klen;
    klen.ages = 78;
    klen.name = "ya";

    Tree jil;
    jil.ages = 9;
    jil.name = "lk";

    jil.get_info();
    return 0;
}
