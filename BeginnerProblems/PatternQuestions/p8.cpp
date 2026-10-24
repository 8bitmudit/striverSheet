#include <bits/stdc++.h>
using namespace std;

void pattern8(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){   
            if(2*n-1-i> j && j >=i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern8(i);
    return 0;
}