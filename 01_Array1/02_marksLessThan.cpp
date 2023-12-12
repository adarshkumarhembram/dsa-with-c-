#include<iostream>
using namespace std;
int main(){
    // int arr[7];//0  1 2 3 4 5 6
    // // arr[0]=7;
    // // arr[1]=7;
    // // arr[2]=7;
    // // arr[3]=7;
    // // arr[4]=7;
    // // arr[5]=7;
    // // arr[6]=7;
    // // cout<<arr[0];

 
    //anotheer way of initiaization
    int arr[7];
    //input 
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }   
    

    //output
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }

}