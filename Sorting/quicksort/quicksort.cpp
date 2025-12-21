#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}
void quick_sort(vector<int> &v,int low,int high){
    if(low>=high) return ;
    int i=low,j=high,pivot=v[low];
    while(i<j){
        while(v[i]<=pivot && i<=high-1) i++;
        while(v[j]>pivot && j>=low+1) j--;
        if(i<j) swap(v[i],v[j]);
    }
    swap(v[j],v[low]);
    quick_sort(v,low,j-1);
    quick_sort(v,j+1,high);
}
void quick_sort(vector<int>  &v){
    if(v.empty()) return ;
    else quick_sort(v,0,v.size()-1);
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
    quick_sort(v);
    printV(v);
    return 0;
}