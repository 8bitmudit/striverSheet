#include <bits/stdc++.h>
using namespace std;

void pattern12(int n) {
    for(int i=0;i<n;i++){
        // num
        for(int j = 0;j<=i;j++ ){
            cout<<j+1;
        }
        // space
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        // rev nums
        for(int j = i;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern12(i);
    return 0;
}