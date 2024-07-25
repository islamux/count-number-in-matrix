#include <iostream>
#include "read_number_in_range_from_to.h"
#include "print_matrix.h"
#include "print_result.h"
using namespace std;

int main()
{
    /*
        - Print Matrix

        - Check one by one --> (count num) ==>        {{9,0,0},
                                                      {0,9,0},
                                                      {0,0,9}}

        - PrintResult
    */


   // Declartion 
   int arr[3][3] = {{9,0,0},
                    {2,9,0},
                    {0,0,9}};
   short rows = 3;
   short cols = 3;
   short from = 0;
   short to = 10;

   // Read num from user
   short num =  ReadNumberInRangeFromTo(from, to, "Enter a number between 0 - 10: ");

    // Fill & Print Matrix1
    cout << "Matrix1: \n";
    PrintMatrix(arr, rows, cols, from);
    cout << "\n";

    // Result
    PrintResult(arr, rows, cols, num);
    return 0;
}