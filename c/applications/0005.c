#include <stdio.h>

int main () {
    int a,b,flag1=0,flag2=0;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);

    for (int i = 2; i < a; i++){
        if ( a % i == 0){
            flag1 = 1;
        }
    }
    for (int i = 2; i < b; i++){
        if ( b % i == 0){
            flag2 = 1;
        }
    }
    if ( flag1 == 1) printf("Number isnt Co - Prime\n");
    else printf("Number is co prime\n");
    if ( flag2 == 1) printf("Number isnt Co - Prime");
    else printf("Number is co prime");
    return 0;
}