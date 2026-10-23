#include <bits/stdc++.h>
using namespace std;


void studentGrade(int x) {
    if(x >=90){
        cout<<"Grade A";
    }
    else if(x >=70){
        cout<<"Grade B";
    }
    else if(x >=50){
        cout<<"Grade C";
    }
    else if(x >=35){
        cout<<"Grade D";
    }
    else if(x<35){
        cout<<"Fail";
    }
    
}
int main() {
    int marks;
    cin>>marks;
    studentGrade(marks);
    
    return 0;
}