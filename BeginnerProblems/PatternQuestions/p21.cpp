#include <bits/stdc++.h>
using namespace std;

void pattern21(int n) {
    for(int i=0;i<n;i++){
        if(i == 0 || i == n-1){
            for(int j =0;j<n;j++){
                cout<<"*";
            }
        }
        else{
        {
            // star
            cout<<"*";
            // space
            for(int j =0;j<n-2;j++){
                cout<<" ";
            }
            // star
            cout<<"*";
        }
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern21(i);
    return 0;
}