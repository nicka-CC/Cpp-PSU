//Написать программу, которая создаёт копию содержимого текстового файла «test1.txt». Имя выходного файла ввести с клавиатуры.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream inputFile("test.txt");
  if (!inputFile.is_open()) {
    cout << "Ошибка: не удалось открыть файл 'test1.txt' для чтения." << endl;
    return 1;
  }


  string outputFileName;
  cout << "Введите имя выходного файла: ";
  cin >> outputFileName;


  ofstream outputFile(outputFileName);
  if (!outputFile.is_open()) {
    cout << "Ошибка: не удалось открыть файл '" << outputFileName << "' для записи." << endl;
    return 1;
  }


  string line;
  while (getline(inputFile, line)) {
    outputFile << line << endl;
  }


  inputFile.close();
  outputFile.close();

  cout << "Копирование завершено. Содержимое файла 'test1.txt' скопировано в '" << outputFileName << "'." << endl;
  return 0;
}
