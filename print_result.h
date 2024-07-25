#include <iostream>
#include "check_given_num_in_matrix.h"
using namespace std; 

#pragma once

void PrintResult(int arr[3][3], short rows, short cols, short num)
{
    cout << "Given num is " << num << " " << "and it count = " << 
    CheckGivenNumberINMatrix(arr, rows, cols, num) << "\n";
    
}