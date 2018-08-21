//题目描述
//输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

//输入描述:
//输入一个int型整数

//输出描述:
//按照从右向左的阅读顺序，返回一个不含重复数字的新的整数


#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    getline(cin,str);
    string result="";
    int count=0;

    for(int i=str.size()-1;i>=0;i--)
    {
        for(int j=result.size();j>=0;j--)
        {
            if(str[i]==result[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            stringstream stream1;
            stream1<<str[i];
            result+=stream1.str();
        }
        count=0;
    }
    cout<<result;
}
