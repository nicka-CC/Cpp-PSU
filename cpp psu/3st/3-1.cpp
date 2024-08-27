//Ввести с клавиатуры целое положительное число N.
//Посчитать сумму чётных целых чисел от 1 до N.
#include <iostream>
using namespace std;

int main() {
  int N, S = 0;
  cin >> N;

  // Считаем сумму четных чисел от 1 до N
  for (int i = 2; i <= N; i += 2) {
    S += i;
  }

  cout << S << endl;
  return 0;
}
