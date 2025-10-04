#include <iostream>
using namespace std;

bool esPalindromo(int x) {
    if (x < 0) return false;
    long long invertido = 0;
    int original = x;

    while (x != 0) {
        int digito = x % 10;
        invertido = invertido * 10 + digito;
        x /= 10;
    }

    return invertido == original;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPalindromo(numero))
        cout << numero << " es un palindromo." << endl;
    else
        cout << numero << " no es un palindromo." << endl;

    return 0;
}
