#include<iostream>
using namespace std;
int main(){
    int row =1;
    int n;
    cin>>n;
    while (row<=n)
    {
        int count = row+1-1;
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while (col<=row)
        {
           cout<<count;
           col=col+1;

        }
        cout<<endl;
        row=row+1;

        
        
    }
    
}