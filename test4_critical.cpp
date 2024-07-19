// //how to implemenet synchronization in openMP using atomic, critical, barrier
// //critical
// //for not having sharing variables. only one can perform at any given time
// #include <stdio.h>
//  #include <omp.h>
//
// static long num_steps = 10000;
// #define PAD 8 //assume byte L1 cache line size
//
// int main() {
//     int i, x, total = 0, nthreads, constant = 12, sum;
//     omp_set_num_threads(4);
//
// #pragma omp parallel
//     {
//         int i, uniqueID, x, nthrds, sum; //sum is now private in the parallel region andf no longer shared
//
//         uniqueID = omp_get_thread_num();
//         nthrds = omp_get_num_threads();
//
//         if (uniqueID == 0)
//             nthreads = nthrds;
//         for (i = uniqueID; i < num_steps; i = i + nthrds) {
//             x = i + constant;
//             sum += + x;
//         }
//     }
// #pragma omp critical
//     //only 1 processor can run
//     total += sum * constant;
//
//     printf("Total: %d\n", total);
//     return 0;
// }
//
//
