#include <iostream>

double CtoK(double celsius) {
    return celsius + 273.15;
}

double KtoC(double kelvin) {
    return kelvin - 273.15;
}

int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int ВЫБОР;
    double temp;

     cout << "Выберите действие:\n";
     cout << "1. Из Цельсия в Кельвин\n";
     cout << "2. Из Кельвина в Цельсий\n";
     cout << "Ваш выбор: ";
     cin >> ВЫБОР;

    switch (ВЫБОР) {
    case 1:
        cout << "Введите температуру в Цельсиях: ";
         cin >> temp;
        cout << "Температура в Кельвинах: " << CtoK(temp) << endl;
        break;
    case 2:
        cout << "Введите температуру в Кельвинах: ";
         cin >> temp;
        cout << "Температура в Цельсиях: " << KtoC(temp) << endl;
        break;
    default:
         cout << "Некорректный выбор." << endl;
        break;
    }

    return 0;
}
