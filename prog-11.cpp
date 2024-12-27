#include<bits/stdc++.h>
using namespace std;

long long fact(int num){
    long long ans =1;
    
    for(int i=1;i<=num;i++){
        ans*=i;
    }
    return ans;
}

int main(){
    
    vector<int> arr = {3,2,5,6};
    
    for(int i=0;i<arr.size();i++){
        arr[i] = fact(arr[i]);
        
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}