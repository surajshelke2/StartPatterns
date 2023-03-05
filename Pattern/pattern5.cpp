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
       int j=0;
       
       while (col<=row)
       {
            
            cout<<row+j<<" ";
            j++;
            col++;
       }
    cout<<endl;
       row++;
       
    }
    
}