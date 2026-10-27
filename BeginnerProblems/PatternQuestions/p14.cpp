#include <bits/stdc++.h>
using namespace std;

void pattern14(int n) {
    for(int i = 0;i<n;i++){
        for(char ch ='A';ch <'A' + i +1;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern14(i);
    return 0;
}