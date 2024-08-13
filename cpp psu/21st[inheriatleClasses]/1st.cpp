#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class PC {
private:
    int diagonal;
    string os;
    int RAM;
public:
    PC(int diagonal, string os, int RAM) {
        this->diagonal = diagonal;
        this->os = os;
        this->RAM = RAM;
    }
    void get_info() {
        cout << diagonal << endl;
    }
};
class Laptop: public PC {
private:
    float weight;
public:
    Laptop(int diagonal, string os, int RAM, float weight):PC(diagonal, os, RAM) {
        this->weight = weight;
    }
    void get_info() {
        PC::get_info();
        cout << weight <<endl;
    }
};
int main() {
    Laptop honor(15,"Win",16,1.5);
    honor.get_info();
    return 0;
}
