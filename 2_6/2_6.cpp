#include <iostream>

using namespace std;

/*
 * Принцип работы расписан в задаче 2_4
 */

int main() {
    int n;

    cout << "Введите N" << endl;
    cin >> n;

    string s;

    for(int i = 0; i < n; i++) {
        s.append(i, ' ');         // Добавили пробелы
        s.append(n-i, '*');    // Добавили звездочку
        cout << s << endl;            // Вывели, что получилось
        s.clear();                    // Почистили
    }

    return 0;
}