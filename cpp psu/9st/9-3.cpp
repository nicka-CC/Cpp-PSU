//Написать программу, которая считывает текст из файла, находит самое длинное слово и определяет, сколько раз оно встретилось в файле.
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

int main() {
  ifstream inputFile("test.txt");


  string line, word, longestWord;


  unordered_map<string, int> wordCount;


  while (getline(inputFile, line)) {
    stringstream ss(line);
    while (ss >> word) {
      wordCount[word]++;
      if (word.length() > longestWord.length()) {
        longestWord = word;
      }
    }
  }


  inputFile.close();


  cout << "word: " << longestWord << " count: " << wordCount[longestWord] << endl;
  return 0;
}
