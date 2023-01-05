/* Programmer =  Roshan Mehra
Purpose = Q3 - Write a function that returns the largest and the smallest number out of 3 given numbers.
The main function should call this function to get the largest and smallest number and print
the output.
Date = 20/12/2022  */

#include<iostream>
using namespace std;

int smallest_largest_number(int a, int b, int c, int *largest){
    *largest = max(a, max(b,c));
    return min(a, min(b,c));
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int largest;
    int smallest = smallest_largest_number(a,b,c,&largest);
    cout<<largest<<" "<<smallest;
    return 0;
}