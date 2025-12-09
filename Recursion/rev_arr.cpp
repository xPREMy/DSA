#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    cout <<"\n";
}
void rev(vector<int> &v,int i=0){
    if(i>=v.size()-1-i) return ;
    swap(v[i],v[v.size()-i-1]);
    rev(v,i+1);
}
int main(){
    vector<int> v;
    int size;
    cout << "enter size : ";
    cin >> size ;
    cout << " enter array : ";
    for( int i=0;i<size;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    rev(v);
    printV(v);
}