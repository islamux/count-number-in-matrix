#include <iostream>
using namespace std;

#pragma once 

short CheckGivenNumberINMatrix(int arr[3][3], short rows, short cols, short num)
{
    short counter  = 0;

    for (short i = 0; i  < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (num == arr[i][j])
            {
                counter++;
            }
            
        }
    }  return counter;
}

