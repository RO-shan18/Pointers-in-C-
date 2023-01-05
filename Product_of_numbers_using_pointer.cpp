/* Programmer =  Roshan Mehra
Purpose = Q2 - Write a program to find the product of 2 numbers using pointers 
Date = 20/12/2022  */

#include<iostream>
using namespace std;

int main(){

    // Product of two numbers using pointers
    int n,m;
    cin>>n>>m;

    int *ptr1 = &n;
    int *ptr2 = &m;

    int product;

    int *product_result = &product;

    *product_result =  *ptr1 * *ptr2;

    cout<<*product_result<<endl;
    cout<<product<<endl;
    return 0;
}