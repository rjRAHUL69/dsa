/*
5
1
01
101
0101
10101
*/
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;

    for(int i=1;i<=n;i++){
        m=i;
        for(int j=1;j<=i;j++){
            if(m%2 != 0){
                cout<< "1";
            }
            else{
                cout<< "0";
            }
            m--;
        }
        cout<<"\n";
    }
}