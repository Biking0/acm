//输入两个正整数m和n，求其最大公约数和最小公倍数。

#include <iostream>

using namespace std;

int temp;

//更相减损，最大公约数
void gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    temp=a;
    cout<<a<<" ";
}

int main()
{

    int a,b;
    cin>>a>>b;

    gcd(a,b);
    cout<<(a*b)/temp;

    return 0;
}