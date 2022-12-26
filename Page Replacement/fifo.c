#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int page,frame,hits=0,fault=0,i,j,flag;

    printf("Enter the Number of Pages:");
    scanf("%d",&page);

    int str[page];

    printf("Enter the Reference String:");
    for(i=0;i<page;i++){scanf("%d",&str[i]);}

    printf("Enter the Number of Frames:");
    scanf("%d",&frame);

    int temp[frame];
        for(j=0;j<frame;j++)
        {
        temp[j]=-1;
        }

    for(int i=0;i<page;i++){
        flag=1;
        for(j=0;j<frame;j++)
        {if(temp[j]==str[i])
        {
            flag=0;
            hits++;
            break; 
        }}
        if(flag==1){
            for(j=0;j<frame-1;j++)
            {
                temp[j]=temp[j+1];
            }
            temp[j]=str[i];
            fault++;
        }
    }
    printf("No of Hits:%d and No of Faults:%d",hits,fault);
}