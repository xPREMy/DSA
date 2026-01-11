#include<iostream>
using namespace std;
int k=0;
void towerofhanoi(int t,int from,int to,int hel){
    if(t==1){
        cout << k+1 <<" Disk 1 to ROD " << to<<"\n";
        k++;
        return;
    }
    towerofhanoi(t-1,from,hel,to);
    cout << k+1 <<" Disk " << t << " to ROD " << to << "\n";
    k++;
    towerofhanoi(t-1,hel,to,from);
}
int main(){
    int t=3;
    int from=1;
    int to=3;
    int hel=2;
    towerofhanoi(t,from,to,hel);
}