// //construct types
// #include <cstdio>
// #include <omp.h>
// int main() {
//     int tmp=1;
// //#pragma omp parallel for private(tmp)
//     //default
// //#pragma omp parallel for firstprivate(tmp)
//     //value first assigned
// #pragma omp parallel for lastprivate(tmp)
//     //value of the last iterator
//     for (int j=0;j<1000;j++)
//         tmp +=j;
//     printf("%d\n",tmp);
//     return 0;
// }