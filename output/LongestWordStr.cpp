#include<bits/stdc++.h>
using namespace std;

int main(){
  string str= "My name is Dheeraj Srivastava";
  stringstream ss(str);
  string word, longest = "";

  while(ss>>word){
     if(word.length() > longest.length()){
        longest = word;
     }

  }cout<<longest;

}