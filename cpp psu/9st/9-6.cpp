//Написать программу, которая: а)копирует в выходной файл2 файла: « test1.txt» и « test2.txt» ;б)нумерует строки в выходном файле – для каждого исходного файла отдельно, начиная с 1;
//в)отображает процесс копирования в виде индикатора.Рекомендуется написать вспомогательную функцию для копирования одного файла.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Функция для копирования содержимого одного файла в выходной файл
void copyFile(ifstream& inputFile, ofstream& outputFile, const string& fileName, int& lineNumber) {
  string line;
  outputFile << "=== Начало файла: " << fileName << " ===" << endl;

  while (getline(inputFile, line)) {
    outputFile << lineNumber++ << ": " << line << endl;
  }

  outputFile << "=== Конец файла: " << fileName << " ===" << endl << endl;
}

int main() {
  string inputFilename1 = "test.txt";
  string inputFilename2 = "test2.txt";
  string outputFilename = "test3.txt";


  ifstream inputFile1(inputFilename1);
  ifstream inputFile2(inputFilename2);
  ofstream outputFile(outputFilename);

  if (!inputFile1.is_open()) {
    cerr << "Ошибка: не удалось открыть файл '" << inputFilename1 << "' для чтения." << endl;
    return 1;
  }

  if (!inputFile2.is_open()) {
    cerr << "Ошибка: не удалось открыть файл '" << inputFilename2 << "' для чтения." << endl;
    return 1;
  }

  if (!outputFile.is_open()) {
    cerr << "Ошибка: не удалось открыть файл '" << outputFilename << "' для записи." << endl;
    return 1;
  }

  int lineNumber = 1;

  // Копирование первого файла
  cout << "Копирование файла '" << inputFilename1 << "' в '" << outputFilename << "'..." << endl;
  copyFile(inputFile1, outputFile, inputFilename1, lineNumber);

  // Отображение индикатора процесса
  cout << "Файл '" << inputFilename1 << "' скопирован. Продолжаем с файлом '" << inputFilename2 << "'..." << endl;

  // Копирование второго файла
  copyFile(inputFile2, outputFile, inputFilename2, lineNumber);

  cout << "Копирование завершено. Проверьте файл '" << outputFilename << "'." << endl;

  // Закрытие файлов
  inputFile1.close();
  inputFile2.close();
  outputFile.close();

  return 0;
}
