#include <iostream>

using namespace std;

int main(){
    char ulangi = 'y';
    int couter = 0;

   do{
        cout << "Apakah kamu sayang aku?" << endl;
        cout << "Jawab (y/t)";
        cin >> ulangi;

        couter++;
    }while(ulangi == 'y');

    
   cout << "\n\n_ _ _ _ _ _ _ _ _ _ _ _ _\n";
   cout << "Kamu masih punya harapan" << endl;
   cout << "Kamu berusaha sebanyak" << couter << " kali " << endl;
}