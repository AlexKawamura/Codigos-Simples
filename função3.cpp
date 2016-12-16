#include <iostream>

using namespace std;

int par(int);

int main(){

    int numero;
    cin >> numero;
    cout << par(numero);

    return 0;
}

int par(int num){

    if(num%2 == 0){
        return true;
    }
    else{
        return false;
    }
}
