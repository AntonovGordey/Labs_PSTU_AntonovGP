#include <iostream>
#include <cmath>   // Для cos, sin, log, fabs
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Константы задачи (double нужен для математики)
    double pi = 3.14159265;
    double a = pi / 5.0;          // Начало
    double b = 9.0 * pi / 5.0;    // Конец
    double h = (b - a) / 10;      // Шаг
    double eps = 0.0001;          // Точность
    int n = 40;                   // Количество членов

    // Шапка таблицы
    cout << "X\t\tSN\t\tSE\t\tY" << endl;
    cout << "--------------------------------------------------" << endl;

    // Внешний цикл по X
    for (double x = a; x <= b + h / 2; x = x + h) {
        
        // 1. Считаем сумму для n = 40
        double SN = 0;
        for (int i = 1; i <= n; i++) {
            SN = SN + cos(i * x) / i;
        }

        // 2. Считаем сумму с точностью eps
        double SE = 0;
        double term; // Текущий член ряда
        for (int i = 1; i <= 10000; i++) {
            term = cos(i * x) / i;
            SE = SE + term;
            
            // Если член стал очень маленьким, останавливаемся
            if (fabs(term) < eps) {
                break; 
            }
        }

        // 3. Точное значение функции Y
        double Y = -log(fabs(2.0 * sin(x / 2.0)));

        // Выводим результаты для текущего x
        cout << x << "\t" << SN << "\t" << SE << "\t" << Y << endl;
    }

    return 0;
}

    }

    return 0;
}