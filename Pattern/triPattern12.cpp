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

           char ch ='A'+ j+i-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}