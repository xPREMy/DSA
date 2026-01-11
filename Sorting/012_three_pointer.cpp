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
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==2){
            swap(v[high],v[mid]);
            high--;
        }
        else {
            mid++;
        }
    }
}
int main(){
    vector<int> v={2,1,0,2,1,0,2,1};
    sorting(v);
    printV(v);
    return 0;
}