#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr = {3,2,5,6,4,9};
    
    int odd = 0;
    int eve = 0;
    
    for(int i=0;i<arr.size();i++){
        if(i%2==0){
            eve+=arr[i];
        }else{
            odd+=arr[i];
        }
        
    }
    
    cout<<abs(eve-odd);
    
    return 0;
}