#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int v[5], v2[5], v3[5];
    cout << "Informe o primeiro vetor: " << endl;
    for (int i = 0; i < 5; i++){
        cout << "Posicao " << i << ":";
        cin >> v[i];
    }
    cout << "Informe o segundo vetor: " << endl;
    for (int i = 0; i < 5; i++){
        cout << "Posicao" << i << ":";
        cin >> v2[i];
    }
    system ("cls");
    for (int i = 0; i < 5; i++){
        v3[i] = v[i] + v[i];
        cout << "------------------------------------" << endl;
        cout << "A soma do vetor " << i << " sera: " << v3[i] << endl;
        cout << "------------------------------------" << endl;
        cout << "                                 \/ " << endl;
        cout << "                                  ~(_8-()"<< endl;
    }



    return 0;
}
