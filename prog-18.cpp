#include<bits/stdc++.h>
using namespace std;


int countPri(int num) {
    int count = 0;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            count++;
            num /= i;
        }
    }
    if (num > 1) {
        count++; 
    }
    return count;
}

int main() {
    vector<int> arr = {12, 15, 7, 30, 42};
    vector<int> result;

   
    for (int i = 0; i < arr.size(); i++) {
        result.push_back(countPri(arr[i]));
    }


    for (int it : result) {
        cout << it << " ";
    }

    return 0;
}