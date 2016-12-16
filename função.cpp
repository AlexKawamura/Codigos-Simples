#include <iostream>

using namespace std;

int soma(int, int);

int main(){

    int a;
    int b;
    cin >> a >> b;
    int c = soma(a,b);
    cout << c << endl;

    return 0;
}

int soma(int x, int y){

    int s = x + y;

    return s;
}
