#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int req,head,count=0,seektime=0;

printf("Enter the number of req:");
scanf("%d",&req);

int rq[req];

printf("Enter the content of request queue:");
for(int i=0;i<req;i++)
{
    scanf("%d",&rq[i]);
}

printf("Enter the initial position of read write head:");
scanf("%d",&head);

while(count!=req)
{
    int min=10000,diff,index;
    for(int i=0;i<req;i++)
    {
    diff=abs(rq[i]-head);
    if(min>diff)
    {min=diff;
    index=i;}
    }
    seektime=seektime+min;
    head=rq[index];

    rq[index]=10000;
    count++;
}
printf("Total Seek Time:%d",seektime);
}