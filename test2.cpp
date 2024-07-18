// This program demonstrates the use of OpenMP to run parallel code.
// The program sets the number of threads to 3 and prints "hello" along with the thread number for each thread.

// #include <stdio.h>
// #include <omp.h>
//
// #define NUM_THREAD 3
// int thread_NUM = 0;
//
// int main() {
//     omp_set_num_threads(NUM_THREAD);
//     //omp_set_num_threads(3);
//     #pragma omp parallel
//     {
//         int omp_THREADS = omp_get_num_threads();
//         int uniqueID = omp_get_thread_num();
//         if (uniqueID==0) {
//             thread_NUM = omp_THREADS;
//         }
//     printf("hello(%d)", uniqueID);
//     }
//
// }
