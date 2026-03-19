#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=4;

    bool isPrime = true;

    for(int i = 2; i < num; i++){

        if(num%i==0 ){

            isPrime = false;

            break;

        }
        

    }

    if(isPrime){
        cout<<"Prime number";

    }
    else{
        cout<<"Not Prime Number";
    }
}