#include<iostream>
using namespace std;
int main(){
    int i=1,count=1;
    int c;
    cout<<"Enter the range :";
    cin>>c;

    // int value=1;

    while (i<=c)
    {
        int j=1;
        

        while (j<=i)
        {

            char ch = 'A'+i-1;
            cout<<ch;
            // value= value+1;
            j++;

          
        }
        cout<<endl;
        i++;
        
    }
    
}