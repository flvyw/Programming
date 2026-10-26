#include <stdio.h>

float areaofcircle( int );
int main () {
    int x;
    printf("Enter the value of radius : ");
    scanf("%d",&x);
    float result = areaofcircle(x);
    printf("\n%0.2f is area of %d radius circle",result,x);
    return 0;
}

float areaofcircle(int r){
    return 3.14 * r * r;
}