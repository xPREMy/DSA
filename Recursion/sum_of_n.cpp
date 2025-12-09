#include <iostream>
using namespace std;
int f(int c){
    if(c==0) return 0 ;
    return f(c-1) + c;
}
int fact(int c){
    if(c==0) return 1;
    return c*fact(c-1);
}
int main(){
    int c;
    cout << "enter number : ";
    cin >> c;
    cout << f(c) << "\n";
    cout << fact(c);
}