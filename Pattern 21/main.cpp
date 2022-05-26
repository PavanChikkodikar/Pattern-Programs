#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int r=1;r<=n;r++){
         char ch =('A'+n-r);
        for(int c=1;c<=r;c++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
