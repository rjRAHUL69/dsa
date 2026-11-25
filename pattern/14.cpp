/*
5
A  
A  B  
A  B  C  
A  B  C  D  
A  B  C  D  E  

*/
#include<iostream>
using namespace std;

int main(){
    // string r ="rahul";
    // cout << r;

    // for (char ch = 'A'; ch <= 'Z'; ch++) {
    //     cout << ch << " ";
    // }
    int n;
    cin >> n;

    for (int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            cout<<char('A' + j)<<"  ";
        }
        cout<<"\n";
    }
}