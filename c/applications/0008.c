#include <stdio.h>

int main () {
    int n=6;
    for (int i = n; i > 0; i--){
        for (int j = 0; j < n; j++){
            if (j >= i) printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }


    return 0;
}