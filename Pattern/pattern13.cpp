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
        char ch ='A'+ i-1;

        while (j<=c)
        {

           
            cout<<ch;
            ch+=1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}