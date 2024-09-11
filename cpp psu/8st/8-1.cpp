//а) Заполнить массив из 0 элементов случайными целыми числами в диапазоне [–30; 30] и напечатать их в одну строку.
// б) Подсчитать количество положительных и отрицательных элементов в массиве.
// в)Найти среднее арифметическое значений массива и определить в массиве значение, ближайшее к среднему арифметическому.
// г)Подсчитать сумму элементов в массиве между максимальным и минимальным(не включая сами границы).
// д)Построить горизонтальную гистограмму: ось нулевых значений проходит в центре экрана сверху вниз, отрицательные значения откладывать влево, положительные – вправо: Значения элементов массива = {-5, -6, 6, -4, 8, -2}
#include <iostream>
#include <random>
#include <cmath>

using namespace std;

const int n = 10;

void fillArray(int a[]) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(-30, 30);

    for (int i = 0; i < n; ++i) {
        a[i] = dist(gen);
    }
}

void printArray(const int a[]) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void countPositiveNegative(const int a[], int &sumP, int &sumN) {
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            sumN++;
        } else {
            sumP++;
        }
    }
}


double findAverageAndClosest(const int a[], double &closest) {
    int sumAll = 0;
    for (int i = 0; i < n; ++i) {
        sumAll += a[i];
    }
    double avg = static_cast<double>(sumAll) / n;

    closest = a[0];
    double minDiff = abs(a[0] - avg);
    for (int i = 1; i < n; ++i) {
        double diff = abs(a[i] - avg);
        if (diff < minDiff) {
            minDiff = diff;
            closest = a[i];
        }
    }
    return avg;
}


int sumBetweenMinMax(const int a[]) {
    int min = a[0], max = a[0];
    int minIndex = 0, maxIndex = 0;


    for (int i = 1; i < n; ++i) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }


    if (minIndex > maxIndex) {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }

    int sumBetween = 0;
    for (int i = minIndex + 1; i < maxIndex; ++i) {
        sumBetween += a[i];
    }
    return sumBetween;
}


void drawHistogram(const int a[]) {
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
            cout << "|";
            for (int j = 0; j < a[i]; ++j) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main() {
    int a[n], sumP = 0, sumN = 0;
    double closest;

    fillArray(a);
    cout << "Массив: ";
    printArray(a);

    countPositiveNegative(a, sumP, sumN);
    cout << sumP << endl;
    cout << sumN << endl;

    double avg = findAverageAndClosest(a, closest);
    cout <<  avg << endl;
    cout <<  closest << endl;

    int sumBetween = sumBetweenMinMax(a);
    cout << sumBetween << endl;


    drawHistogram(a);

    return 0;
}
