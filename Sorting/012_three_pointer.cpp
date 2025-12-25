#include<bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    cout <<"\n";
}
void sorting(vector<int> &v){
    int low =0;
    int high =v.size()-1;
    int mid=0;
    while(mid<=high){
        if(mid==0){
            swap(v[low++],v[mid++]);
        }
        else if(mid==2){
            swap(v[high--],v[mid]);
        }
        else {
            mid++;
        }
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