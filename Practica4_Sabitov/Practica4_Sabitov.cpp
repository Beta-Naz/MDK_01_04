#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    //---- Задание 1 ----
    cout << "---- Задание 1 ----" << endl;
    cout << "Вычисление суммы четных положительных чисел." << endl;
    cout << "Введите количество суммируемых чисел и нажмите <Enter>:";
    int countNumber;
    cin >> countNumber;
    while (cin.fail() || countNumber <= 0) {
        cout << "Ошибка! Введите целое положительное число:";
        cin >> countNumber;
    }
    int answer = 0;
    int y = 2;
    for (int i = 0; i < countNumber; i++) {
        answer = answer + y;
        y = y + 2;
    }
    cout << "Сумма первых " << countNumber
        << " положительных четных чисел равна " << answer << "." << endl;
    //---- Задание 2 ----
    cout << "---- Задание 2 ----" << endl;
    double eps;
    cout << "Задайте точность вычисления ПИ:";
    cin >> eps;
    while (cin.fail() || eps <= 0 || eps >= 1) {
        cout << "Ошибка! Введите точность (0 < eps < 1):";
        cin >> eps;
    }
    double PI = 0.0;
    double term = 1.0;
    int sign = 1;
    int n = 0;
    int denom = 1;
    double modul = term;
    while (modul >= eps) {
        PI = PI + sign * term;
        n = n + 1;
        denom = denom + 2;
        sign = -sign;
        term = 1.0 / denom;

        modul = term;
        if (modul < 0) modul = -modul;
    }
    PI = PI * 4.0;

    cout << "Значение числа ПИ с точностью " << fixed << setprecision(6) << eps
        << " равно " << fixed << setprecision(6) << PI << endl;
    cout << "Просуммировано " << n << " членов ряда." << endl;

    //---- Задание 3 ----
    cout << "---- Задание 3 ----" << endl;
    int countNum;
    cout << "Задайте количество чисел:";
    cin >> countNum;
    while (cin.fail() || countNum <= 0) {
        cout << "Ошибка! Введите целое положительное число:";
        cin >> countNum;
    }
    double newNum;
    double modulNum;
    double maxAbs = -1;
    int iMax = 0;
    for (int i = 1; i <= countNum; i++) {
        cout << "Введите " << i << "-е число:";
        cin >> newNum;
        while (cin.fail() || newNum < 0) {
            cout << "Ошибка! Введите положительное число:";
            cin >> newNum;
        }
        if (modulNum < 0) modulNum = -modulNum;

        if (newNum > maxAbs) {
            maxAbs = newNum;
            iMax = i;
        }
    }
    cout << "Максимальный по модулю элемент был введен " << iMax << "-м" << endl;

    //---- Задание 4 ----
    cout << "---- Задание 4 ----" << endl;
    int naturalNum;
    cout << "Задайте натуральное число: ";
    cin >> naturalNum;
    while (cin.fail() || naturalNum < 0) {
        cout << "Ошибка! Введите натуральное число: ";
        cin >> naturalNum;
    }
    int answer1 = 0;
    int tmp = naturalNum;
    while (tmp > 0) {
        answer1 = answer1 * 10 + tmp % 10;
        tmp = tmp / 10;
    }
    cout << "Натуральное число обратное: " << answer1 << endl;

    //---- Задание 5 ----
    cout << "---- Задание 5 ----" << endl;
    int kola;
    int voda;
    // КОЛА + КОЛА = ВОДА
    for (int k = 1; k <= 9; k++) {
        for (int o = 0; o <= 9; o++) {
            if (o != k) {
                for (int l = 0; l <= 9; l++) {
                    if (l != k && l != o) {
                        for (int a = 0; a <= 9; a++) {
                            if (a != k && a != o && a != l) {
                                for (int v = 1; v <= 9; v++) {
                                    if (v != k && v != o && v != l && v != a) {
                                        for (int d = 0; d <= 9; d++) {
                                            if (d != k && d != o && d != l && d != a && d != v) {
                                                kola = k * 1000 + o * 100 + l * 10 + a;
                                                voda = v * 1000 + o * 100 + d * 10 + a;
                                                if (kola * 2 == voda) {
                                                    cout << kola << " + " << kola << " = " << voda << endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}