#include <iostream>
using namespace std;

// 1. Функция для сложения вещественных чисел
double sum(double a, double b) {
    return a + b;
}

// 2. Перегруженная функция для сложения комплексных чисел
// Принимает 4 числа: re1, im1 (первое число) и re2, im2 (второе число)
// Результат записывает в переменные res_re и res_im (через ссылки &)
void sum(double re1, double im1, double re2, double im2, double &res_re, double &res_im) {
    res_re = re1 + re2;
    res_im = im1 + im2;
}

int main() {
    setlocale(LC_ALL, "Russian.UTF-8");

    // --- А) Сложение вещественных чисел ---
    double x = 3.5, y = 2.1;
    cout << "Сумма вещественных чисел: " << sum(x, y) << endl;

    // --- Б) Сложение комплексных чисел ---
    // Первое число: 2 + 3i
    double re1 = 2.0, im1 = 3.0;
    // Второе число: 4 + 1i
    double re2 = 4.0, im2 = 1.0;
    
    // Переменные для результата
    double res_re, res_im;
    
    // Вызываем вторую функцию sum (она понимает, что передали 6 параметров)
    sum(re1, im1, re2, im2, res_re, res_im);

    cout << "Сумма комплексных чисел: " << res_re << " + " << res_im << "i" << endl;

    return 0;
}