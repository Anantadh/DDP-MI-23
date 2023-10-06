#include <iostream>

using namespace std;

int main(){
    char ulangi = 'y';
    int couter = 0;

    while (ulangi == 'y') {
        cout << "Apakah kamu sayang aku?" << endl;
        cout << "Jawab (y/t)";
        cin >> ulangi;

        couter++;
    }

   cout << "\n\n_ _ _ _ _ _ _ _ _ _ _ _ _\n";
   cout << "Anda kurang beruntung" << endl;
   cout << "Kamu berusaha sebanyak" << couter << " kali " << endl;
}