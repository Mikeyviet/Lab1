//  Name:   Michael Nguyen
//  ID:     1000419127
//  Class:  CSE 3318 Data Structures and Algorithms
//  Lab:    1
//
//  Compile Command:

#include <stdio.h>
#include <stdlib.h>

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
        {
            return mid;
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        // If key is smaller, ignore the right half
        else
        {
            high = mid - 1;
        }
    }
    // Key not found
    return -1;
}

int main(void)
{


    int m, n, p;

    // Read input values from standard input (Linux shell redirection)
    scanf("%d %d %d", &m, &n, &p);

  
    // Dynamically allocate memory for sequences a and b
    int *rank = (int *)malloc((p + 2) * sizeof(int));
    int *a = (int *)malloc((m + 2) * sizeof(int));
    int *b = (int *)malloc((n + 2) * sizeof(int));

    // Initialize sentinel values
    a[0] = b[0] = -99999999;
    a[m + 1] = b[n + 1] = 99999999;


            // Read elements for sequence a
            for (int i = 0; i <= m+2; i++)
            {
                scanf("%d", &a[i]);
            }

            // Read elements for sequence b
            for (int i = 0; i <= n+2; i++)
            {
                scanf("%d", &b[i]);
            }

            // Process each query separately
            for (int i = 0; i < p; i++)
            {
                scanf("%d", &rank[i]);
            }

            // Read elements for sequence a
            for (int i = 0; i <= m+2; i++)
            {
                printf("\n%d", a[i]);
            }
            printf("\n----------");

            // Read elements for sequence b
            for (int i = 0; i <= n+2; i++)
            {
                printf("\n%d", b[i]);
            }
            printf("\n----------");

            // Process each query separately
            for (int i = 0; i < p+2; i++)
            {
                printf("\n%d", rank[i]);
            }
            printf("\n----------");


    // Binary search in sequence a
    int low = 0, high = m + 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int j = rank[p] - mid;

        printf("\nlow %d high %d i %d j %d ", low, high, mid, j);

        int k = 0;
        if (j >= 0 && b[j] < a[mid] && a[mid] <= b[j + 1])
        {
            while(k < p)
            {

            // Found the element
            printf("\na[%d]=%d b[%d]=%d a[%d]=%d\n", mid, a[mid], j, b[j], j + 1, a[mid]);
            printf("\na[%d]=%d has rank %d\n\n", mid, a[mid], rank[k]);
            p++;
            break;

            }
        }
        else if (j >= 0 && a[mid] < b[j])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Free allocated memory
    free(a);
    free(b);

    return 0;
}
