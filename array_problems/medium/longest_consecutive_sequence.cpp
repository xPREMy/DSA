#include<bits/stdc++.h>
using namespace std;
int longest_consecutive_sequence(const vector<int> &v){
    if(v.empty()) return 0;
    int maxcur=1;
    unordered_set<int> us;
    for(int i=0;i<v.size();i++){
        us.insert(v[i]);
    }
    for(auto i:us){
        if(us.find(i-1)==us.end()){
            int cur=1;
            int k=1;
            while(us.find(i+k)!=us.end()){
                k++;
                cur++;
            }
            maxcur=max(maxcur,cur);
        }
    }
    return maxcur;
}
int main(){
    vector<int> v={102,3,4,5,6,104,103,2,101};
    cout << longest_consecutive_sequence(v);
    return 0;
}