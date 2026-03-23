#include<bits/stdc++.h>
using namespace std;

int main(){
  string str = "Program";
  
  for(int i = 0; i < str.length();i++){
    for(int j = i+1;j< str.length();j++ ){

         if(str[i]==str[j]){
            cout<<str[i]<<" ";
            break;
         }

    }
  }
}