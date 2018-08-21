//句子逆序，将一个英文语句以单词为单位逆序排放。
//逆序遍历字符串，遇到空格打印已读取的数据

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str,str1;

    getline(cin,str);

    for(int i=str.size()-1;i>=0;i--)
    {
        str1+=str[i];
        if(str[i]==' ')
        {
            //需要再转过来
            for(int j=str1.size()-2;j>=0;j--)
            {
                cout<<str1[j];
            }
            cout<<" ";
            str1.clear();
        }
        if(i==0)
        {
            //需要再转过来
            for(int j=str1.size()-1;j>=0;j--)
            {
                cout<<str1[j];
            }
            cout<<" ";
            str1.clear();
        }

    }
}
