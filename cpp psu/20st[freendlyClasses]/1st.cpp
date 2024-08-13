#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
class Person;
using namespace std;
class Dog {
private:
    int health = 100;
public:
    friend class Person;
};
class Person {
public:
    void Damage(Dog& dog) {
        dog.health -= 29;
        cout << "Health of animal: "<< dog.health <<endl;
    }
    void Heal(Dog& dog) {
        dog.health += 29;
        cout << "Health of animal: "<< dog.health <<endl;
    }
    void Kill(Dog& dog) {
        dog.health = 0;
        cout << "Health of animal: "<< dog.health <<endl;
    }
};
int main() {
    Dog suka;
    Person Billy;
    Billy.Damage(suka);
    Billy.Damage(suka);
    Billy.Damage(suka);
    return 0;
}
