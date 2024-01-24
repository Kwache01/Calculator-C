#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int choice;
    double a, b, result;

    while (true) {
        cout << "Выберите функцию калькулятора:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cin >> choice;

        if (choice == 9) {
            break;
        }

        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a + b;
            cout << "Результат: " << result << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a - b;
            cout << "Результат: " << result << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a * b;
            cout << "Результат: " << result << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0) {
                cout << "Ошибка: деление на ноль" << endl;
            }
            else {
                result = a / b;
                cout << "Результат: " << result << endl;
            }
            break;
        case 5:
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            result = pow(a, b);
            cout << "Результат: " << result << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> a;
            result = sqrt(a);
            cout << "Результат: " << result << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> a;
            result = a * 0.01;
            cout << "Результат: " << result << endl;
            break;
        case 8:
            int factorial = 1;
            for (int i = 1; i <= a; i++) {
                factorial *= i;
            }
            cout << "Факториал числа " << a << " равен: " << factorial << endl;
            break;
            cout << "Ошибка: неверный выбор функции" << endl;
            break;

        }
    }
    return 0;
}