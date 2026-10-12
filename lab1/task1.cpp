#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // --- 1. Вычисления с типом float ---
    float a_f = 1000.0f;
    float b_f = 0.0001f;

    // Промежуточные переменные
    float a_sq_f = a_f * a_f;               // a^2
    float two_ab_f = 2.0f * a_f * b_f;      // 2ab
    float sum_f = a_f + b_f;                // (a+b)
    float sum_sq_f = sum_f * sum_f;         // (a+b)^2
    float b_sq_f = b_f * b_f;               // b^2

    // Итоговое выражение
    float result_float = (sum_sq_f - (a_sq_f + two_ab_f)) / b_sq_f;

    // --- 2. Вычисления с типом double ---
    double a_d = 1000.0;
    double b_d = 0.0001;

    // Промежуточные переменные
    double a_sq_d = a_d * a_d;
    double two_ab_d = 2.0 * a_d * b_d;
    double sum_d = a_d + b_d;
    double sum_sq_d = sum_d * sum_d;
    double b_sq_d = b_d * b_d;

    // Итоговое выражение
    double result_double = (sum_sq_d - (a_sq_d + two_ab_d)) / b_sq_d;

    // --- 3. Вывод результатов ---
    cout << fixed << setprecision(12); // Вывод 12 знаков после запятой
    cout << "Результат (float):  " << result_float << endl;
    cout << "Результат (double): " << result_double << endl;

    return 0;
}