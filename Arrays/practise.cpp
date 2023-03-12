#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {12, 32, 3, 45, 2};
    int max = INT_MIN;
    for(int i = 0; i <= 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<< "the max number in array is: "<<max<<endl;
    return 0;
}