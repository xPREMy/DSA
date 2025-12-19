#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
void selection_sort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        // finding minimum element 
        int min_i=i;
        for(int j=i+1;j<v.size();j++){
            if(v[min_i]>v[j]){
                min_i=j;
            }
        }
        swap(v[i],v[min_i]);
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
    selection_sort(v);
    printV(v);
    return 0;
}