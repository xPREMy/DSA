#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
void bubble_sort(vector<int> &v){
    for(int i=v.size()-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
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
    bubble_sort(v);
    printV(v);
    return 0;
}