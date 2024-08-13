#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class House {
    //модификатор доступа
private:
    int year;
    string type;
public:
    House(int x, string u) {
        set_data(x,u);
    }
    House(int x) {
        cout << x;
    }
    void set_data(int x, string u) {
        year = x;
        type = u;
    }
    void get_info() {
        cout << "Type: " << type << ". Year: " << year <<endl;
    }
    ~House() {
        cout << "delete object" << endl;
    }
    //this
};
int main() {
    House year(2000, "smth");
    year.get_info();
    House j(2300);
    // House my;
    // my.set_data(1960,"kirpich");
    // my.get_info();
    return 0;
}
