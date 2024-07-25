#include <iostream>
using namespace std;
#include "read_number.h"
#pragma once 

short ReadNumberInRangeFromTo(int from, int to, string msg){

    int numberToCheckFromFuncOr = 0;

    do
    {
      numberToCheckFromFuncOr = ReadNumber(msg);

    } while ( numberToCheckFromFuncOr < from || numberToCheckFromFuncOr > to);
    
      
  return numberToCheckFromFuncOr;
}