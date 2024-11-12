#include <stdio.h>
#include <omp.h>

int main() {
    const int NUM_THREADS = 3;
    omp_set_num_threads(NUM_THREADS);
    #pragma omp parallel
    {
        int thread_ID = omp_get_thread_num();
        printf(" hello world %d\n", thread_ID);
    }
}
