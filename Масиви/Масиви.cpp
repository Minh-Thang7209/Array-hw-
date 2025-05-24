#include <iostream>
#include <Windows.h>
#include <cstdlib>;
#include<ctime>;

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    //1
 /*   const int size = 10;
    int arr[size];
    int max, min;
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 100;

    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }

    }
    cout << "максимальний елемент: " << max << endl;
    cout << "мінімальний елемент: " << min << endl;*/


    //2
 /*  int profit[12];
    int startMonth, endMonth;
    cout << "Введіть прибуток за кожен місяць:" << endl;
    for (int i = 0; i < 12; i++) {
        cin >> profit[i];
        if (profit[i] < 0) {
            cout << "Невірний вхід. Прибуток має бути додатним числом." << endl;
        }

    }
    cout << "Введіть місяць початку: ";
    cin >> startMonth;
    cout << "Введіть кінцевий місяць: ";
    cin >> endMonth;
    if (startMonth < 1 || startMonth > 12 || endMonth < 1 || endMonth > 12) {
        cout << "Невірний вхід. Місяць має бути від 1 до 12." << endl;
    }
    if (startMonth > endMonth) {
        cout << "Невірний вхід. Початковий місяць має бути меншим або дорівнювати кінцевому." << endl;
    }
    int minProfit = INT_MAX ;
    int minMonth = -1;
    for (int i = startMonth - 1; i < endMonth; i++) {
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i + 1;

        }

    }
    cout << "Місяць з мінімальним прибутком: " << minMonth << endl;*/
}