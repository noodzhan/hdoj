#include <iostream>
void qsort(int *a,int l,int r)
{
		int i=l;
		int j=r;
		a[0]=a[l];
		if(i<j)
		{
				while(i<j)
				{
						while(i<j&&a[j]>=a[0])
								j--;
								a[i]=a[j];
						while(i<j&&a[i]<=a[0])
								i++;
								a[j]=a[i];
				}
				a[i]=a[0];
				qsort(a,l,i-1);
				qsort(a,i+1,r);
		}
}
int main()
{
		int a[10]={0,9,8,7,6,5,4,3,2,1};
		qsort(a,1,9);
		int i;
		for(i=1;i<=9;i++)
				std::cout<<a[i];
		return 0;
}
