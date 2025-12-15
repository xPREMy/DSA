#include<bits/stdc++.h>
using namespace std;
int minfreq(const vector<int> &v){
    unordered_map<int,int> mp;
    int min=v[0];
    int freq=INT_MAX;
    for(auto i:v){
        mp[i]++;
    }
    for(auto &p :mp){
        if(p.second<freq){
            freq=p.second;
            min=p.first;
        }
    }
    return min;
}
int maxfreq(const vector<int> &v){
    unordered_map<int,int> mp;
    int max=v[0];
    int freq=INT_MAX;
    for(auto i:v){
        mp[i]++;
    }
    for(auto &p :mp){
        if(p.second>freq){
            freq=p.second;
            max=p.first;
        }
    }
    return max;
}

int main(){
    int size;
    cout << "enter size: ";
    cin >> size;
    vector<int> v(size);
    cout<< "enter array: ";
    for(int i=0;i<v.size();i++){
        cin >> v[i];
    }
    cout<<"min: "<< minfreq(v) << "\n";
    cout<<"max: "<< maxfreq(v);
}