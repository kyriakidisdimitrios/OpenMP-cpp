//#include <iostream>
#include <bits/stdc++.h>
#include <omp.h>
using namespace std;
int main() {
    int thread_counter = 0;
#pragma omp parallel
    cout<<"hello world"<<thread_counter<<"\n";
    return 1;
    //g++ -fopenmp main.cpp
}