#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long prhf(string S) // Función de hash
{
    int n = S.length();
    int p = 31;
    int m = 1e9 + 9;
    long long valorHash = 0;
    long long potencia = 1;

    for (int i = 0; i < n; i++)
    {
        valorHash = (valorHash + (S[i] - 'a' + 1) * potencia) % m;
        potencia = (potencia * p) % m;
    }

    return valorHash;
}

int main()
{
    string input;
    cout << "Ingresar cadena: ";
    getline(cin, input); // Leer cadena

    long long hashValue = prhf(input);
    cout << hashValue << endl;

    return 0;
}