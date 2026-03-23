#include<bits/stdc++.h>>
using namespace std;

int main(){
string str = "Dheeraj";
int v = 0,c=0;

for(char ch : str){
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch=='o'||ch =='u'){
      v++;
    }
    else{
        c++;
    }

}

cout<<"Vowel"<<v<<endl;
cout<<"consonant"<<c;
}

