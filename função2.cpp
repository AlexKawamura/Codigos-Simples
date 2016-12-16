#include <iostream>
#include <math.h>

using namespace std;

int pot(int, int);

int main(){

    int base, expoente, valor;
    cin >> base >> expoente;
    valor = pot(base, expoente);
    cout << valor << endl;
    return  0;
}

int pot(int Base, int exp){

    int val;
    val = pow(Base, exp);

    return val;
}
