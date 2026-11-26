/*
5
          A 
        A B A 
      A B A B A 
    A B A B A B A 
  A B A B A B A B A 
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m=n;

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< "  ";

        }
        m--;
        int temp=0;
        for (int k=0;k<2*i+1;k++){
            if(temp==0){
                cout<<"A"<<" ";
                temp++;
            }
            else{
                cout<<"B"<<" ";
                temp--;
            }
        }
        cout<<"\n";
    }
}