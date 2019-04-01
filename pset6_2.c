#include <stdio.h>
int main()
{
 int N,i,j,min,t,K;
 scanf("%d %d",&N,&K);
 int a[N];
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
 K=N+1-K;
for(j=0;j<K;j++)
{min=0;
     for(i=0;i<N;i++)
     {
         if(a[i]>min)
         {
             min=a[i];
             t=i;
         }
     }
 
    a[t]=0;
}
 printf("%d",min);


    return 0;
}
