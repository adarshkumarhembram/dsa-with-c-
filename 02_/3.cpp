#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter a selling price : ";
    int sp;
    cin>>sp;
    if(cp<sp){
        cout<<"profit= "<<sp-cp;

    }
    if(cp>sp){
        cout<<"loss ="<<cp-sp;
    }
    if(cp==sp){
        cout<<"no loss no profit";
    }
}
