//hdoj 1076
//windows
//判断闰年
//普通年（不能被100整除的年份）能被4整除的为闰年。
//（如2004年就是闰年,1999年不是闰年）；
//世纪年（能被100整除的年份）能被400整除的是闰年。
//(如2000年是闰年，1900年不是闰年)；
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;
        int flag=0;
        while(1)
        {
            if(a%4==0&&a%100!=0||a%100==0&&a%400==0)
                flag++;
            if(flag==b)
                break;
            a++;

        }
        cout<<a<<endl;

    }
    return 0;
}
