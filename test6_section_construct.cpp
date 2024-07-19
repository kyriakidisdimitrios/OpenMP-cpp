// //how to use the worksharing construct - section, single, master, for, task etc
// //section construct
// #include <omp.h>
// #include <omp.h>
// #include <cstdio>
//
// // Placeholder functions
// void x_calculation() {
//     printf("x_calculation executed by thread %d\n", omp_get_thread_num());
// }
//
// void y_calculation() {
//     printf("y_calculation executed by thread %d\n", omp_get_thread_num());
// }
//
// void z_calculation() {
//     printf("z_calculation executed by thread %d\n", omp_get_thread_num());
// }
//
// int main() {
//     // Start parallel region
// #pragma omp parallel
//     {
//         // Define sections
// #pragma omp sections
//         {
//             // Each section is executed by a different thread
// #pragma omp section
//             x_calculation();
//
// #pragma omp section
//             y_calculation();
//
// #pragma omp section
//             z_calculation();
//         }
//     }
//     return 0;
// }
