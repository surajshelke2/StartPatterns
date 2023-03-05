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

        while (j<=c)
        {

            char ch= 'A'+i-1;
            cout<<ch;

            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}