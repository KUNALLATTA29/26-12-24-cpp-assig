#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<long long> arr = {3,2,5,6,4,9};
    
    
    for(long long i=0;i<arr.size();i++){
        if(i>0 && i<arr.size()-1){
            arr[i] = arr[i]*arr[i-1]*arr[i+1];
        }else if(i==0){
            arr[i]=arr[i]*arr[i+1]*arr[arr.size()-1];
        }else{
            arr[i]=arr[i]*arr[0]*arr[i-1];
        }
        
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}