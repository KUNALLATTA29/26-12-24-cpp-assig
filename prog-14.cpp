#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr = {3,2,5,6,4,9};
    
    for(int i=0;i<arr.size();i++){
        arr[i] = arr[i]+i;
        
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}