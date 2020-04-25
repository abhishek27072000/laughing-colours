#include<iostream>
using namespace std;
int main()
{
    int i,fact=0,n;
    cout<<"enter n :";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        fact=fact+(i*i);
    }
    cout<<i*i;
}
