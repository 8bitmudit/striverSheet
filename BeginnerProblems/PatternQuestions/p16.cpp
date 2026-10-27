#include <bits/stdc++.h>
using namespace std;

void pattern16(int n) {
    char ch ='A';
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern16(i);    
    return 0;
}