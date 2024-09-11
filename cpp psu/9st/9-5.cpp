//Написать программу, которая считывает текст из файла и выводит его в новый файл, заменяя последовательность из нескольких пробелов или табуляций ровно на один пробел.
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;


void processFile(const string& inputFilename, const string& outputFilename) {
  ifstream inputFile(inputFilename);
  ofstream outputFile(outputFilename);


  if (!inputFile.is_open()) {
    cerr << "Ошибка: не удалось открыть файл '" << inputFilename << "' для чтения." << endl;
    return;
  }


  if (!outputFile.is_open()) {
    cerr << "Ошибка: не удалось открыть файл '" << outputFilename << "' для записи." << endl;
    return;
  }

  string line;

  regex spacePattern(R"(\s+)");


  while (getline(inputFile, line)) {

    string modifiedLine = regex_replace(line, spacePattern, " ");

    outputFile << modifiedLine << endl;
  }

  inputFile.close();
  outputFile.close();
}

int main() {
  string inputFilename = "test.txt";
  string outputFilename = "test2.txt";



  // Обрабатываем файл
  processFile(inputFilename, outputFilename);

  cout << "Обработка завершена. Проверьте файл '" << outputFilename << "'." << endl;

  return 0;
}
