#include <bits/stdc++.h>
using namespace std;

void pattern13(int n) {
    int count =0;
    for(int i = 0;i<n;i++){
        for(int j =0;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern13(i);
    return 0;
}