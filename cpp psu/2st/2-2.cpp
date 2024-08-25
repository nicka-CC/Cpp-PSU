//Ввести с клавиатуры номер года (положительное целое число) и напечатать, является ли год високосным.
//Високосные года делятся на 400 (например, 2000) или же делятся на 4, но не делятся на 100 (2004).
#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "Random year" << endl;
  cin >> year;
  if((year % 400 == 0) | ((year  % 4 == 0) & (year % 100 !=0))) {
    cout << "YES!!" <<endl;
  }else {
    cout << "NO!!!"<<endl;
  }
  return 0;
}
