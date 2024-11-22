#include "mathlib.hpp"
#include <cmath>
#include <stdexcept>

int add (int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
double divide(int a, int b){
    if(b == 0){
        throw std::invalid_argument("Division by zero");
    }
    return static_cast<double>(a) / b;
}
