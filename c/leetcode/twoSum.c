#include <stdio.h>
#include <string.h>

int main () {
    char arr[7]; // Increased to 7 to safely hold 5 digits, \n, and the null terminator \0
    printf("Enter up to 5 digits (e.g., 12345): ");
    fgets(arr, sizeof(arr), stdin);
    
    // Remove the trailing newline character if it exists
    arr[strcspn(arr, "\n")] = '\0'; 
    
    int len = strlen(arr);
    int sums[6];
    int target;
    
    printf("Enter the target: ");
    scanf("%d", &target);
    
    
    for (int k = 0; k < len; k++) { 
        sums[k] = arr[k] - '0'; 
    }
    
    printf("Result indices or pairs: ");
    // Two-sum logic loop execution
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (sums[i] + sums[j] == target) {
                printf("[%d,%d] ", sums[i], sums[j]);
            }
        }
    }
    printf("\n");
    return 0;
}
