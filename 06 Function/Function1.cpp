#include <iostream>
using namespace std;

void myFunction(){
    cout << "I just got executes " << endl;
}

void myFunction2 ( string name = "Ananta", int Umur = 12) {
    cout << "Nama saya : " << name << " umur saya: " << Umur << endl;
}

int myFunction3 (int x){
    return 5 + x;
}

int main() {
    myFunction();
    myFunction();
    myFunction();

    myFunction2("Ananta");
    myFunction2( " Andi", 15 );
    myFunction2( "Budi", 13 );
    myFunction2( "Charlei", 14);

    cout << myFunction3(17) << endl; //22
    cout << myFunction3(25) << endl; //30
    cout << myFunction3(30) << endl; //35

     int value = myFunction3(18); //23
    cout << value << endl;

   

    return 0;
}