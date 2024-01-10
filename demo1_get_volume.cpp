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
主要思路是枚举输入数据可能的因子，并判断是否能被输入数整除。

@param length 家具长度(浮点数)
@param length 家具宽度(浮点数)
@param length 家具高度(浮点数)
@return 家具的体积(浮点数)
*/
float get_volume(float length, float width, float height = 3.0)  {
	return length * width * height;
}

/**
@brief 根据长宽高计算家具的体积
主要思路是枚举输入数据可能的因子，并判断是否能被输入数整除。

@param length 家具长度(整数)
@param length 家具宽度(整数)
@param length 家具高度(整数)
@return 家具的体积(整数)
*/
int get_volume(int length, int width, int height = 3)  {
	return length * width * height;
}


int main() {
    float flength, fwidth;
    cin >> flength >> fwidth;
    cout  << fixed << setprecision(2) << get_volume(flength, fwidth) << endl;

    int length, width;
    cin >> length >> width;
    cout  << get_volume(length, width) << endl;

    
    return 0;
}