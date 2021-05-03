#include<vector>
#include <time.h>
#include<stdio.h>

void addaddadd();

int main()
{
    addaddadd();
    return 0;
}

void addaddadd() {
    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;
    std::vector<int> d;

    for(int i=0; i<100; i++) {
        a.push_back(i);
        b.push_back(i);
        c.push_back(i);
        d.push_back(i);
    }

    clock_t start_time = clock();
    for (int i = 0; i < 1000000; i++)
    {
        for (int i = 0; i < 100; i++)
        {
            d[i] = a[i] + b[i] + c[i];
        }
    }

    double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
    printf("Done in %f seconds\n", elapsed_time);
    printf("Done in %f ms\n", elapsed_time * 1000000);
} 
