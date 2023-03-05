#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the count :";
    cin>>n;
    int count =1;
    while (row<=n)
    {
       int col=1;
       int value =row;
       while (col<=row)
       {
            cout<<value<<" ";
            value=value+1;
            col++;
       }
    cout<<endl;
       row++;
       
    }
    
}