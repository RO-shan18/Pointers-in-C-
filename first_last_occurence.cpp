/* Programmer =  Roshan Mehra
Purpose = Q5 - Write a function that returns the first character, last character and the number of
occurrences of ‘t’ in a string input by user.
Date = 20/12/2022   */

#include<iostream>
using namespace std;

void findfirstandlastoccurence(string s, char *first, char *last){
    int count=0;
    int n = s.size()-1;
    
    for(int i=0; i<s.size(); i++){
           if(i==0){
            *first = s[i];
           }
           else if(i==n){
            *last = s[i];
           }

          char ch = s[i];

          if(ch =='t'){
            count++;
        }
    }
    cout<<count<<" "<<*first<<" "<<*last;
}

int main(){
    string s = "twitter";
    char first, last, ch;
    cout<<"Enter the character to find the occurence: "<<endl;
    cin>>ch;

    char *p1 = &first;
    char *p2 = &last;

    findfirstandlastoccurence(s, p1, p2);

    return 0;
}