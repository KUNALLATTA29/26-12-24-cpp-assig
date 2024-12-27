#include<bits/stdc++.h>
using namespace std;

int sumof(int num){
    int sum = 0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main(){
    
    vector<int> arr = {123, 45, 678, 90, 5};
    
    for(int i=0;i<arr.size();i++){
        arr[i] = sumof(arr[i]);
        
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}