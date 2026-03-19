#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 123, temp=num, rev=0; 

    while (temp > 0)
    {
        /* code */
        int digit = temp % 10;
        rev = rev*10 + digit;
        temp /= 10; 
    }
    if(num == rev){
        cout<<"Palindrome Number";

    }
    else{
        cout<<"Not Palindrome Number";
    }
    

    
}
