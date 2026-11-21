/*

//just normal code 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            for (int i = st; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}*/

//brute force algo
/*
#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};

    int max_sum=INT_MIN;

    for(int st=0;st<n;st++){
        int curr_sum=0;

        for(int end=n;end>0;end--){
            curr_sum+=arr[end];

            max_sum=max(curr_sum,max_sum);
        }
    }
    cout<<"max subarray sum= "<<max_sum<<endl;
}*/


//optimized approach
