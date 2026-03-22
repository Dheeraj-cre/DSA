#include<bits/stdc++.h>>
using namespace std;

int main(){
string str = "hello";
int v = 0, c = 0;

for(char ch : str){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        v++;
    else
        c++;
}

cout << "Vowels: " << v << endl;
cout << "Consonants: " << c;
}