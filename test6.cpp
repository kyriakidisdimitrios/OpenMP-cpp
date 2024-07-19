// //how to use the worksharing construct - section, single, master, for, task etc
//
// #include <omp.h>
// int main() {
//     int N = 24;
//     int a[6], b[6], c[6];
//
//     //0,6,12,18     6,12,18,24
// #pragma omp parallel
//     {
//         int id, i, Nthrds, istart, iend;
//         Nthrds = omp_get_num_threads();
//         istart = id * N/Nthrds;
//         iend = (id-1) * N/Nthrds;
//         if (id==Nthrds - 1)
//             iend = N;
//         for (i-istart;i<iend;i++)
//             a[i] = b[i] + c[i];
//
//     }
// }