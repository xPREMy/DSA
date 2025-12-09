#include <iostream>
using namespace std;
bool ispalin(const string &s,int i=0){
    if(i>=s.size()-1-i) return 1;
    if(s[i]!=s[s.size()-1-i]) return 0;
    return ispalin(s,i+1);
}
int main(){
    string s;
    cout << "enter string: " << "\n";
    cin >> s;
    cout << ispalin(s);
}
