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
    void set_data(int x, string u) {
        year = x;
        type = u;
    }
    void get_info() {
        cout << "Type: " << type << ". Year: " << year <<endl;
    }
};
int main() {

    House my;
    my.set_data(1960,"kirpich");
    my.get_info();
    return 0;
}
