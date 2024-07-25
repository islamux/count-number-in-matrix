#include <iostream>
#include "nested_print_matrix.h"
#pragma once
using namespace std;

void PrintMatrix(int arr[3][3], short rows, short cols, short from)
{
    for (short i = 0; i < rows; i++)
    {
        NestedPrintMatrix(arr, rows, cols, from, i);
    }
    
}