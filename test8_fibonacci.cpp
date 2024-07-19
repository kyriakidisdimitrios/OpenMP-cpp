//tasks
//fibonacci
#include <cstdio>
#include <omp.h>

//this couldn't work
// int fib(int n) { //n is private in both tasks
//     int x, y;
// #pragma omp parallel
//     {
//         if (n<2) return n;
// #pragma omp task
//         x =fib(n-1); //x is a private variable
// #pragma omp task
//         y =fib(n-1); //y is a private variable
// #pragma omp taskwait
//         return x+y; //A task's private variables are undefined outside the task
//     }
// }

int fib(int n) {
    int x, y;
    if (n < 2) return n;

#pragma omp task shared(x)
    x = fib(n - 1);

#pragma omp task shared(y)
    y = fib(n - 2);

#pragma omp taskwait
    return x + y;
}

int main() {
    int n = 10; // Change the value of n as needed
    int result;

#pragma omp parallel
    {
#pragma omp single
        {
            result = fib(n);
        }
    }

    printf("Fibonacci(%d) = %d\n", n, result);
    return 0;
}