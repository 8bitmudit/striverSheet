#include <bits/stdc++.h>
using namespace std;

void pattern10(int n) {
    for(int i =0;i<2*n-1;i++){
        if(i<n){
        for(int j =0;j<i+1;j++){
            cout<<"*";
        }
        }
        else{
            for(int j= 0;j<2*n-i-1;j++ ){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    }

int main() {
    int i;
    cin>> i;
    pattern10(i);
    return 0;
}