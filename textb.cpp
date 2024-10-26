#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 检查给定的组合�?否满足条�?
bool isValid(int x, int y, int z) {
    return (10 <= x && x <= 99) && (100 <= y && y <= 999) && (1000 <= z && z <= 9999);
}

// 检查数字是否都�?�?一�?
bool hasUniqueDigits(int x, int y, int z) {
    vector<bool> digitUsed(10, false); // 创建一�?用于标�?�数字的数组
    int num[3] = {x, y, z}; // �? x, y, z 存入数组

    for (int i = 0; i < 3; ++i) {
        while (num[i] > 0) {
            int digit = num[i] % 10; // 获取最后一位数�?
            if (digit == 0 || digitUsed[digit]) // 如果数字�?0或已�?使用，则返回false
                return false;
            digitUsed[digit] = true; // 标�?�数字已使用
            num[i] /= 10; // 移除最后一位数�?
        }
    }

    return true; // 所有数字都�?�?一�?
}

int main() {
    for (int x = 10; x < 100; ++x) { // 遍历 x 的范�?
        for (int y = 100; y < 1000; ++y) { // 遍历 y 的范�?
            int z = x * y; // 计算 z

            if (isValid(x, y, z) && hasUniqueDigits(x, y, z)) { // 检查条�?
                cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
            }
        }
    }

    return 0;
}

