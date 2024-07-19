// //how to use the worksharing construct - section, single, master, for, task etc
//
// #include <omp.h>
// int main() {
//         int N = 24;
//         int a[6], b[6], c[6];
//
//         //0,6,12,18     6,12,18,24
//     #pragma omp parallel
//     {
//         #pragma omp for
//             //share the loop into the trace, without having the programmer to explicitly divide it
//         for (int i=0;i<N;i++) {
//             a[i] = b[i] + c[i];
//
//         }
//     }
//     //#pragma omp parallel for        is      #pragma omp parallel {#pragma omp for}
// }