#include <iostream>

using namespace std;

int main()
{
    int t, c1=0,a,b;
    cin>>t;
    while(c1<=t)
    {
        cin>>a;
        cin>>b;
        int c=0;

    while(a!=0)
    {
    if(a==b || a/500>b || b==1)
    {
        cout<<a<<b<<" if1"<<endl;
        b+=1;
        a=a/b;
        c+=2;
        cout<<a<<b<<" if2 "<<c<<endl;
    }
    else
    {
        a=a/b;
        c++;
        cout<<a<<b<<" else "<<c<<endl;
    }

    }

    cout<<c<<endl;
    c1++;
    }
    return 0;
}
