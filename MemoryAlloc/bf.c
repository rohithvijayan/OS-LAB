//best fit
#include<stdio.h>
int i,j;
void bestfit(int n,int b,int psize[20],int bsize[20])
{
int allocated[n];
for(i=0;i<n;i++)
 {
  allocated[i]=-1;
 }
for(i=0;i<n;i++)
 {
  int bestindex=-1;
  for(j=0;j<b;j++)
   {
    if(bsize>=psize)
     {
      if(bestindex==-1)
       {
        bestindex=j;
       }
      else if(bsize[bestindex]>bsize[j])
       {
        bestindex=j;
       }
     }
   }
   if(bestindex!=-1)
    {
     allocated[i]=j;
     bsize[j]-=psize[i];
    }

 }
printf("\nProcess\t\tDatasize\t\tallocated\t\tFragments\n");
for(i=0;i<n;i++)
{
 printf("\n%d\t\t%d\t\t\t",i+1,psize[i]);
 if(allocated[i]==-1)
  {printf("not allocated");}
 else
  {printf("%d\t\t%d\n",allocated[i+1],bsize[i]);}
}
}
void main()
{
int n,b,psize[20],bsize[20];
printf("enter num of process:");
scanf("%d",&n);
printf("enter num of blocks:");
scanf("%d",&b);
printf("enter process size:");
for(i=0;i<n;i++)
 {
  scanf("%d",&psize[i]);
 }
printf("enter block size:");
for(i=0;i<b;i++)
 {
  scanf("%d",&n);
 }
bestfit(n,b,psize,bsize);
}
