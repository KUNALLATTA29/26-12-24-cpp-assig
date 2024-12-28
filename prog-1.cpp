#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {4,2,7,9,12,4,18,6,7,2};
    
    int f=0;
    int s=0;
    
    for(int i=0;i<arr.size();i++){
        if(f<arr[i]){
            s=f;
            f=arr[i];
        }else if(s<arr[i] && arr[i]!=f){
            s=arr[i];
        }
    }
    cout<<s;
    
    return 0;
}
