#include<stdio.h>
float main(){
    int r,diameter,perimeter,area;
    printf("enter radius r");
    scanf("%d",&r);
    diameter=2*r;
    perimeter=2*3.14*r;
    area=3.14*r*r;
    printf("diameter:%d\n",diameter);
    printf("perimeter:%d\n",perimeter);
    printf("area:%d\n",area);
}