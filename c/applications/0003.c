#include <stdio.h>

int main () {

    int target;
    printf("Enter the nth term to find : ");
    scanf("%d",&target);

    int a=0,b=1,s;
    for (int i = 2; i < target; i++){
        s = a+b;
        if(s == target){
            printf("index : %d have target %d\n",i,target);
            break;
        }
        else {
            a = b;
            b = s;
        }
    }
    return 0;
}