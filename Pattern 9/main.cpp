/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout<<"*";
        }
        cout<<endl;
    }
} */


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int r=1;
    while(r<=n){
        int c=1;
        while(c<=r){
            cout<<"*";
            c++;
        }
        cout<<endl;
        r++;
    }
}
