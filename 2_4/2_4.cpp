#include <iostream>

using namespace std;

/*
 * user вводит n - бедро = высоту треугольника (сколько будет строк)
 * создаем строковую переменную s
 * запускаем цикл от 1 до n строки (я по привычке сделал от 0 до n-1, но сути не меняет)
 * к нашей строке, которую мы создали ранее, прибавляем нужное количество пробелов через функцию .append
 * далее прибавим нужное количество звездочек через тот же способ
 * выведем строку
 * очистим строку для дальнейшей работы
 */

/*
 * можно использовать и цикл, но это нерационально
 */

int main() {
    int n;

    cout << "Введите N" << endl;
    cin >> n;

    string s;

    for(int i = 0; i < n; i++) {
        s.append(n-i-1, ' ');   // Добавили пробелы
        s.append(2*i+1, '*');   // Добавили звездочку
        cout << s << endl;            // Вывели, что получилось
        s.clear();                    // Почистили
    }

    return 0;
}