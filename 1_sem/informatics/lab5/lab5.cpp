#include <iostream>
using namespace std;

void swapRows(int arr[][3], int row1, int row2, int cols) {
    for (int j = 0; j < cols; j++) {
        int temp = arr[row1][j];
        arr[row1][j] = arr[row2][j];
        arr[row2][j] = temp;
    }
}

void sortByThirdColumn(int arr[][3], int rows) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            if (arr[j][2] > arr[j + 1][2]) {
                swapRows(arr, j, j + 1, 3);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int ROWS = 4;
    const int COLS = 3;
    
    int arr[ROWS][COLS] = {
        {10, 20, 5},
        {30, 40, 1},
        {50, 60, 9},
        {70, 80, 3}
    };

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    sortByThirdColumn(arr, ROWS);

    cout << "\nМассив после сортировки по 3-му столбцу:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}