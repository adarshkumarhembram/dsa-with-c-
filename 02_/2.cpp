#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    // a to z -> ascii 97 to 122
    // A to Z -> ascii 65 to 90
    int ascii=(int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"the character is alphabet";
    }
    else{
        cout<<"not alphabet";
    }

}