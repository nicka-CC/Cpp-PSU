#include <iostream>
#include <string>
using namespace std;

int main() {
    //old metod
    char world[] = {'H','I'};
    for (int i = 0; i < 3; i++) {
        cout << world[i];
    }
    //now metod
    string words = "Jil ooii";
    cout << "\n" << words <<endl;
    return 0;

}
