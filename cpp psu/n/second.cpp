#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printStateProbabilities(const vector<double>& probabilities) {
  cout << fixed << setprecision(4);
  for (size_t i = 0; i < probabilities.size(); ++i) {
    cout << "P(S" << i + 1 << ") = " << probabilities[i] << " ";
  }
  cout << endl;
}

int main() {

  vector<vector<double>> transitionMatrix = {
    {0.2, 0.3, 0.4, 0.1},
    {0.0, 0.3, 0.5, 0.2},
    {0.0, 0.0, 0.3, 0.7},
    {0.0, 0.0, 0.0, 1.0}
  };

  vector<double> currentProbabilities = {1.0, 0.0, 0.0, 0.0};

  int shots = 5;

  cout << "Initial state probabilities:" << endl;
  printStateProbabilities(currentProbabilities);

  for (int shot = 1; shot <= shots; ++shot) {
    vector<double> nextProbabilities(4, 0.0);


    for (size_t i = 0; i < currentProbabilities.size(); ++i) {
      for (size_t j = 0; j < transitionMatrix[i].size(); ++j) {
        nextProbabilities[j] += currentProbabilities[i] * transitionMatrix[i][j];
      }
    }

    currentProbabilities = nextProbabilities;

    cout << "After shot " << shot << ":" << endl;
    printStateProbabilities(currentProbabilities);
  }

  return 0;
}
