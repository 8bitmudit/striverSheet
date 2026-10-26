#include <bits/stdc++.h>
using namespace std;

void pattern11(int n) {
    for(int i =0;i<n;i++){
        for (int j =0;j<i+1;j++){
            if((i+j) % 2 != 0){
                cout<<"0 ";
            }
            else
            cout<<"1 ";
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern11(i);
    return 0;
}