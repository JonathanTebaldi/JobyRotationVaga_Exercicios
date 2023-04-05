#include <iostream>

using namespace std;

bool fibonacci(int n) {
    int a = 0, b = 1;
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return a == n || b == n;
}

int main() {
	
	setlocale(LC_ALL,"portuguese");
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    if (fibonacci(numero)) {
        cout << "O número " << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << numero << " não pertence à sequência de Fibonacci." << endl;
    }
    return 0;
}

