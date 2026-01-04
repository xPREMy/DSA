#include<bits/stdc++.h>
using namespace std;
int num_subarray_xor_k(const vector<int> v, const int k){
    unordered_map<int,int> mp;
    int xr=0;
    int c=0;
    mp[0]=1;
    for(int i=0;i<v.size();i++){
        xr=xr^v[i];
        c+=mp[xr^k];
        mp[xr]++;
    }
    return c;
}
int main(){
    vector<int> v={4, 2, 2, 6, 4};
    int k=6;
    cout << num_subarray_xor_k(v,k);
}