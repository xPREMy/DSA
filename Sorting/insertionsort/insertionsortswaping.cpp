#include <iostream>
#include <vector>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    cout <<"\n";
}
void replace(auto &a ,auto &b){
    auto temp = a;
    a=b;
    b=temp;
}
void insertion_Sort(vector<int> &v){
    printV(v);
    for(int i=1;i<v.size();i++){
        int j=i-1;
        while(v[j]>v[i-(i-1)+j]){
            replace(v[j],v[i-(i-1)+j]);
            --j;
            if(j<0){
                break;
            }
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
    insertion_Sort(v);
    printV(v);
    return 0;
}