#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> arr) {
    int m = 0;
    m = arr[0];
    for(int i = 0;i<arr.size();i++)
    {
        if(m < arr[i]){
            m =arr[i];
        }

    }
    
return m;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    int k;
    int x;
    vector<int> nums;
    cin>> n;

    for(int i=0; i<n ; i++){
        cin>> x;
        nums.push_back(x);
    }
    

    int ans = largest(nums);

    return 0;
}