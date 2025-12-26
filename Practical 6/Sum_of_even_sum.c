#include<stdio.h>
int main() {
    //Saurav kumar 11755
    int n, sum = 0;
    printf("Enter a integer: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        if(i%2!=0){
        continue;
    }
        sum += i;
}
    printf("Even sum = %d", sum);
    return 0;
}
//output 
//Enter the value of n: 9
//Sum of even numbers from 1 to 9 is: 20
