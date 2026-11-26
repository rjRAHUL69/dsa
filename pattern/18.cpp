/*
5
E 
D E 
C D E 
B C D E 
A B C D E 
*/
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>> n;
    int m=n-1;

    for (int i=1;i<=n;i++){
        for (int j=0;j<i;j++){

            cout<< char('A' + m)<<" ";
            m++;
        }
        m=m-(i+1);
        cout<<"\n";
    }
}