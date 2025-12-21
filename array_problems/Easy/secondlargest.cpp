#include<bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
int sec_max(const vector<int> &v){
    int max=v[0];
    int secmax=INT_MIN;
    for(int i=1;i<v.size();i++){
        if(max<v[i]){
            secmax=max;
            max=v[i];
        }
        else if(v[i]>secmax && v[i]!=max) secmax=v[i];
    }
    return (secmax==INT_MIN) ? max : secmax;
}
int sec_min(const vector<int> &v){
    int min=v[0];
    int sec_min=INT_MAX;
    for(int i=1;i<v.size();i++){
        if(v[i]<min){
            sec_min=min;
            min=v[i];
        }
        else if(v[i]<sec_min && v[i]!=min) sec_min=v[i];
    }
    return (sec_min==INT_MAX) ? min : sec_min;
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
    cout<< sec_max(v)<< "\n";
    cout << sec_min(v);
    return 0;
}