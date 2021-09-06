#include<iostream>
using namespace std;
int main()
{
    int n,c,i,sum=0;
    cout<<"enter your number : " ;
    cin>> n;
    for(i=0;i<n;i++)
    {
        cin>>c;
    }
    for(i=0;i<n;i++)
    {
      cout<<c;
    }
    for(i=0;i<n;i++)
    {
        sum+=i;
        cout<<sum;
    }
}
