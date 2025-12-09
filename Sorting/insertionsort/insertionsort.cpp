#include <iostream>
#include <vector>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    cout <<"\n";
}
void insertion_Sort(vector <int> &v){
    for(int i=1;i<v.size();i++){
        int key = v[i];
        int j=i;
        while(j>0 && v[j-1]>key){ // [ as j-1 is used j should be never 0 hence j>0 ]
            v[j]=v[j-1];
            --j;
        }
        v[j]=key;
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