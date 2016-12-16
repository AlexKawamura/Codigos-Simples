#include <iostream>

using namespace std;

int main(){

    int v[10], soma = 0;
    for(int i = 0; i < 10; i++){
        cin >> v[i];
    }
    for(int i = 0; i < 10; i++){
        soma += v[i];
    }
    cout << soma << endl;

    return 0;
}
