#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number :";
    int n;
    cin>>n;
    if((n%3==0 || n%5==0) && n%15!=0){
        cout<<"Divisible by 3 or 5 and not divisible by 15";

    }
    else{
        cout<<"not matching";
    }
}