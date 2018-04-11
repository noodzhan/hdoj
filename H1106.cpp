//hdoj 1106
//windows
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string a;
string s[1010];
int re[1010];
void maopao_sort(int n)
{
    int i=0;
    int j=0;
    int temp;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)

        if(re[i]>re[j])
        {
            temp=re[i];
            re[i]=re[j];
            re[j]=temp;
        }

}
int main()
{

    while(cin>>a)
    {
        int i=0;
        int j=0;
        int d=0;//步距
        int pos=0;
        for(i=0;i<a.size();i++)
        {
            if(a[i]!='5')
                d++;
            if(a[i]=='5')
                {
                    pos=i;
                    //cout<<"d="<<d<<" i="<<i<<endl;
                    if(d!=0)
                        {
                            int temp=i-d;
                            int zhi=0;//记录前面含有多少0
                            while(a[temp]=='0')
                            {
                                zhi++;
                                temp++;
                            }
                            if(i-d+zhi==i)
                                s[j]='0';
                            else
                                s[j]=a.substr(i-d+zhi,d-zhi);
                            //cout<<s[j]<<endl;
                            j++;
                        }
                    d=0;
                }
        }
        //cout<<pos+1<<" "<<i<<endl;
        if(pos+1<i)
        {
            s[j]=a.substr(pos+1,i-pos-1);
            j++;
        }//最后一个5后面的数值
        std::string::size_type sz;
        for(int i=0;i<j;i++)
            re[i]=std::stoi(s[i],&sz);
            //这一部分代码是将字符串转化成int数组
        maopao_sort(j);
        for(int i=0;i<j-1;i++)
            cout<<re[i]<<" ";
        cout<<re[j-1];
        cout<<endl;
    }
    return 0;
}
