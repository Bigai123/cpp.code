#include <iostream>
#include <vector>

void printZigzagMatrix(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    int num = 1; // 用于�?充矩阵的数字

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // 偶数行，从左到右�?�?
            for (int j = 0; j < n; ++j) {
                matrix[i][j] = num++;
            }
        } else {
            // 奇数行，从右到左�?�?
            for (int j = n - 1; j >= 0; --j) {
                matrix[i][j] = num++;
            }
        }
    }

    // 输出矩阵
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << "\t"; // 使用制表符分�?
        }
        std::cout << std::endl; // 换�??
    }
}

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    printZigzagMatrix(n);

    return 0;
}
