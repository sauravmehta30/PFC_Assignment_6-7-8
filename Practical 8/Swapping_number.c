#include <stdio.h>
void swap(int*a,int*b){
    //Saurav Kumar 11755
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
int main() {
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Before swapping:x=%d,y=%d\n",x,y);
    swap(&x, &y); 
    printf("After swapping: x=%d, y=%d\n",x,y);
    return 0;
}
//OUTPUT:
//Enter two numbers:
//6 8
//Before swapping:x=6,y=8
//After swapping: x=8, y=6
