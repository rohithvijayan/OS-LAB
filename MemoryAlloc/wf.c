//WORST FIT MEM ALLOCATION
#include<stdio.h>
int i,j;
void worstfit(int n,int b,int psize[20],int bsize[20])
{
int allocated[n]={-1};
for(i=0;i<n;i++)
 {
  worstindex=-1;
  for(j=0;j<b;j++)
   {
    if(bsize[j]>=psize[i])
     {
      if(worstindex==-1)
       {
        worstindex=j;
       }
       else if(bsize[worstindex]<bsize[j])
        {
         worstindex=j;
        }
     }
   }
   if(worstindex!=-1)
    {
     allocated[i]=j;
     bsize[j]-=psize[i];
    }
 }
printf("\nProcess\t\tData\t\tAllocated\t\tFragments");
for(i=0;i<n;i++)
 {
  printf("%d\t\t%d\t\t\t",i+1,pSize[i]);
  if(allocated[i]==-1)
   {printf("not allocated");}
 else
  {
   printf("%d\t\t\t%d\n",allocated[i]+1,bsize[i]);
  }
}
void main()
{
int n,b,bsize[20],psize[20];
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
  scanf("%d",&bsize[i]);
 }
worstfit(n,b,psize,bsize);
}
