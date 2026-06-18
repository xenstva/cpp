#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num_1, num_2, operation;
    double result = 0.0;
    char operation_string = '0';
    vector<string> history;
    
    while (true) {
        cout << "\n1. сложение +" << endl;
        cout << "2. вычитание -" << endl;
        cout << "3. умножение *" << endl;
        cout << "4. деление /" << endl;
        cout << "5. выход" << endl;
        cout << "6. история" << endl;
        cout << "выберите номер операции: ";
          cin >> operation;

        if (operation == 5) {
            cout << "выход" << endl;
            break;
        }

        if (operation == 6) {
            cout << "=== история ===" << endl;
            if (history.empty()) {
                cout << "История пуста." << endl;
            } else {
                for (int i = 0; i < history.size(); i++) {
                    cout << i + 1 << ". " << history[i] << endl;
                }
            }
            continue; 
        }

        if (operation < 1 || operation > 4) {
            cout << "ошибка: такого действия нет" << endl;
            continue;
        }

        cout << "Введите первое число: ";
        cin >> num_1; 
        cout << "Введите второе число: ";
        cin >> num_2;

        switch (operation) {
            case 1: result = num_1 + num_2; operation_string = '+'; break;
            case 2: result = num_1 - num_2; operation_string = '-'; break;
            case 3: result = num_1 * num_2; operation_string = '*'; break;
            case 4: 
                if (num_2 == 0) {
                    cout << "Ошибка: деление на ноль!" << endl;
                    continue;
                }
                result = (double)num_1 / num_2;
                operation_string = '/';
                break;
        }

        string entry = to_string(num_1) + " " + operation_string + " " + to_string(num_2) + " = " + to_string(result);
        history.push_back(entry);
        cout << "ответ: " << result << endl;
    }

    return 0;
}