// //how to use the worksharing construct - section, single, master, for, task etc
// //master construct
// #include <omp.h>
// #include <cstdio>
//
// // Dummy implementations for the functions
// void do_all_threads() {
//     printf("All threads are doing work.\n");
// }
//
// void do_master_thread() {
//     printf("Master thread is doing its work.\n");
// }
//
// void wait_for_barrier() {
//     printf("Waiting at the barrier.\n");
// }
//
// int main() {
//     // Create a parallel region
// #pragma omp parallel
//     {
//         do_all_threads();
//
// #pragma omp master
//         {
//             do_master_thread();
//         }
//
// #pragma omp barrier
//
//         wait_for_barrier();
//     }
//
//     return 0;
// }
