#include <stdio.h>

int main() {
    int choice;

    printf("\nFile Allocation Techniques\n");
    printf("1. Sequential Allocation\n");
    printf("2. Indexed Allocation\n");
    printf("3. Linked Allocation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        // Sequential Allocation
        case 1: {
            int start, length, i;
            printf("\n--- Sequential Allocation ---\n");
            printf("Enter starting block: ");
            scanf("%d", &start);
            printf("Enter length of file: ");
            scanf("%d", &length);

            printf("Allocated blocks are: ");
            for(i = 0; i < length; i++) {
                printf("%d ", start + i);
            }
            printf("\n");
            break;
        }

        // Indexed Allocation
        case 2: {
            int indexBlock, n, blocks[50], i;
            printf("\n--- Indexed Allocation ---\n");
            printf("Enter index block: ");
            scanf("%d", &indexBlock);
            printf("Enter number of blocks: ");
            scanf("%d", &n);

            printf("Enter block numbers:\n");
            for(i = 0; i < n; i++) {
                scanf("%d", &blocks[i]);
            }

            printf("Index Block: %d\n", indexBlock);
            printf("Allocated blocks are: ");
            for(i = 0; i < n; i++) {
                printf("%d ", blocks[i]);
            }
            printf("\n");
            break;
        }

        // Linked Allocation
        case 3: {
            int n, blocks[50], i;
            printf("\n--- Linked Allocation ---\n");
            printf("Enter number of blocks: ");
            scanf("%d", &n);

            printf("Enter block numbers:\n");
            for(i = 0; i < n; i++) {
                scanf("%d", &blocks[i]);
            }

            printf("Linked Allocation:\n");
            for(i = 0; i < n - 1; i++) {
                printf("%d -> ", blocks[i]);
            }
            printf("%d\n", blocks[n - 1]);
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}