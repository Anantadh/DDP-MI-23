#include <iostream>
using namespace std;

int main(){
    int bilangan;
    cin>>bilangan;
    
    if (bilangan< 0) {
        cout << "Negatif" << endl;
    } else if (bilangan % 2 == 0) {
        cout << "Positif Genap" << endl;   
    } else {
        cout << "Positif Ganjil" << endl;
    }
    
    return 0;
}