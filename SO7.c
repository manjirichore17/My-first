// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int pages[50],frames[10];
    int n,f,i,j,k;
    int pageFaults=0,pageHits=0;
    int index=0,found;
    printf("Enter the number of pages:");
    scanf("%d",&n);
    printf("Enter the page Reference string:\n");
    for (i=0;i<n;i++){
        scanf("%d",&pages[i]);
    }
    printf("Entert number of frames: ");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        frames[i]=-1;
    }
    for(i=0;i<n;i++){
        found=0;
        for(j=0;j<f;j++){
         if(frames[j]==pages[i]){
             found=1;
             pageHits++;
             break;
         }   
        }
        if(found==0){
            frames[index]=pages[i];
            index=(index+1)%f;
            pageFaults++;
        }
        printf("Frames: ");
        for(k=0; k<f;k++){
            if(frames[k]!=-1)
            printf("%d",frames[k]);
            else
            printf("- ");
        }
        printf("\n");
    }
    float hitRatio=(float)pageHits/n;
    float missRatio=(float)pageFaults/n;
    printf("\n Total Page Hits=%d",pageHits);
    printf("\n Total Page Faults=%d",pageFaults);
    printf("\n Hit Ratio =%.2f\n",hitRatio);
    printf("\n Miss Ratio = %.2f\n",missRatio);
    return 0;
}