#include <stdio.h>
int main(){
int length,breadth,perimeter,area;
printf("length=");
scanf("%d1",&length);
printf("breadth=");
scanf("%d",&breadth);
perimeter = 2 * (length + breadth);
printf("perimeter=%d\n",perimeter);
area = length * breadth;
printf("area=%d\n",area);
return 0;
}
