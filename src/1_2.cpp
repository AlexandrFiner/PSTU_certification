#include <iostream>

using namespace std;

/*
 * Пользователь вводит 2 любых целых числа
 * Если делитель равен нулю, то завераем программу с ошибкой (return 1) и выводим сообщение.
 * Иначе присваиваем значение вещественной переменной (используем float ибо нам не нужна большая точность)
 * Выводим результат
 */

int main()
{
    int a, b;
    cout << "Введите два числа, которые будут делится" << endl;
    cin >> a >> b;

    if(b == 0) {
        cout << "Невозможно деление на нуль" << endl;
        return 1;
    }

    // float(a) - для того, чтобы получить по итогу значение float, а не int

    float res;
    res = float(a)/b;

    cout << res << endl;
    return 0;
}