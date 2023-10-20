#include <iostream>
using namespace std;


int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    for(int i=A; i>=B; i+=C){
        cout << i << " ";
    }
    
    return 0;
}
