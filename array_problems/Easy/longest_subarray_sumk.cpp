#include <bits/stdc++.h>
using namespace std;
void printV(const vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
int maxsubsum(const vector<int> &v,const int &k){
    unordered_map<int,int> premsummp;
    int sum=0;
    int maxlen=0;
    premsummp[0]=-1; // for better algorithm
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(premsummp.find(sum-k)!=premsummp.end()) maxlen=max(maxlen,i-premsummp[sum-k]);
        if(premsummp.find(sum)==premsummp.end()) premsummp[sum]=i;
    }
    return maxlen;
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
    cout << maxsubsum(v,t);
    return 0;
}