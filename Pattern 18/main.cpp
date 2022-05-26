#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++)
        { //For trangular martix but when c=<n it is for square matrix
            char ch = 'A'+r-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
