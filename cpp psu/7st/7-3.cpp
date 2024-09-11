//Написать программу, которая подсчитывает,
//сколько во введённой с клавиатуры строке содержится слов
//(словом считается последовательность любых символов, разделенных одним или несколькими пробельными символами: ‘ ’, ‘\t’, ‘\n’).
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string input;
  getline(cin, input);

  int wordCount = 0;
  bool inWord = false;

  for (size_t i = 0; i < input.size(); ++i) {
    char ch = input[i];


    if (ch == '\\' && i + 1 < input.size() && (input[i + 1] == 't' || input[i + 1] == 'n')) {

      ++i;
      if (inWord) {
        inWord = false;
      }
    } else if (isspace(ch)) {
      if (inWord) {
        inWord = false;
      }
    } else {
      if (!inWord) {
        inWord = true;
        wordCount++;
      }
    }
  }

  cout <<wordCount << endl;

  return 0;
}
