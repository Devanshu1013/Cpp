#include<iostream>
using namespace std;

int main(){
    // ***
    // ***
    // ***
    // int n;
    // cin>>n;

    // int i=1;
    
    // while (i<=n){
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // 111
    // 222
    // 333

    // int n ;
    // cin>>n;

    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<<i;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;        
    // }
    
    int n;
    cin>>n;
    int  i=1;
    while (i<=n){
        int j=1;
        while (j<=i)
        {
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;        
    }
}