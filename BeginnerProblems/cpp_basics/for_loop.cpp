#include <bits/stdc++.h>
using namespace std;

int forLoop(int low, int high) {
        int sum = 0;
        for(int i=low;i <= high;i++){
            sum += i;
        }
        return sum;
    }

int main(){
    int ip1,ip2;
    cin>>ip1>>ip2;
    cout<<forLoop(ip1,ip2);
}