#include<bits/stdc++.h>
using namespace std;

int main(){
    string str ="DHEERAJ";
    for(char &ch : str){

        ch = tolower(ch);


    }
    cout << str; 
}