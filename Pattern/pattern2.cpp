#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the count :";
    cin>>n;
    int count =1;
    while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
            // cout<<j;             //counting on asencing like 1 2 3 4    1 2 3 4
            // cout<<n-j+1<<" ";    //counting on like    4 3 2 1   4 3 2 1
            cout<<count<<" ";
            count=count+1;          //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
            j++;
       }
    cout<<endl;
       i++;
       
    }
    
}