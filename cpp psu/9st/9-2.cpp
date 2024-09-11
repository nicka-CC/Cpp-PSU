//Написать программу, которая считывает текст из файла и выводит в новый файл только те строки, в которых содержится заданное слово.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool containsWord(const string& line, const string& word) {
  return line.find(word) != string::npos;
}

int main() {
  ifstream inputFile("test.txt");


  string outputFileName;
  cout << "Input name second file: ";
  cin >> outputFileName;


  ofstream outputFile(outputFileName);


  string word;
  cin >> word;


  string line;
  while (getline(inputFile, line)) {
    if(containsWord(line, word)) {
      outputFile << line << endl;
    }

  }


  inputFile.close();
  outputFile.close();

  cout << "Success! " << word << "'." << endl;
  return 0;
}
