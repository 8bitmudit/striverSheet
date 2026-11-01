#include <bits/stdc++.h>
using namespace std;

void pattern20(int n) {
    for (int i =0;i<2*n-1;i++){
            // ascending
            if (i<n){
                // star
                for(int j =0; j<i+1;j++){
                    cout<<"*";
                }
                // space
                for(int j =0; j <2*(n-1-i);j++){
                    cout<<" ";
                }
                // star
                for(int j =0; j<i+1;j++){
                    cout<<"*";
                }
            }
            else{
                // star
                for(int j =0;j <2*n-1-i;j++){
                    cout<<"*";
                }
                // space
                for(int j=0; j < 2*(i-n+1);j++ ){
                    cout<<" ";
                }
                // star
                for(int j =0;j <2*n-1-i;j++){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    } 
    

int main() {
    int i;
    cin>> i;
    pattern20(i);
    return 0;
}