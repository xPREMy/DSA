#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printV(const vector<int> &v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}
int subsequence_target_num_2(const vector<int> &v,const int & target,int sum=0,int i=0){
    if(i>=v.size()) return sum==target;
    return subsequence_target_num_2(v,target,sum+v[i],i+1)+subsequence_target_num_2(v,target,sum,i+1);
}
void subsequence_target_num(const vector<int> &v,const int &target,int &num,int sum=0,int i=0){
    if(i>=(int)v.size()){
        if(sum==target){
            num++;
        }
        return;
    }
    subsequence_target_num(v,target,num,sum+v[i],i+1);
    subsequence_target_num(v,target,num,sum,i+1);
}
void subsequence_target(const vector<int> &v,const int &target,int sum=0,vector<int> E={},int i=0){
    if(i>=v.size()){
        if(sum==target){
            printV(E);
        }
        return ;
    }
    sum+=v[i];
    E.push_back(v[i]);
    subsequence_target(v,target,sum,E,i+1);
    sum-=v[i];
    E.pop_back();
    subsequence_target(v,target,sum,E,i+1);
}
void subsequence(vector<int> v,vector<int> E={},int i=0){
    if(i>=v.size()){
        printV(E);
        return ;
    }
    E.push_back(v[i]);
    subsequence(v,E,i+1);
    E.pop_back();
    subsequence(v,E,i+1);
}
int main(){
    int size,target;
    cout << "enter array size : ";
    cin >> size;
    cout << "enter target : ";
    cin >> target;
    vector <int> v(size);
    cout << "ENTER ARRAY: ";
    for(int i=0;i<size;i++){
        cin >> v[i];
    }
    printV(v);
    // subsequence(v);
    // int num=0;
    // subsequence_target(v,target);
    // subsequence_target_num(v,target,num);
    // cout << num;
    cout<< subsequence_target_num_2(v,target);
    return 0;
}