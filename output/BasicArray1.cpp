#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 3, 4, 5};
    vector<int> b = {1, 2, 3};
    set<int> s;
    for(int i = 0; i<a.size();i++){
       s.insert(a[i]);
    }
    for(int i = 0; i<b.size(); i++){
        s.insert(b[i]);

    }
    cout<<s.size();

    return 0;
}