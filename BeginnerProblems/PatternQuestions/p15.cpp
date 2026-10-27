#include <bits/stdc++.h>
using namespace std;

void pattern15(int n) {
    for(int i = 0;i<n;i++){
        for(char ch = 'A';ch < 'A' + (n-i);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    }

int main() {
    int i;
    cin>> i;
    pattern15(i);
    return 0;
}