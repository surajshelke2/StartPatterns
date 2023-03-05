#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;

    while(i<=n){

        int space=i-1;
        int count = 1+i-1;

        while(space){
            
            cout<<" ";
            // space+=space;
            space--;
        }

        int col=1;
        while (col<=n-i+1)
        {
          cout<<count;
        //   count++;
          col++;
        }
        cout<<endl;
        i++;
        
    }
}