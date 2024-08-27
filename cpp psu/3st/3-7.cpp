//Подсчитать число «счастливых» шестизначных билетиков в диапазоне от 100000 до 999999.
// Билет считается «счастливым», если сумма его первых трёх цифр совпадает с суммой последних трёх. (Ответ: 50412)
#include <iostream>
using namespace std;

int main() {
  int count = 0;

  for (int i = 100000; i <= 999999; ++i) {
    int firstHalf = (i / 1000);
    int lastHalf = (i % 1000);
    int sumFirst = (firstHalf / 100) + (firstHalf / 10 % 10) + (firstHalf % 10);
    int sumLast = (lastHalf / 100) + (lastHalf / 10 % 10) + (lastHalf % 10);

    if (sumFirst == sumLast) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}


