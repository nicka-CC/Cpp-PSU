//Ввести дату в формате "dd mm" (dd от 1 до 31, mm от 1 до 12,).
//Вывести соответствующий этой дате день недели  или выдать сообщение об ошибочных исходных данных
//(например, даты 30 02 и 10 18 некорректны).
//1 января считать понедельником, как в 2007 году, год считать невисокосным.
//(Подсказка: первоначально надо получить по исходной дате соответствующий номер дня в году.)
#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

bool isValidDate(int day, int month) {
  int isDayInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  if(month < 1 || month > 12) {
    return false;
  }
  if(day < 1 || day > isDayInMonth[month-1]) {
    return false;
  }
  return true;
}
int getDayOfYear(int day, int month) {
  int isDayInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int dayOfYear = 0;
  for(int i = 0; i < month - 1; ++i) {
    dayOfYear += isDayInMonth[i];
  }
  dayOfYear += day;
  return dayOfYear;
}
string getDayOfWeek(int dayOfYear) {
  string daysOfWeek[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
  int dayOfWeekIndex = (dayOfYear - 1)%7;
  return daysOfWeek[dayOfWeekIndex];
}
int main() {
  int day,month;
  cin>> day >>month;
  if(!isValidDate(day,month)) {
    cout << "bad!";
    return 1;
  }
  int dayOfYear = getDayOfYear(day,month);
  string dayOfWeek = getDayOfWeek(dayOfYear);
  cout << dayOfWeek<<endl;
  return 0;
}