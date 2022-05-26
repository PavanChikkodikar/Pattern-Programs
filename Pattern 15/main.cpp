#include <iostream>

using namespace std;

int main()
{
    //'A' + c - 1
    int n;
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){ // c<=n because it is square matrix
                char ch = 'A' + c - 1;
            cout<<ch<< " ";
        }
        cout<<endl;
    }
}
