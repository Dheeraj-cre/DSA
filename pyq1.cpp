#include<bits/stdc++.h>
using namespace std;

int main(){
    // task 1
     string s;
     getline(cin,s);

     // cntstar and hash
     int cnt_star = 0;
     int cnt_hash = 0;

     for(int i = 0; i<s.length();i++){
        if(s[i] == '*') cnt_star++;
        else if(s[i]=='#') cnt_hash++;
        cout<<cnt_star-cnt_hash;

       
     }
     

}