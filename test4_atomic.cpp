// // //how to implemenet synchronization in openMP using atomic, critical, barrier
// // //atomic
// // //Same as barrier but for changes on variables ++, --, +=, -=, *=, /=, =
//
// #include <omp.h>
// #include <stdio.h>
//
// int X = 0;  // Initialize X
//
// // Function prototypes
// int DOIT();
// int test(int A);
//
// int main() {
// #pragma omp parallel
//     {
//         double tmp, B;
//         B = DOIT();
//         tmp = test(B);
//
// #pragma omp atomic
//         X += tmp;
//     }
//
//     printf("Final value of X: %d\n", X);
//     return 0;
// }
//
// // Function definitions
// int DOIT() {
//     // Dummy implementation
//     return 42;
// }
//
// int test(int A) {
//     // Dummy implementation
//     return A * 2;
// }
