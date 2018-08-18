//求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。
//例如，n=5时=2+22+222+2222+22222，n由键盘输入。

#include <iostream>
#include<string>
#include<sstream>

using namespace std;

int pinjie(int m)
{
    string str;
    stringstream stream;
    stream<<m;
    str=stream.str();
    str=str+"2";
    return std::stoi(str);
}

int main()
{
    int n,m,sum=0;
    cin>>n;

    m=2;

    for(int i=0;i<n;i++)
    {
        //cout<<"m:"<<m<<endl;
        sum+=m;
        //每次循环拼接个2
        m=pinjie(m);
    }
    cout<<sum;
    return 0;
}

