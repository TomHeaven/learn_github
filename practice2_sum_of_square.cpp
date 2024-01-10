/*
 * @Description: C++ Practice
 * @Author: TomHeaven
 * @Date: 2024-01-03 23:53:02
 */
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief 计算两个整数的平方和
 * 
 * @param a 第一个整数
 * @param b 第而个整数
 * @return int 平方和
 */
int sum_of_square(int a, int b) {
    return a * a + b * b;
}

/**
 * @brief 计算两个双精度浮点数的平方和
 * 
 * @param a 第一个双精度浮点数
 * @param b 第而个双精度浮点数
 * @return double 平方和
 */
double sum_of_square(double a, double b) {
    return a * a + b * b;
}

int main() {
    int m, n;
    cout << "Enter two integers: ";
    cin >> m >> n;
    cout << sum_of_square(m, n) << endl;

    double x, y;
    cout << "Enter two float numbers: ";
    cin >> x >> y;
    cout << fixed << setprecision(2) << sum_of_square(x, y) << endl;

    return 0;
}
