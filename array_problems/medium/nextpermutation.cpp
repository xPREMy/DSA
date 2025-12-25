#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}
void nextPermutation(vector<int>& nums) {
    int indice=-1;
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
        indice=i;
        break;
        }
    }
    if(indice==-1){
        reverse(nums.begin(),nums.end());
        return ;
    }
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]>nums[indice]){
            swap(nums[i],nums[indice]);
            break;
        }
    }
    reverse(nums.begin()+indice+1,nums.end());
}