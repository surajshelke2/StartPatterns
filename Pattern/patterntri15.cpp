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
        

        while (j<=c-i+1)
        {

            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}