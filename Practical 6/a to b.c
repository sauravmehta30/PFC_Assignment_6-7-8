#include <stdio.h>
int main() {
    //Saurav kumar 11755
    int A,B;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Numbers from %d to %d are:\n", A, B);
    for (int i=A;i<=B;i++){
        printf("%d ", i);
    }
    return 0;
}
//OUTPUT:
//Enter the value of A: 2
//Enter the value of B: 9
//Numbers from 2 to 9 are:
//  2 3 4 5 6 7 8 9 %
