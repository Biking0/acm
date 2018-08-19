//最后一个单词
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int count=0;
    getline(cin,str);
    for(int i=str.size();i>=0;i--)
    {
        if(str[i]==' ')
        {
            cout<<count-1;
            return 0;
        }
        count++;
        if(count==str.size()) cout<<str.size();

    }
    return 0;
}

