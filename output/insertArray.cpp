#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr [100]= {2, 3, 4, 5, 6}; //inital array
   int n = 5;                      // current size
   int index = 2;                 // position to insert
   int val = 99;                  // value to insert


   // shift element to right
   for(int i = n; i > index; i--){
    arr[i] = arr[i - 1];
   }
  
   // Insert value
   arr[index] = val;
   n++; // increase size

   // print updated array

   for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
   }

   return 0;



}