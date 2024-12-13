#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> // Для вызова system()

using namespace std;

void saveDataForGnuplot(const vector<vector<double>>& probabilities) {
    ofstream dataFile("data.dat"); // Файл для данных
    if (!dataFile.is_open()) {
        cerr << "Ошибка: не удалось создать файл данных!" << endl;
        return;
    }

    // Сохраняем данные в файл
    for (size_t i = 0; i < probabilities.size(); ++i) {
        dataFile << i; // Номер выстрела
        for (size_t j = 0; j < probabilities[i].size(); ++j) {
            dataFile << " " << probabilities[i][j]; // Значение вероятности для каждого состояния
        }
        dataFile << endl;
    }

    dataFile.close();
    cout << "Данные сохранены в 'data.dat'" << endl;
}

void generateGnuplotScript() {
    ofstream scriptFile("plot_commands.plt"); // Файл с расширением .plt
    if (!scriptFile.is_open()) {
        cerr << "Ошибка: не удалось создать файл скрипта!" << endl;
        return;
    }

    // Генерация скрипта для Gnuplot
    scriptFile << "set terminal png size 800,600\n";
    scriptFile << "set output 'state_probabilities.png'\n";
    scriptFile << "set title 'State Probabilities Over Shots'\n";
    scriptFile << "set xlabel 'Number of Shots'\n";
    scriptFile << "set ylabel 'Probability'\n";
    scriptFile << "set grid\n";
    scriptFile << "plot ";

    // Генерация команд для каждого состояния
    scriptFile << "'data.dat' using 1:2 with lines title 'Цель невредима', \\\n";
    scriptFile << "     'data.dat' using 1:3 with lines title 'Незначительные повреждения', \\\n";
    scriptFile << "     'data.dat' using 1:4 with lines title 'Значительные повреждения', \\\n";
    scriptFile << "     'data.dat' using 1:5 with lines title 'Полное уничтожение'\n";

    scriptFile.close();
    cout << "Скрипт сохранен в 'plot_commands.plt'" << endl;
}

void runGnuplot() {
    int retCode = system("gnuplot plot_commands.plt"); // Запуск файла .plt через Gnuplot
    if (retCode == 0) {
        cout << "График сохранен в 'state_probabilities.png'" << endl;
    } else {
        cerr << "Ошибка при выполнении Gnuplot!" << endl;
    }
}

int main() {
    vector<vector<double>> transitionMatrix = {
        {0.2, 0.3, 0.4, 0.1},
        {0.0, 0.3, 0.5, 0.2},
        {0.0, 0.0, 0.3, 0.7},
        {0.0, 0.0, 0.0, 1.0}
    };

    vector<double> currentProbabilities = {1.0, 0.0, 0.0, 0.0};
    int shoots = 100; // Измените количество выстрелов здесь

    vector<vector<double>> allProbabilities;
    allProbabilities.push_back(currentProbabilities);

    // Вычисление вероятностей на каждом шаге
    for (int shot = 1; shot <= shoots; ++shot) {
        vector<double> nextProbabilities(4, 0.0);
        for (size_t i = 0; i < currentProbabilities.size(); ++i) {
            for (size_t j = 0; j < transitionMatrix[i].size(); ++j) {
                nextProbabilities[j] += currentProbabilities[i] * transitionMatrix[i][j];
            }
        }
        currentProbabilities = nextProbabilities;
        allProbabilities.push_back(currentProbabilities);
    }

    // Сохранение данных и генерация скрипта для Gnuplot
    saveDataForGnuplot(allProbabilities);
    generateGnuplotScript();
    runGnuplot();

    return 0;
}
