//描述：

//输入一个整数，将这个整数以字符串的形式逆序输出

//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=str.size()-1;i>=0;i--)
    {
        cout<<str[i];
    }
}
