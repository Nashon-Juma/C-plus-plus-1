#include <iostream>
using namespace std;
int main()
{
    int n =5;
    for(int i=1; i<=n;i++){
        for(int j=1;j<i<i;j++){
            cout<<"*";
        }
        int count =2 * n-2 * i;
        for(int j=1;j<=count;j++){
            cout<<" ";
        }
        for(int j =i;j>=1;j--){
            cout<<"*";
        }
        cout<<end1;
    }
}