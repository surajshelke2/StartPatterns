#include<iostream>
using namespace std;
int main(){
    int i=1,count=1;
    int c;
    cout<<"Enter the range :";
    cin>>c;

    while (i<=c)
    {
        int j=1;
        int values=i;

        while (j<=i)
        {

            cout<<i-j+1<<" ";
            // cout<<values;
            // values=values-1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}