#include <bits/stdc++.h>
using namespace std;

int sumArr(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        sum++;
    }
    return sum;
}

int main(){
    int size;
    cin>>size;

    int arr[5];

    for(int i = 0;i<size; i++){
        cin>>arr[i];
    }

    cout<<"the sum of arr is = "<<sumArr(arr, size)<<endl;
}