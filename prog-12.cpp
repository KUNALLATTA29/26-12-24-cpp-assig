#include<bits/stdc++.h>
using namespace std;

int rai(int num, int i){
    return pow(num,i);
}

int main(){
    
    vector<int> arr = {3,2,5,6};
    
    for(int i=0;i<arr.size();i++){
        arr[i] = rai(arr[i],i);
        
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}