//hdoj 1098
//windows
//要对于任意x使得f(x)能被65整除
//那么f(1+x)也能被65整除
//按照二项式展开
//最后只需（18+k*a）%65==0即可
//其中a的最大值为65，周期65
#include <stdio.h>
int main()
{
    int k=0;
    while(scanf("%d",&k)!=EOF)
    {
        int a=0;
        while(a!=66)
        {
            if((18+k*a)%65==0)
                break;
            a++;
        }
        if(a==66)
            printf("no\n");
        else
            printf("%d\n",a);
    }
    return 0;
}
