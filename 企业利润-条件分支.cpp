
//企业发放的奖金根据利润提成。利润低于或等于100000元的，奖金可提10%;
//利润高于100000元，低于200000元（100000<I≤200000）时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5%;
//200000<I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
//400000<I≤600000元时，高于400000元的部分按3％提成；
//600000<I≤1000000时，高于600000元的部分按1.5%提成；
//I>1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I,求应发奖金总数。

#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cin>>a;
    if(a<=100000) b=a*0.1;
    else if(a>100000 && a<=200000) b=100000*0.1+(a-1000000)*0.075;
    else if(a>200000 && a<=400000) b=100000*0.1+100000*0.075+(a-200000)*0.05;
    else if(a>400000 && a<=600000) b=100000*0.1+100000*0.075+200000*0.05+(a-400000)*0.03;
    else if(a>600000 && a<=1000000) b=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(a-600000)*0.015;
    else b=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(a-10000000)*0.01;


    cout <<b<< endl;
    return 0;
}
