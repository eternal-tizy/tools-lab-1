/**
 * @file main.cpp
 * @author John Doe
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include "calc.cpp"

using namespace std;

/**
 * @brief Точка входа в программу
 * 
 * @return int 
 */

int main(int count, char** args){

    cout << calc(0.2, 0.3, '-');
    return 0;
}