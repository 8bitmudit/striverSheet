#include <bits/stdc++.h>
using namespace std;

void pattern19(int n) {
    for(int i =0;i<2*n;i++){
        // descending
        if(i<n){
            // characters
            for(int j =0;j<n-i;j++){
                cout<<"*";
            }
            // space
            for(int j =0;j<2*i;j++){
                cout<<" ";
            }
            // characters
            for(int j =0;j<n-i;j++){
                cout<<"*";
            }
        }
        // ascending
        else{
             for(int j =0;j<i-n+1;j++){
                cout<<"*";
            }
            // space
            for(int j =0;j<2*(2*n-i-1);j++){
                cout<<" ";
            }
            // characters
            for(int j =0;j<i-n+1;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern19(i);
    return 0;
}