#include<stdio.h>
#include<stdlib.h>
int main(){
    int requests[100],n,head,i;
    int seek_time=0;
    int distance,cur_track;
    printf("Enter the number of disk requests:");
    scanf("%d",&n);
    printf("Enter the Disk requests:\n");
    for(i=0;i<n;i++){
        scanf("%d",&requests[i]);
    }
    printf("Enter the initialhaed position:");
    scanf("%d",&head);
    printf("\nSeek Sequence is:\n");
    for(i=0;i<n;i++){
        cur_track=requests[i];
        printf("%d->",cur_track);
        distance=abs(cur_track-head);
        seek_time+=distance;
        head=cur_track;
    }
    printf("\n\nTotal seek time = %d\n",seek_time);
    return 0;
}