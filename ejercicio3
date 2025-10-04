#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char op;

    cout << "=== Calculadora sencilla ===\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> op;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
        case 'x':
        case 'X':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: no se puede dividir entre cero.\n";
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            cout << "Operador invalido.\n";
            return 1;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}

