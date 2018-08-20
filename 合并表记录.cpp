//题目描述
//数据表记录包含表索引和数值，请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

//输入描述:
//先输入键值对的个数
//然后输入成对的index和value值，以空格隔开

//输出描述:
//输出合并后的键值对（多行）

#include<bits/stdc++.h>

using namespace std;

int main()

{


    int count;
    string str;
    scanf("%d",&count);
    getchar();
    map<int, string> m;

    stringstream stream;


    //输入主数据
    for(int i=0;i<count;i++)
    {
        getline(cin,str);
        int int1=0,int2=0;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]==' ')
            {
                int1=stoi(str.substr(0,j));
                int2=stoi(str.substr(j,str.size()));
            }
        }

        if(i>0)
        {
            if(m.count(int1)>0)
            {
                int a=stoi(m[int1])+int2;
                stream.str("");
                stream<<a;
                m[int1]=stream.str();
                stream.str("");
                continue;
            }
        }
        stream<<int2;
        m.insert(pair<int, string>(int1, stream.str()));
        stream.str("");
    }

    map<int, string>::iterator iter;

    for(iter = m.begin(); iter != m.end(); iter++)

        cout<<iter->first<<' '<<iter->second<<endl;

}
