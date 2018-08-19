#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i;
//    cout<<"please input number:";
    cin>>n;

    for(i=2;i<=n;i++)
    {
        while(n!=i)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
                n=n/i;
            }
            else
                break;
        }

    }
    cout<<n<<" "<<endl;
    return 0;
}
