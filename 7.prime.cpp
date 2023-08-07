#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of n:";
    cin>> n;
    int i =2;
    
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"Thee number is not prime"<<i<<endl;
        }
        else{
            cout<<"The number is prime"<<i<<endl;
        }
        i=i+1;
    }
    
}