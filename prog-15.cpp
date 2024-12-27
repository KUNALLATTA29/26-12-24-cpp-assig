#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr = {3,2,5,6,4,9};
    vector<int> ans;
    
    int com = 1;
    
    for(int i=0;i<arr.size();i++){
        com *=arr[i];
        ans.push_back(com);
        
    }
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}