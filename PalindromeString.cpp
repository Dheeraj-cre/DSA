#include<bits/stdc++.h>
using namespace std;

int main(){
   string str = "madam";
   string rev ="";
   for(int i = str.length()-1;i>=0;i--){
    rev += str[i];
   } 
   if(str == rev){
    cout<<"Palindrom";

   }else{
    cout<<"Not Palindrome";
   }

}