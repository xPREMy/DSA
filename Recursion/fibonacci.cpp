#include <iostream>
using namespace std;
int fibonacci(int f){
    if(f<=1) return f;
    return fibonacci(f-1)+fibonacci(f-2);
}
int main(){
    int f;
    cin >> f;
    cout << fibonacci(f);
}