#include <stdio.h>

int main() {
    int ch, i, n, s, b[50];

    printf("1.Sequential\n2.Indexed\n3.Linked\nChoice: ");
    scanf("%d", &ch);

    switch(ch) {

    case 1:
        printf("Start & Length: ");
        scanf("%d%d", &s, &n);

        printf("Blocks: ");
        for(i=0;i<n;i++)
            printf("%d ", s+i);
        break;

    case 2:
        printf("Index Block & No. of Blocks: ");
        scanf("%d%d", &s, &n);

        printf("Enter blocks: ");
        for(i=0;i<n;i++)
            scanf("%d", &b[i]);

        printf("Blocks: ");
        for(i=0;i<n;i++)
            printf("%d ", b[i]);
        break;

    case 3:
        printf("No. of Blocks: ");
        scanf("%d", &n);

        printf("Enter blocks: ");
        for(i=0;i<n;i++)
            scanf("%d", &b[i]);

        for(i=0;i<n-1;i++)
            printf("%d->", b[i]);

        printf("%d", b[n-1]);
        break;

    default:
        printf("Invalid");
    }

    return 0;
}