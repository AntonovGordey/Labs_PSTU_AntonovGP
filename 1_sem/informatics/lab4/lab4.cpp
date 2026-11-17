#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian.UTF-8");
    
    int n;
    cout << "Введите исходный размер массива: ";
    cin >> n;
    
    int arr[100];
    int size = n;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10; 
    }
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0 && i > 0) {
            for (int j = size; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = arr[i - 1] + 2;
            size++;
        }
    }
    cout << "Измененный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}