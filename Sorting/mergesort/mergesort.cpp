#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
void merge(vector<int> &v,int low,int mid,int high){
    int i=low,j=mid+1;
    vector<int> temp;
    temp.reserve(high-low+1);
    while(i<=mid && j<=high){
        if(v[i]>v[j]) temp.push_back(v[j++]);
        else temp.push_back(v[i++]);
    }
    while(i<=mid) temp.push_back(v[i++]);
    while(j<=high) temp.push_back(v[j++]);
    for(int k=low;k<=high;k++) v[k]=temp[k-low];
}
void merge_sort(vector<int> &v,int low,int high){
    if(low>=high) return ;
    int mid = low + (high-low)/2;
    merge_sort(v,low,mid);
    merge_sort(v,mid+1,high);
    merge(v,low,mid,high);
}
void merge_sort(vector <int> &v){
    if(v.empty()) return ;
    merge_sort(v,0,v.size()-1);
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
    merge_sort(v);
    printV(v);
    return 0;
}