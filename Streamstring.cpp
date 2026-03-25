#include<bits/stdc++.h>
using namespace std;

int main(){
    // solve -> "1 2 3 4 5 6 7 8 9"
    // stringstream -> '1''2'
    //arr[]
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<int> arr;

    int num;
    while(ss>>num){
        arr.push_back(num);

    }
    for(int a : arr){
        cout<<a<< " ";
    }
     return 0;
}