#include <iostream>
using namespace std;

int main(){
    string A;
    getline(cin,A);
    
    for(int i = A.length()-1;i>=0;i--)
    {
        cout<<A[i];
    }
    return 0;
}