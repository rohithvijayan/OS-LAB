//FIRST FIT
#include<stdio.h>
int i,j;
void firstfit(int n,int b,int psize[20],int bsize[20])
{
int allocated[20];
for(i=0;i<n;i++)
 {
  allocated[i]=-1;
 }
for(i=0;i<n;i++)
 {
  for(j=0;j<b;j++)
   {
    if(bsize[j]>=psize[i])
     {
      allocated[i]=j;
      bsize[j]-=psize[i];
      break;
     }
   }
 }
 printf("\nprocess\tData\tAllocated\n");
 for(i=0;i<n;i++)
   {
    if(allocated[i]==-1)
     {printf("not allocated");}
    else
     {printf("%d\n",allocated[i]+1);}   
   }
}

int main()
{
int n,b,psize[20],bsize[20],i;
printf("enter num of process:");
scanf("%d",&n);
printf("enter num of blocks:");
scanf("%d",&b);
printf("enter  process size :");
for(i=0;i<n;i++)
 {
  scanf("%d",&psize[i]);
 }
printf("enter block size:");
for(i=0;i<b;i++)
 {
  scanf("%d",&bsize[i]); 
 }
firstfit(n,b,psize,bsize);
return 0;
}
