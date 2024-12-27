#include<bits/stdc++.h>
using namespace std;

int rev(int num){
    int reves = 0;
    while(num>0){
        reves = reves*10+(num%10);
        num/=10;
    }
    return reves;
}

int main(){
    
    vector<int> arr = {123, 45, 678, 90, 5};
    
    for(int i=0;i<arr.size();i++){
        arr[i] = rev(arr[i]);
        
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}