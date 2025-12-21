#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    int i=0;
    int j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]>nums2[j]){
            if(v.empty() || v.back()!=nums2[j]) v.push_back(nums2[j]);
            j++;
        }
        else if(nums1[i]<nums2[j]) {
            if(v.empty() || v.back()!=nums1[i]) v.push_back(nums1[i]);
            i++;
        }
        else {
            if(v.empty() || v.back()!=nums1[i]){
                v.push_back(nums1[i++]);
                j++;
            }
        }
    }
    while(i<nums1.size()){
        if(v.empty() || v[v.size()-1]!=nums1[i]) v.push_back(nums1[i]);
        i++;
    }
    while(j<nums2.size()){
        if(v.empty() || v[v.size()-1]!=nums2[j]) v.push_back(nums2[j]);
        j++;
    }
    return v;
}
int main(){  
    vector<int> v;
    int t;
    cout << "size of array :";
    cin >> t;
    cout << "enter array : ";
    for(int i=0;i<t;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> c={1,3,4,4,6};
    unionArray(v,c);
    printV(v);
    return 0;
}