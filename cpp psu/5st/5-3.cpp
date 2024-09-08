//Компьютер загадывает случайное 4-разрядное число, все цифры которого различны, а человек пытается его угадать.
//В ответ на ввод человека, компьютер сообщает, сколько во введённом числе цифр совпадает и стоит на своих местах («быки»)
//и сколько цифр совпадает и не стоит на своих местах («коровы»). Игра заканчивается, когда человек отгадает число полностью (получит 4 «быка»).
//Например: компьютер загадал число 3270, человек ввел 1207, ответ: 1 бык, 2 коровы.

#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

string generateNumber() {
  string number;
  bool used[10] = {false};
  srand(time(0));
  while(number.length() < 4) {
    int digit = rand() % 10;
    if(!used[digit]) {
      number += to_string(digit);
      used[digit] = true;

    }
  }
  return number;
}

pair<int, int> countBullsAndCows(const string& secret, const string& guess) {
  int bulls = 0, cows = 0;
  for(int i = 0; i < 4; ++i) {
    if(guess[i] == secret[i]) {
      bulls++;
    }else if(secret.find(guess[i]) != string::npos) {
      cows++;
    }
  }
  return {bulls, cows};
}

int main() {
  string secret = generateNumber();
  string guess;
  int bulls = 0;
  while(bulls < 4) {
    cout << "Number"<< endl;
    cin >> guess;

    auto result = countBullsAndCows(secret, guess);
    bulls = result.first;
    int cows = result.second;
    cout << "bulls: " << bulls << "cows: "<< cows<<endl;
  }
  return 0;
}