#include <stdio.h>

int main () {

    int target;
    printf("Enter the number to check : ");
    scanf("%d",&target);
    int flag = 1;
    int a=0,b=1,temp=0;
    int i=0;
    while(i < 100)
    {
        if (temp != target && temp > target ) {
        temp = a+b;
        a = b;
        b = temp;
        }
        else flag = 0;
        
        i++;
    }
    if (flag != 0) printf("Number is in series");
    else printf("number isnt in series");

    return 0;
}