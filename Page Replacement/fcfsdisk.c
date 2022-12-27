#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int totalreq,seektime=0,head;
    printf("Enter the Number of Requests:");
    scanf("%d",&totalreq);

    int req[totalreq];

    printf("Enter the track number of requests:");
for(int i=0;i<totalreq;i++)
{
    scanf("%d",&req[i]);
}
    printf("Enter the position of read write head:");
    scanf("%d",&head);
printf("%d---",head);
for(int i=0;i<totalreq;i++)
{
   if(i==totalreq-1)
      printf("%d",req[i]);
    else
      printf("%d---",req[i]);

    seektime+=abs(req[i]-head);
    head=req[i];
}

printf("\nTotal Seek Time=%d",seektime);
}