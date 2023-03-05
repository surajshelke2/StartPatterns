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
        char ch ='A'+c-i;

        while (j<=i)
        {

           
            cout<<ch;
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}