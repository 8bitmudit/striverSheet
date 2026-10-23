#include <bits/stdc++.h>
using namespace std;

void pattern3(int n) {
    for(int i =1;i <=n;i++){
        for(int j =1; j<=i;j++){
            cout<<j;
            }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern3(i);
    return 0;
}