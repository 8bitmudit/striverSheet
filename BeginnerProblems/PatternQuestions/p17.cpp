#include <bits/stdc++.h>
using namespace std;

void pattern17(int n) {
    for(int i =0;i<n;i++){
        // space
        for(int j =0;j < n-i-1;j++ ){
            cout<<" ";
        }
        // characters ascending
        for(int j='A';j<='A'+i;j++){
            cout<<char(j);
        }
        //  characters descending
        for(int j = 'A'+ i-1;j>='A';j--){
            cout<<char(j);
        }
            
        
        cout<<endl;
        }
    }

int main() {
    int i;
    cin>> i;
    pattern17(i);
    return 0;
}