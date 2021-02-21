/**
 * @file test.cpp
 * @author John Doe
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>

#include "calc.cpp"

using namespace std;


/**
 * @brief Тестирует функцию calc
 * 
 * @param a первое число
 * @param b второе число
 * @param operation тип операции - сложение(+)/вычитание(-)/умножение(*)/деление(/)
 * @param result ожидаемый результат
 */

void TEST(double a, double b, char operation, double result){
    string common = "";
    common  = "calc(" + to_string(a) + ", " + to_string(b) + ", " + operation +  ") ==" + to_string(result);
    if(calc(a, b, operation) == result){
        cout << "\033[1;32m" << common + " - TEST PASSED" << "\033[0m" << endl; 
    }else{
        cout << "\033[1;31m"  << common + " - TEST FAILED" << "\033[0m" << endl; 
    }
}

/**
 * @brief Точка входа в программу
 * 
 * @return int 
 */

int main(){
    TEST(1, 2, '+', 3);
    TEST(1, 2, '*', 2);
    TEST(1, 1, '*', 1);
    TEST(1, 1, '-', 0);
    TEST(1, 1, '/', 1);
    TEST(2, 2, '/', 1);
    TEST(2, -3, '+', -1);
}