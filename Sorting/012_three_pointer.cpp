#include<bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    cout <<"\n";
}
void sorting(vector<int> &v){
    vector<int> hash(3);
    for(int i=0;i<v.size();i++){
        hash[v[i]]++;
    }
}
int main(){
    vector<int> v;
    int t;
    cout << "size of array :";
    cin >> t;
    for(int i=0;i<t;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sorting(v);
    printV(v);
    return 0;
}