// //how to implement the runtime environment construct
//
// #include <cstdio>
// #include <omp.h>
//
// int main() {
//     int current_num_threads = 0;
//     omp_set_num_threads(5);
//     // create the openmp parallel region, containing the number of threads as defined to OMP_NUM_THREADS
// #pragma omp parallel
//     {
//     if (omp_get_thread_num() ==0) {
//         current_num_threads = omp_get_num_threads();
//         printf("we are %d threads, I am thread number %d.\n",
//             current_num_threads, omp_get_thread_num());
//     }
// }
//     // tell OpenMP to now use one more thread in parallel regions
//     omp_set_num_threads(omp_get_num_procs());
//     //create the OpenMP parallel region, whill will contains 8 threads
// #pragma omp parallel
//     {
//         if (omp_in_parallel()) {
//             //Each thread orints its identifier
//             printf("we are %d processes, I am thread number %d.\n",
//                 current_num_threads, omp_get_thread_num());
//         }
//     }
// return 0;
//
// }
