//Ввести с клавиатуры целое число S – сумму денег (от 1 до 100).
//Рассчитать и напечатать минимальное число монет достоинством 1, 2, 5 и 10 рублей, необходимое для выдачи суммы S рублей.
#include <complex>
#include <iostream>
using namespace std;
int main() {
  int S, sum1, sum2, sum5, sum10;
  sum1 = sum2 = sum5 = sum10 = 0;
  cin >> S;
  while(S >= 10) {
    sum10 += 1;
    S -= 10;
  }while(S >= 5) {
    sum5 += 1;
    S -= 5;
  }while(S >= 2) {
    sum2 += 1;
    S -= 2;
  }while(S >= 1) {
    sum1 += 1;
    S -= 1;
  }if(S == 0) {
    cout << "sum10 = "<< sum10 << "sum5 = " << sum5 << "sum2 = "<< sum2 << "sum1 = "<< sum1;
  }


  return 0;
}