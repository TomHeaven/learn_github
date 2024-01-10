/*
 * @Description: C++ Practice
 * @Author: TomHeaven
 * @Date: 2024-01-03 23:49:37
 */
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

// error: functions that differ only in their return type cannot be overloaded
// float add(int a, int b) {
//     return a + b;
// }

float add(float a, float b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// double add(float a, double b) {
//     return a + b;
// }

int main() {
    int int_a = 1, int_b = 2;
    float float_a = 1.1f, float_b = 2.2f;
    double double_a = 1.1f, double_b = 2.2f;

    cout << "int add: " << add(int_a, int_b) << endl;
    cout << "float add: " << add(float_a, float_b) << endl;
    // cout << "double add: " << add(double_a, double_b) << endl;

    // cout << "int_float add: " << add(int_a, float_b) << endl; // error: call to 'add' is ambiguous
    cout << "int_float add: " << add((float)int_a, float_b) << endl;
    // cout << "int_double add: " << add(float_a, double_b) << endl;

    return 0;
}