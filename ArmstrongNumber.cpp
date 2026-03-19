#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 153;
    int sum = 0;
    int temp = num;

    while (temp > 0)
    {
        /* code */
        int digit = temp % 10;
        sum+= digit * digit * digit;
        temp /= 10;

    }
    if(sum == num){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
    

    return 0;
}