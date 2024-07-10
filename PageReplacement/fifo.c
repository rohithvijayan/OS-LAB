//FIFO
#include<stdio.h>
void main()
{
int n,rs[20],f,i,j,m[20],count=0,pf=0;
printf("enter length of reference string :");
scanf("%d",&n);
printf("enter reference string:");
for(i=0;i<n;i++)
 {
  scanf("%d",&rs[i]);
 }
printf("enter number of frames:");
scanf("%d",&f);
int flag;
for(i=0;i<f;i++)
 {
  m[i]=-1;
 }
for(i=0;i<n;i++)
 {
  int flag=0;
  for(j=0;j<f;j++)
   {
    if(m[j]==rs[i])
     {
      flag=1;
      break;
     }
   }
   if(!flag)
    {
     pf++;
     m[count++ % f]=rs[i];
    }
 }
 printf("No.of Page Faults:%d",pf);
 printf("\nNO.OF HITS:%d",n-pf);
}
