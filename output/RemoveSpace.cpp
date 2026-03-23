#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Dheeraj Srivastva";
    string res = "";

    for(char ch : str){

        if(ch != ' '){
            res += ch;
        }

    }
    cout<<res;


}