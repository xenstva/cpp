#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, operation, result;
    
    cout << "Введите первое число:";
        cin >> num_1; 
    cout << "Введите второе число:";
        cin >> num_2;
    cout << "1. сложение +" << endl;
    cout << "2. вычетание -" << endl;
    cout << "3. умножение *" << endl;
    cout << "4. деление /" << endl;
    cout << "введите номер операции:";
        cin >> operation;

    if (operation == 1) {
        result = num_1 + num_2;
    }
    else if (operation == 2) {
        result = num_1 / num_2;
    }
    else if (operation == 3) {
        result = num_1 * num_2;
    }
    else if (operation == 4) {
        result = num_1 / num_2;
    }
    else {
        cout << "такого действия нет";
    }
    cout << "ответ:";
    cout << result << endl;
    return 0;
}