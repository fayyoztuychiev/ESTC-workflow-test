#include "main.h"

// main function
int main()
{
    int x[3], y[3];
    readVector(x);
    readVector(y);
    int sum[3], sub[3], dot = 0, cross[3];
    sumVectors(x, y, sum);
    subVectors(x, y, sub);
    dotVectors(x, y, dot);
    crossVectors(x, y, cross);
    printf("The sum of vectors x and y:");
    printVector(sum);
    printf("The sub of vectors x and y:");
    printVector(sub);
    printf("The dot of vectors x and y: %d \n", dot);
    printf("The cross of vectors x and y:");
    printVector(cross);
    return 0;
}