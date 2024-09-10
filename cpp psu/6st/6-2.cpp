//а) Заполнить массив из 15 элементов случайными целыми числами в диапазоне [–90; 90] и напечатать их в одну строку.
// б) Упорядочить массив так, чтобы вначале шли все отрицательные элементы, затем нули(если они есть),а потом все положительные.
// в) Упорядочить массив по возрастанию модулей элементов.
// г) Упорядочить массив так, чтобы вначале шли чётные элементы, а потом все нечётные.
#include <iostream>
#include <random>
#include <algorithm>

using namespace std;
int main() {
  int n = 15;
  int a[n];
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(-90,90);
  for(int i= 0; i < n; ++i) {
    a[i] = dist(gen);
  }
  for(int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }


  sort(a, a+n, [](int x, int y) {
    if((x < 0 && y >= 0) || (x == 0 && y > 0)) {
      return true;
    }
    if((x >= 0 && y < 0) || (x > 0 && y == 0)) {
      return false;
    }
    return false;
  });
  cout <<endl;
  for(int i = 0; i < n; ++i) {

    cout << a[i] << " ";
  }


  cout<<endl;
  sort(a, a +n, [](int x, int y) {
    return abs(x) < abs(y);
  });
  for(int i = 0; i < n; ++i) {

    cout << a[i] << " ";
  }


cout<<endl;
  sort(a,a+n,[](int x, int y) {
    return x % 2 == 0;
  });
  for(int i = 0; i < n; ++i) {

    cout << a[i] << " ";
  }
  return 0;
}