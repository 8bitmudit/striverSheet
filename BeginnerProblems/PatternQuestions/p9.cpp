#include <bits/stdc++.h>
using namespace std;

void pattern9(int n) {
    for(int i=0;i<2*n;i++){
        if(i<n){
        // space
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        // star
        for(int j =0;j<2*i+1;j++){
            cout<<"*";
        }
    }
        else{
        // space
        for(int j = 0;j < i-n;j++){
            cout<<" ";
        }
        // star
        for(int j = 0;j < 2*n -2*(i -n)-1;j++){
            cout<<"*";
        }
        }
        cout<<endl;
    }
    }

int main() {
 int i;
    cin>> i;
    pattern9(i);
    return 0;
}