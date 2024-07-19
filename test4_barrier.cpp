// //how to implemenet synchronization in openMP using atomic, critical, barrier
// //barrier
// //Wait for all threads to complete the above work


// #include <stdio.h>
// #include <omp.h>
//
// static long num_steps = 10000;
// #define PAD 8 // Assume byte L1 cache line size
//
// int do_something1() {
//     // Dummy implementation
//     return 1;
// }
//
// int do_something2() {
//     // Dummy implementation
//     return 2;
// }
//
// int do_something3() {
//     // Dummy implementation
//     return 3;
// }
//
// int do_something4(int A, int B, int C) {
//     // Dummy implementation
//     return A + B + C;
// }
//
// int main() {
//     int C, D[2], E;
//
// #pragma omp parallel
//     {
//         int id = omp_get_thread_num();
//
//         if (id == 0) {
//             C = do_something1();
//         } else if (id == 1) {
//             D[0] = do_something2();
//         } else if (id == 2) {
//             E = do_something3();
//         }
//
//         // Wait for all threads to complete the above work
// #pragma omp barrier
//
//         // Ensure that the D[1] computation is done only after all threads have completed
// #pragma omp single
//         {
//             D[1] = do_something4(C, D[0], E);
//         }
//
//         // Optional: Print results from only one thread
// #pragma omp master
// {
//     printf("C: %d, D[0]: %d, E: %d, D[1]: %d\n", C, D[0], E, D[1]);
// }
//     } // End of the parallel region
//
//     return 0;
// }
