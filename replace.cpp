#include <iostream>
#include <string>

using namespace std;

int main(){

    string pi = "3,14";
    string searchFor(",");
    string replaceBy(".");
    size_t found;
    found = pi.find( searchFor );
    while (found!=string::npos){
        pi.replace( found, searchFor.size(), replaceBy );
        found = pi.find( searchFor );
    };
    cout << pi << endl;
    return 0;
}
