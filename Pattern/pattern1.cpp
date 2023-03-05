#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the range of a pattern :";
    cin>>n;

    int i=1;
    while (i<=n)
    {
    int j =1;
    while (j<=n)
    {
        // cout<<" * ";
        cout<<i;
        j+=1;
    }
    cout<<endl;
    i=i+1;
    
    }
    
}