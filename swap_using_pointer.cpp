/* Programmer =  Roshan Mehra
Purpose = Q4 - Implement the swap function using pointers.
Date = 20/12/2022  */

#include<iostream>
using namespace std;

void swap_two_numbers(int *a, int *b){
    
    int temp =  *a; 
        *a = *b;
        *b = temp; 
}

int main(){
    int n, m;
    cin>>n>>m;

    int *ptr1 = &n, *ptr2 = &m;

    swap_two_numbers(ptr1,ptr2);
     cout<<"After swapping: "<<endl;
    cout<<n<<" "<<m;
    return 0;
}