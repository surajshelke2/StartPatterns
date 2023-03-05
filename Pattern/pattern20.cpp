#include<iostream>
using namespace std;
int main(){
    int row=1;
    int n;
    cout<<"Enter the count :";
    cin>>n;

    while (row<=n)
    {
       int count =n-row+1;
        int col=1;

       while(col<=count)
       {
        cout<<col;
        col++;
       }
       

    int start = (row-1)*2;
    while(start){
        cout<<"*";
        start=start-1;
        
    }

    int k=n-row+1;
    while(k){
        cout<<k;
        k=k-1;
    }
     cout<<endl;
    row++;
    }
   

}