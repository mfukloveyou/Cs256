#include <iostream>
using namespace std;

// Hàm nhập ma trận từ người dùng
void input(int matrix[][100], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "input value [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Hàm hiển thị ma trận
void Showmatrix(int matrix[][100], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rowA, columnA, rowB, columnB;

    // Nhập kích thước cho ma trận A
    cout << "input row of matrix A: ";
    cin >> rowA;
    cout << "input column of matrix A: ";
    cin >> columnA;

    // Nhập kích thước cho ma trận B
    cout << "input row of matrix B: ";
    cin >> rowB;
    cout << "input column of matrix B: ";
    cin >> columnB;

    // Khai báo mảng để lưu trữ ma trận A và B
    int matrixA[100][100], matrixB[100][100];

    // Nhập giá trị cho ma trận A
    cout << "input value A:\n";
    input(matrixA, rowA, columnA);

    // input value B
    cout << "input value B:\n";
    input(matrixB, rowB, columnB);

    // Hiển thị nội dung của ma trận A và B
    cout << "content in A:\n";
    Showmatrix(matrixA, rowA, columnA);

    cout << "content in B:\n";
    Showmatrix(matrixB, rowB, columnB);

    return 0;
}
