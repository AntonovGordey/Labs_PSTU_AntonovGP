#include <iostream>
#include <cstdio> // Для gets
#include <cstring> // Для strlen
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian.UTF-8");

    char text[256]; // Массив для строки
    cout << "Введите текст (в конце поставьте точку):\n";
    gets(text); // Ввод строки (как требует задание)

    int len = strlen(text); // Длина всего текста

    // Переменные для самого длинного слова
    int max_len = 0;
    int max_start = 0; 
    
    // Переменные для самого короткого слова
    int min_len = 255; // Берем максимум
    int min_start = 0;

    int i = 0;
    while (i < len) {
        // Пропускаем пробелы, пока не найдем начало слова
        while (i < len && text[i] == ' ') {
            i++;
        }

        // Если дошли до точки или конца строки — останавливаемся
        if (i >= len || text[i] == '.') {
            break;
        }

        // Запоминаем, где началось слово
        int start = i;

        // Идем до конца слова (пока не пробел и не точка)
        while (i < len && text[i] != ' ' && text[i] != '.') {
            i++;
        }

        // Длина текущего слова
        int current_len = i - start;

        // Проверяем: если слово длиннее самого длинного
        if (current_len > max_len) {
            max_len = current_len;
            max_start = start;
        }

        // Проверяем: если слово короче самого короткого
        if (current_len < min_len) {
            min_len = current_len;
            min_start = start;
        }
    }

    // Выводим результат
    cout << "\nСамое длинное слово: ";
    for (int j = 0; j < max_len; j++) {
        cout << text[max_start + j];
    }
    cout << endl;

    cout << "Самое короткое слово: ";
    for (int j = 0; j < min_len; j++) {
        cout << text[min_start + j];
    }
    cout << endl;

    return 0;
}