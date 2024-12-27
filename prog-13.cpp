#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr = {3,2,5,6,4,9};
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()-1){
            ans.push_back(arr[i]-arr[i+1]+i);
        }else{
            ans.push_back(arr[i]-arr[0]+i);
        }
        
    }
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}