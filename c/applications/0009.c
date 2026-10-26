#include <stdio.h>

int main () {
    int n = 5;
    int c=n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j < c) printf(" * ");
            else printf("   ");
        }
        c = c-1;
        printf("\n");
        
    }

    return 0;
}