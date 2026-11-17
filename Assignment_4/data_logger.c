#include <stdio.h>

#define BUFFER_SIZE 5

// Function to insert a new sample into the circular buffer
void insertSample(int buffer[], int *head, int *count, int val) {
    buffer[*head] = val;
    *head = (*head + 1) % BUFFER_SIZE;
    if (*count < BUFFER_SIZE) {
        (*count)++;
    }
}

// Function to print all stored samples in chronological (oldest-newest) order
void printBuffer(int buffer[], int head, int count) {
    int i, idx;
    if (count > 0) {
        int oldest_idx = (head - count + BUFFER_SIZE) % BUFFER_SIZE;
        printf("On print: oldest is %d -> ", buffer[oldest_idx]);
    } else {
        printf("Buffer is empty.\n");
        return;
    }
    for (i = 0; i < count; i++) {
        idx = (head - count + i + BUFFER_SIZE) % BUFFER_SIZE;
        printf("%d ", buffer[idx]);
    }
    printf("\n");
}

int main() {
    int buffer[BUFFER_SIZE];
    int head = 0;
    int count = 0;
    int choice, val;
    while (1) {
        printf("\n--- Circular Data Logger ---\n");
        printf("1. Insert a new sample\n");
        printf("2. Print stored samples\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1) {
            printf("User input: ");
            scanf("%d", &val);
            insertSample(buffer, &head, &count, val);
            printf("buffer: [");
            for (int i = 0; i < count; i++) {
                int idx = (head - count + i + BUFFER_SIZE) % BUFFER_SIZE;
                printf("%d", buffer[idx]);
                if (i < count - 1) printf(" ");
            }
            printf("]\n");
        } else if (choice == 2) {
            printBuffer(buffer, head, count);
        } else {
            break;
        }
    }

    return 0;
}
