//Компьютер загадывает случайное число в диапазоне от 0 до 100.
//Человек вводит своё предположение.
//В ответ компьютер выдаёт одно из трёх возможных сообщений:
//«ваше число больше», «ваше число меньше» или «вы угадали».
//Игра продолжается до тех пор, пока число, загаданное компьютером, не будет угадано.
#include <cmath>
#include <iostream>
#include <random>
using namespace std;

int main() {
  double trueNum, inputNum;
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(0, 100);
  trueNum = distrib(gen);
  do {
    cout << "your number: ";
    cin >> inputNum;

    if (inputNum < trueNum) {
      cout << ">" << endl;
    } else if (inputNum > trueNum) {
      cout << "<" << endl;
    } else {
      cout << "Success" << endl;
    }
  }while(trueNum != inputNum);
  return 0;
}