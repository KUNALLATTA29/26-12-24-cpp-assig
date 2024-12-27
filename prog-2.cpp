#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {4,2,7,9,12,4,18,6,7,2};
    
    map<int,int> maps;
    
    for(auto it:arr){
        maps[it]++;
    }
    for(auto it:maps){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    return 0;
}