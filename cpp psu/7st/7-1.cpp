//Ввести с клавиатуры строку.
//Определить, сколько в этой строке гласных, согласных, строчных и прописных английских букв
//(использовать <сctype>).
#include <iostream>
#include <random>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string str;
  int vowels = 0, constants = 0, upper = 0, lower = 0;
  string vowelChars = "AEIOUaeiou";
  getline(cin, str);
  for(char ch : str) {
    if(isalpha(ch)) {
      if(isupper(ch)) {
        upper++;
      }else if(islower(ch)) {
        lower++;
      }
      if(vowelChars.find(ch) != string::npos) {
        vowels++;
      }else {
        constants++;
      }
    }
  }
  cout << "vowels: "<<vowels<<" constants: "<< constants<< " lower: "<< lower<< " upper: "<<upper<<endl;
  return 0;
}