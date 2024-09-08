//Человек загадывает случайное число в диапазоне от 0 до 100.
//Компьютер выводит своё предположение.
//В ответ человек вводит один из 3-х символов, означающих: «моё число больше», «моё число меньше» или «компьютер угадал».
//Игра продолжается до тех пор, пока число, загаданное человеком, не будет угадано.
//Реализовать стратегию отгадывания числа компьютером: метод половинного деления или выбор случайного числа.

#include <iostream>
#include <random>
using namespace std;

int main() {
  double trueNum;
  double a = 0, b = 100;
  string response;
  do {
    trueNum = (a + b) / 2;
    cout << trueNum;
    cin >> response;
    if(response == ">") {
      a = trueNum + 1;
    }else if(response == "<") {
      b = trueNum - 1;
    }else {
      cout<< "Success!"<<endl;
      break;
    }
  }while(a <= b);
  return 0;
}