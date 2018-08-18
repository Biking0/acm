
//输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int zimu=0,shuzi=0,kongge=0,qt=0;
    getline(cin,str);

    for(int i=0;i!=str.size();i++)
    {
        if(str[i]==' ') kongge++;
        else if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') zimu++;
        else if(str[i]>='0' && str[i]<='9') shuzi++;
        else qt++;
    }

    cout<<zimu<<" "<<shuzi<<" "<<kongge<<" "<<qt;

    return 0;
}
