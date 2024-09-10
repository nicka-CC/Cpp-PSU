//а) Заполнить массив из 10 элементов случайными целыми числами в диапазоне [–30; 30] и напечатать их в одну строку.
// б) Подсчитать количество положительных и отрицательных элементов в массиве.
// в)Найти среднее арифметическое значений массива и определить в массиве значение, ближайшее к среднему арифметическому.
// г)Подсчитать сумму элементов в массиве между максимальным и минимальным(не включая сами границы).
// д)Построить горизонтальную гистограмму: ось нулевых значений проходит в центре экрана сверху вниз, отрицательные значения откладывать влево, положительные – вправо: Значения элементов массива = {-5, -6, 6, -4, 8, -2}

#include <iostream>
#include <random>

using namespace std;
int main() {
  const int n = 10;
  int a[n], sumP = 0, sumO = 0, sumAll = 0, max = -30, min = 30;

  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(-30, 30);


  for(int i = 0; i < n; ++i) {
    a[i] = dist(gen);
    sumAll += a[i];
    if(a[i] < 0) {
      sumO += 1;

    }else {
      sumP +=1;
    }
    if(a[i]<min) {
      min = a[i];
    }
    if(a[i]> max) {
      max=a[i];
    }
  }

  for(int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  double avg = static_cast<double>(sumAll) / n;
  int closest = a[0];
  double minDiff = abs(a[0] - avg);

  for (int i = 1; i < n; ++i) {
    double diff = abs(a[i] - avg);
    if (diff < minDiff) {
      minDiff = diff;
      closest = a[i];
    }
  }
  cout << endl;
  cout << "sum >"<< sumP << " sum < "<<sumO<<endl;
  cout << "sr arf = "<< sumAll / 10 << " closest = "<< closest<<endl;
  cout << "sum: "<<sumAll - max - min <<endl;
  cout << "\nГоризонтальная гистограмма:" << endl;
  int maxAbsValue = 0;
  for (int i = 0; i < n; ++i) {
    if (abs(a[i]) > maxAbsValue) {
      maxAbsValue = abs(a[i]);
    }
  }

  for (int i = 0; i < n; ++i) {
    if (a[i] < 0) {
      for (int j = 0; j < maxAbsValue - abs(a[i]); ++j) {
        cout << " ";
      }
      for (int j = 0; j < abs(a[i]); ++j) {
        cout << "*";
      }
      cout << "|";
    } else {
      for (int j = 0; j < maxAbsValue; ++j) {
        cout << " ";
      }
      cout << "|"; // Ось
      for (int j = 0; j < a[i]; ++j) {
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}