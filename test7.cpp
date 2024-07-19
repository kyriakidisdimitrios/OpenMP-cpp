// //data environment variablke
// #include <omp.h>
//
// int A[100]; /*(Global) SHARED)*/
// int main(){
//     int ii, jj, N; /*PRIVATE*/
//     int B[100]; /*SHARED*/
// #pragma omp parallel private(jj)
//     {
//         int kk =1; /*PRIVATE*/
// #pragma omp for
//         for (ii=0;ii<N;ii++)
//             for (jj=0;jj<N;jj++)
//                 A[ii]=B[jj];
//     }
// return 0;
// }
//
