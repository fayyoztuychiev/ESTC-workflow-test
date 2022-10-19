#include "func.h"

// sum of vectors
void sumVectors(const int a[ ], const int b[ ], int c[ ]) 
{
    for (int i = 0; i < 3; i++){
        c[i] = a[i] + b[i];
    }
}

// sub of vectors
void subVectors(const int a[ ], const int b[ ], int c[ ]) 
{
    for (int i = 0; i < 3; i++)
        c[i] = a[i] - b[i];
}

// dot of vectors
void dotVectors(const int a[ ], const int b[ ], int c ) 
{
    c = 0; 
    for (int i = 0; i < 3; i++) {
        c += a[i] * b[i];
    }
}

// cross of vectors
void crossVectors(const int a[ ], const int b[ ], int c[ ]) 
{
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
}

// read vector
void readVector(int a[ ]) 
{
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
}



// printto console 
void printVector(const int a[ ]) 
{
    for (int i = 0; i < 3; i++)
        printf("%d ", a[i]);
    putchar('\n');
}