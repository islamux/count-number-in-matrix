#include <iostream>
#include <string>
using namespace std;
#pragma once

int ReadNumber(string msgToUserToEnterNumber){

    int num;
    cout << msgToUserToEnterNumber ;
    cin >> num;

    return num;
}


