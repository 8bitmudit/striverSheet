#include <bits/stdc++.h>
using namespace std;

int whileLoop(int d) {
        // Your code goes here  
        int i = 0,sum = 0;
        while(i<50){
            sum += d + i*10;
            i++;
        }
        return sum;
    }

int main (){
    int ip;
    cin>>ip;
    cout<<whileLoop(ip);
}