#include<stdio.h>
int main() { //start of function
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num); //Accepting integer input into a variable
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);//printing numbers that can be used to divide the input integer
        }
    }
    return 0;
}
