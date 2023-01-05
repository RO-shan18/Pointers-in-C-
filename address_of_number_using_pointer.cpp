/* Programmer =  Roshan Mehra
Purpose = Q1 - Write a program to print the address of an integer variable whose value is input by the
user.
Date = 20/12/2022  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *ptr = &n;
    cout<<ptr<<endl;
    return 0;
}