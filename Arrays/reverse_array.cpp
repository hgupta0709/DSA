#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
   int arr[10] = {0,1,2,3,4,5,6,7,8,9};
   reverse(arr,10);
   print(arr,10);
   return 0;
}