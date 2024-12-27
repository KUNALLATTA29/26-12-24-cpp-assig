#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {4,2,7,9,12,4,18,6,7,2};
    vector<int> ans;
    
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            ans.push_back(arr[i]*arr[0]);
        }else{
            ans.push_back(arr[i]*arr[i+1]);
        }
        
    }
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}