#include <iostream>

using namespace std;

int val(int, int, int);
int bissexto(int);

int main(){

    int dia, mes, ano;
    cin >> dia >> mes >> ano;
    cout << "Validando Data: " << endl;
    cout << val(dia, mes, ano) << endl;
    cout << "Verificando Ano Bissexto: " << endl;
    cout << bissexto(ano) << endl;

    return 0;
}

int val(int d, int m, int a){
    if(d <= 31 && m <=12){
        return true;
    }
    else{
        return false;
    }
}

int bissexto(int ano){
    if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 ){
        return true;
    }
    else{
        return false;
    }
}
