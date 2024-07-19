// //how to implemenet synchronization in openMP using atomic, critical, barrier
//
// #include <stdio.h>
//  #include <omp.h>
//
// // static long num_steps = 10000;
// // int main() {
// //     int i, x, total, constant, sum = 0;
// //     constant = 12;
// //     for(i=0;i<=num_steps;i++) {
// //         x = i + constant;
// //         sum += x;
// //     }
// //     total = sum * constant;
// // }
// static long num_steps = 10000;
// #define PAD 8 //assume byte L1 cache line size
//
// int main() {
//     //int i, x, total, nthreads,  constant, sum[4] = 0;
//     int i, x, total = 0, nthreads, constant = 12;
//     int sum[4][PAD] = {0}; // Initialize sum array with padding to avoid false sharing
//
//     omp_set_num_threads(4);
//
// #pragma omp parallel
//     {
//         int i, uniqueID, x, nthrds;
//
//         uniqueID = omp_get_thread_num();
//         nthrds = omp_get_num_threads();
//
//         if (uniqueID == 0)
//             nthreads = nthrds;
//
//         //for (i=uniqueID, sum[uniqueID]=0.0;i<num_steps;i=i+nthrds) {
//         for (i = uniqueID, sum[uniqueID][0] = 0; i < num_steps; i = i + nthrds) {
//             x = i + constant;
//             //sum[uniqueID] += + x;
//             sum[uniqueID][0] += x;
//         }
//     }
//
//     for (i = 0; i < nthreads; i++)
//         //total += sum[i] * constant;
//             total += sum[i][0] * constant;
//
//     printf("Total: %d\n", total);
//     return 0;
// }
//
//
