
#include <iostream>
#include <vector>
int main() {
  const int size = 4;
  std::vector<std::vector<int>> matrixC(size, std::vector<int>(size, 0));
  int values[size][size]= {
  {0,30,7,3},
  {2,0,9,50},
  {7,8,10,2},
  {4,4,1,9}};
  int row_indeces[size] = {1,0,2,3};
  int col_indeces[size] = {1,0,2,3};
  for(int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      matrixC[row_indeces[i]][col_indeces[j]] = values[i][j];
    }
  };
  std::cout << "Matrix:" << std::endl;
  for(int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      std::cout<<matrixC[row_indeces[i]][col_indeces[j]];
    }
    std::cout<<std::endl;
  }



  //2 - 3 - 4
  int v1= matrixC[1][2];
  int v2 = matrixC[2][3];
  int back_v1 = matrixC[3][2];
  int back_v2 = matrixC[2][1];
  int min_value1 = std::min(v1,v2);
  std::vector<std::vector<int>> matrixC1(size, std::vector<int>(size, 0));
  for (int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      if(i == 1 && j == 2) {
        matrixC1[i][j] = matrixC[i][j] - min_value1;
      }else if(i == 2 && j == 3) {
        matrixC1[i][j] = matrixC[i][j] - min_value1;
      }else if(i == 3 && j == 2) {
        matrixC1[i][j] = matrixC[i][j] + min_value1;
      }else if(i == 2 && j == 1) {
        matrixC1[i][j] = matrixC[i][j] + min_value1;
      }else {
        matrixC1[i][j] = matrixC[i][j];
      }
    }
  }
  std::cout << "New Matrix:" << std::endl;
  for(int i = 0; i < size ; ++i) {
    for(int j = 0; j < size ; ++j) {
      std::cout<< matrixC1[row_indeces[i]][col_indeces[j]];
    }
    std::cout<<std::endl;
  }
  std::cout << "MinC1:"<<min_value1 << std::endl;

  //2->1->4
  int v11 = matrixC1[1][0];
  int v22 = matrixC1[0][3];
  int back_v11 = matrixC1[3][0];
  int back_v22 = matrixC1[0][1];
  int min_value2 = std::min(v11, v22);
  std::vector<std::vector<int>> matrixC2(size, std::vector<int>(size, 0));
  for (int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      if(i == 1 && j == 0) {
        matrixC2[i][j] = matrixC1[i][j] - min_value2;
      }else if(i == 0 && j == 3) {
        matrixC2[i][j] = matrixC1[i][j] - min_value2;
      }else if(i == 3 && j == 0) {
        matrixC2[i][j] = matrixC1[i][j] + min_value2;
      }else if(i == 0 && j == 1) {
        matrixC2[i][j] = matrixC1[i][j] + min_value2;
      }else {
        matrixC2[i][j] = matrixC1[i][j];
      }
    }
  }
  std::cout << "New Matrix2:" << std::endl;
  for(int i = 0; i < size ; ++i) {
    for(int j = 0; j < size ; ++j) {
      std::cout<< matrixC2[row_indeces[i]][col_indeces[j]];
    }
    std::cout<<std::endl;
  }
  std::cout << "MinC2:"<<min_value2 << std::endl;
  //2->3->1->4
  int v31 = matrixC2[1][2];
  int v32 = matrixC2[2][0];
  int v33 = matrixC2[0][3];
  int back_v31 = matrixC2[3][0];
  int back_v32 = matrixC2[0][2];
  int back_v33 = matrixC2[2][1];
  int min_value3 = std::min(std::min(v31, v32), v33);
  std::vector<std::vector<int>> matrixC3(size, std::vector<int>(size, 0));
  for (int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      if(i == 1 && j == 2){
        matrixC3[i][j] = matrixC2[i][j] - min_value3;
      }else if(i == 2 && j == 0) {
        matrixC3[i][j] = matrixC2[i][j] - min_value3;
      }else if(i == 0 && j == 3) {
        matrixC3[i][j] = matrixC2[i][j] - min_value3;
      }else if(i == 3 && j == 0) {
        matrixC3[i][j] = matrixC2[i][j] + min_value3;
      }else if(i == 0 && j == 2) {
        matrixC3[i][j] = matrixC2[i][j] + min_value3;
      }else if(i == 2 && j == 1) {
        matrixC3[i][j] = matrixC2[i][j] + min_value3;
      }else {
        matrixC3[i][j] = matrixC2[i][j];
      }
    }
  }
  std::cout << "New Matrix3:" << std::endl;
  for(int i = 0; i < size ; ++i) {
    for(int j = 0; j < size ; ++j) {
      std::cout<< matrixC3[row_indeces[i]][col_indeces[j]];
    }
    std::cout<<std::endl;
  }
  std::cout << "MinC3:"<<min_value3 << std::endl;
  //2->4
  int v41 = matrixC3[1][3];
  int back_v41 = matrixC2[3][1];
  int min_value4 = v41;
  std::vector<std::vector<int>> matrixC4(size, std::vector<int>(size, 0));
  for (int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      if(i == 1 && j == 3){
        matrixC4[i][j] = matrixC3[i][j] - min_value4;
      }else if(i == 3 && j == 1) {
        matrixC4[i][j] = matrixC3[i][j] + min_value4;
      }else {
        matrixC4[i][j] = matrixC3[i][j];
      }
    }
  }
  std::cout << "New Matrix4:" << std::endl;
  for(int i = 0; i < size ; ++i) {
    for(int j = 0; j < size ; ++j) {
      std::cout<< matrixC4[row_indeces[i]][col_indeces[j]];
    }
    std::cout<<std::endl;
  }
  std::cout << "MinC4:"<<min_value4 << std::endl;
  int min_value = min_value1 + min_value2 + min_value3 + min_value4;
  std::cout << "Min:"<<min_value << std::endl;
  std::vector<std::vector<int>> matrixX(size, std::vector<int>(size, 0));
  for (int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      if(matrixC4[i][j] < matrixC[i][j]) {
        matrixX[i][j] = matrixC[i][j] - matrixC4[i][j];
      }else {
        matrixX[i][j] = 0;
      }
    }
  }
  std::cout << "Matrix X:" << std::endl;
  for(int i = 0; i < size ; ++i) {
    for(int j = 0; j < size ; ++j) {
      std::cout<< matrixX[row_indeces[i]][col_indeces[j]];
    }
    std::cout<<std::endl;
  }


  int sumFirstRow = 0;
  for (int j = 0; j < size; ++j) {
    sumFirstRow += matrixX[1][col_indeces[j]];
  }

  int sumLastColumn = 0;
  for (int i = 0; i < size; ++i) {
    sumLastColumn += matrixX[i][size - 1];
  }

  if((sumFirstRow == sumLastColumn) && (sumFirstRow == min_value)) {
    std::cout << "ok" << std::endl;
  }else {
    std::cout << "bad" << std::endl;
  }
  
  return 0;
  //максимальное значение
}