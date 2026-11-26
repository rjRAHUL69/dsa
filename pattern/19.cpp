#include<iostream>
using namespace std;

int main(){
   int n;
   cin >> n;
   int m=n;
   int temp=0;

   for (int i=0;i<n*2;i++){
      if(i<(n+1)/2){
               for (int j=0;j<m;j++){
                  cout<<"*";
               }
               for(int k=0;k<=temp;k++){
                  cout<<"_";
                  temp++;
               }
               for(int l=0;l<=m;l++){
                  cout<<"*";
               }
               m--;
               

      }
      else{
         if(n>i){
            break;
         }
         else{
            int temp2=temp;
               for (int j=0;j<m;j++){
                  cout<<"*";
               }
               for(int k=0;k<=temp2;k++){
                  cout<<"_";
                  temp2--;
               }
               for(int l=0;l<=m;l++){
                  cout<<"*";
               }
               m++;
         }
      }
      cout<<"\n";
   }
}