#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {0,1,0,0,1,0,0,0,1,1};
    int zeroes = 0;
    int ones = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] == 0){
            zeroes++;
        }
        else
            ones++;
    }

    cout<<zeroes<<" "<<ones<<endl;
}