#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch = 'A';
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
