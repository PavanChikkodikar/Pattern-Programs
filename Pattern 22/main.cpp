#include <iostream>

using namespace std;

int main()
{
   /* int n;
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
           if(c<=n-r){
            cout<<" ";
           }
           else{
            cout<<"*";
           }
        }
        cout<<endl;
    } */

    int n;
    cin>>n;
    for(int r=n;r>=1;r--){
        for(int c=1;c<=r;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
