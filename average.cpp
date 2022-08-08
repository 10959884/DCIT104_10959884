// write a program to calculate the average of all even integers between 1 and 10000(ten thousand).
#include <stdio.h>
  
// Function to calculate the average of even numbers
int averageEven(int n)
{
    if (n % 2 != 0) {
        printf("Invalid Input");
        return -1;
    }
  
    int sum = 0, count = 0;
    while (n >= 2) {
  
        // count even numbers
        count++;
  
        // store the sum of even numbers
        sum += n;
  
        n = n - 2;
        }
    return sum / count;
}
  
// driver function
int main()
{
    int n = 16;
    printf("%d", averageEven(n));
    return 0;
}