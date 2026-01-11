#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    vector<int> v;
    int c1=0,c2=0;
    int el1=INT_MIN,el2=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(c1==0 && el2!=nums[i]){
            c1++;
            el1=nums[i];
        }
        else if(c2==0 && el1!=nums[i]){
            c2++;
            el2=nums[i];
        }
        else if(el1==nums[i]) c1++;
        else if(el2==nums[i]) c2++;
        else {
            c1--;
            c2--;
        }
    }
    c1=0;
    c2=0;
    for(int i=0;i<nums.size();i++){
        if(el1==nums[i]) c1++;
        else if(el2==nums[i]) c2++;
    }
    if(c1>nums.size()/3) v.push_back(el1);
    if(c2>nums.size()/3) v.push_back(el2);
    sort(v.begin(),v.end());
    return v;
}
int main(){
    vector<int> v={3,4,3,5,3,6,4,4};
    vector<int> k=majorityElement(v);
    for(auto i:k){
        cout << i;
    }
}