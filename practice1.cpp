/*
 * @Description: C++ Practice
 * @Author: TomHeaven
 * @Date: 2023-12-12 15:48:25
 */
#include <iostream>
#include <iomanip>

using namespace std;

/**
@brief 根据长宽高计算家具的体积

@param length float 家具长度
@param width float 家具宽度
@param height float 家具高度
@return float 家具的体积
*/
//  float get_volume
float get_volume(float length , float width = 0.6, float height = 3.0) {
    return length * width * height;
}

int main() {
    float length;
    cin >> length;
    cout << fixed << setprecision(2) << get_volume(length) << endl;
    cout << "This is a dev version!" << endl;
    return 0;
}