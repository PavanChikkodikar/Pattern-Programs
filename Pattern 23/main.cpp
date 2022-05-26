#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=1;

    while(r<=n){
    //print space or 1st triangle
    int space = n - r;
    while(space){
    cout<<" ";
    space = space - 1;
    }
    //print 2nd triangle
    int j = 1;
    while(j<=r){
        cout<<j;
        j = j+1;
    }

    //print 3rd triangle
    int start = r-1;
    while(start){
        cout<<start;
        start=start-1;


    }
    cout<<endl;
    r=r+1;
  }
}
