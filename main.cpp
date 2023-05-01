/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <thread>
#include <chrono>

void matrix_multiplex() {
  int a[10][10] = {
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1}
  };
  int b[10][10] = {
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1}
  };
  int mul[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      mul[i][j] = 0;
      for (int k = 0; k < 10; k++) {
        mul[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

int main(int argc, const char *argv[]) {


  {
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(10000ms);
  }
  
  
  // timepoint 
  
  int num_of_runs = 10000;
  for (int i = 0; i < num_of_runs; ++i) {
      matrix_multiplex();
  }
  
  // timepoint

  return 0;
}