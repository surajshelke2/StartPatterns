#include<iostream>
using namespace std;
int main(){
    int i=1,count=1;
    int c;
    cout<<"Enter the range :";
    cin>>c;
    char start='A';

    while (i<=c)
    {
        int j=1;
        int values=i;
        
        
        while (j<=c)
        {

            
            cout<<start;
            start=start+1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}