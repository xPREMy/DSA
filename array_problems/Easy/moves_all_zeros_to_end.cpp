#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
void move_zeros_to_end(vector<int> &v){
    int k=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0) swap(v[i],v[k++]);
    }
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
    move_zeros_to_end(v);
    printV(v);
    return 0;
}