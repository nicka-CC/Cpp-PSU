#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
class Stvol;
class List;
using namespace std;

class List {
private:
    int age;
    string info;

public:
    void info_post(int x,string y) {
        age = x;
        info = y;
    }
    friend void info_list(Stvol &stvol, List &list);
};

class Stvol {
private:
    string name;

public:
    void info_post(string nameN) {
        name = nameN;
    }
    friend void info_list(Stvol &stvol, List &list);

};
    void info_list(Stvol &stvol, List &list) {
        cout << "List with descriprion:" << list.info << "is desc...:" << stvol.name << endl;
    }
int main() {
        Stvol fst;
        fst.info_post("David");
        List Bereza;
        Bereza.info_post(14,"bhdghh fehighdegih hefggefi");
        info_list(fst,Bereza);
    return 0;
}
