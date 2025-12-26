#include<stdio.h>
//Saurav Kumar 11755
int sumOfDigits(int n){
    int sum = 0;
    if(n<0){
        n=-n;   
    }
    while(n>0){
        sum +=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("%d", sumOfDigits(n)); 
    return 0;
}
//OUTPUT:
//Enter a Number: 678 
// 21
