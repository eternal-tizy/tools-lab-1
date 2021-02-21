/**
 * @file calc.cpp
 * @author John Doe
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdexcept>

/**
 * @brief Выполняет выбранную операцию для двух чисел
 * 
 * @param a первое число
 * @param b второе число
 * @param operation тип операции - сложение(+)/вычитание(-)/умножение(*)/деление(/)
 * @return double 
 */
double calc(double a, double b, char operation){
    switch(operation){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
            throw std::invalid_argument("operation");
    }
}