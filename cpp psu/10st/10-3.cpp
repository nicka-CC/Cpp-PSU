//Описать структуру STUDENT, содержащую следующие поля:а)фамилия и инициалы студента;б)номер группы;в)результаты последней сессии(массив из5 элементов).
//Написать программу, выполняющую следующие действия: а)чтение информации о10студентах из текстового файла;б)вывод полной информации о студентах на экран, записи должны быть упорядочены по возрастанию среднего балла;в
//)вывод на экран информации о студентах, имеющих хотя бы одну оценку выше заданной(или сообщение об их отсутствии).


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

struct STUDENT {
    string name;
    int groupNumber;
    int grades[5];
};
void readStudentsFromFile(const string& filename, vector<STUDENT>& students) {
    ifstream inputFile(filename);
    STUDENT student;
    while(inputFile >> student.name >> student.groupNumber
        >> student.grades[0] >> student.grades[1]
        >> student.grades[2]>> student.grades[3]>> student.grades[4]) {
        students.push_back(student);
    }
    inputFile.close();
}
double calculateAverage(const STUDENT& student) {
    return accumulate(begin(student.grades), end(student.grades), 0.0) / 5;
}
void sortStudentsByAverage(vector<STUDENT>& students) {
    sort(students.begin(), students.end(), [](const STUDENT& a, const STUDENT& b) {
        return calculateAverage(a) > calculateAverage(b);
    });
};
void printAllStudent(const vector<STUDENT>& students) {
    for(const auto& student : students) {
        cout << "fio: " << student.name
        << ", number group: " << student.groupNumber
        << ", numbers: ";
        for(int grade : student.grades) {
            cout << grade << " ";
        }
        cout << "ocen: "<< calculateAverage(student) <<endl;
    }
}
void printStudentsWithHighGrades(const vector<STUDENT>& students, int threshold) {
    bool found = false;
    for (const auto& student : students) {
        if (any_of(begin(student.grades), end(student.grades), [threshold](int grade) { return grade > threshold; })) {
            cout << "fio: " << student.name
          << ", number group: " << student.groupNumber
          << ", numbers: ";
            for (int grade : student.grades) {
                cout << grade << " ";
            }
            cout << endl;
            found = true;
        }
    }

}
int main() {
    vector<STUDENT> students;
    string filename = "test.txt";
    readStudentsFromFile(filename, students);
    sortStudentsByAverage(students);
    printAllStudent(students);
    int gradeThreshold;
    cin >> gradeThreshold;
    printStudentsWithHighGrades(students, gradeThreshold);
    return 0;
}
