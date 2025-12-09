#include <iostream>
using namespace std;
void rec(int c){
    if(c==0) return ;
    cout << c << "\n";
    rec(--c);
}
void rec_rev(int c,int i=1){
    if(i>c) return ;
    cout << i << "\n";
    rec_rev(c,++i);
}
int main(){
    int c;
    cin >> c;
    rec(c);
    rec_rev(c);
}