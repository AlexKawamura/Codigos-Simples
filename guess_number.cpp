#include <iostream>
#include <cstdlib> //comando para usar random
#include <cctype>
#include <time.h> //comando para usar random
#define COW " __________\n< Acertou! >\n ----------\n        \\   ^__^\n         \\  (oo)\\_______\n            (__)\\       )\\/\\\n                ||----w |\n                ||     ||\n\n"
using namespace std;

//Pseudoaleatoriedade (https://pt.wikipedia.org/wiki/Pseudoaleatoriedade)
//What's this fuss about true randomness? (https://www.random.org/)

int main(){
    int x;
    int y;
    char cont;
    srand (time(NULL)); //inicia a semente aleat�ria com a hora atual
    cout << "Adivinha um numero" << endl;
    cout << "==================" << endl;
    do {
        x =  rand() % 10 + 1; // entre 1 e 10
        cout << "Informe um n�mero entre 1 e 10:" << endl;
        cin >> y;
        if (x == y){
            cout << COW << endl;
            //cout << "\n>>> Acertou! <<<\n" << endl;
        } else {
            cout << "Que pena, voc� errou. O n�mero era " << x << endl;
        }
        cout << "Deseja continuar?\n[s/n]: ";
        cin >> cont;
        cont = tolower(cont); //transforma letra miuscula em minuscula
    } while (cont != 'n');
    return 0;
}
