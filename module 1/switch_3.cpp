#include<iostream>
using namespace std;
int main(){

    int a;
    cin>>a;
    switch(a%2)
    {
        case 0:
            cout<<"even";
        default:
            cout<<"Odd";
    }
    return 0;
}