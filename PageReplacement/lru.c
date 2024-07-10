//LRU PAGE REPLACEMENT
#include<stdio.h>
void main()
{
int n,rs[20],m[20],f,i,j,pf=0,last_used[20];
printf("enter len of reference string:");
scanf("%d",&n);
printf("enter reference string:");
for(i=0;i<n;i++)
 {
  scanf("%d",&rs[i]);
 }
printf("enter no.of frames:");
scanf("%d",&f);
for(i=0;i<f;i++)
 {
  m[i]=-1;
  last_used[i]=-1;
 }
for(i=0;i<n;i++)
 {
  int flag=0,lru_index=0;
  for(j=0;j<f;j++)
   {
    if(m[i]==rs[i])
     {
      flag=1;
      last_used[j]=i;
     }
   }
   if(!flag)
    {
     pf++;
     for(j=1;j<f;j++)
      {
       if(last_used[j]<last_used[lru_index])
        {
         lru_index=j;
        }
      }
      m[lru_index]=rs[i];
      last_used[lru_index]=i;
    }
 }
printf("page faults: %d",pf);
}
