// //tasks
//
// #include <cstdio>
// #include <omp.h>
//
// void foo() {
//     printf("foo is executed by thread %d\n", omp_get_thread_num());
// }
//
// void bar() {
//     printf("bar is executed by thread %d\n", omp_get_thread_num());
// }
//
// int main() {
// #pragma omp parallel
//     {
// // #pragma omp task
// //         {
//             foo(); //Multiple foo tasks created here - one for each thread
// #pragma omp barrier
//             {
//             //all foo tasks guaranted to be completed here
//
// #pragma omp single
//                 {
// #pragma omp task
//                     {
//                         bar(); //one bar task created here
//                     }//bar task guaranteed to be completed here
//                 }
//             }
//         }
//     //}
//     return 0;
// }
