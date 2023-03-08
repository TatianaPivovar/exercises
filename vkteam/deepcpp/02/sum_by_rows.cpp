
#include <chrono>
#include <iostream>

class Timer {
    using clock_t = std::chrono::high_resolution_clock;
    using microseconds = std::chrono::microseconds;
public:
    Timer(): start_(clock_t::now()) {
    }
    ~Timer() {
        const auto finish = clock_t::now();
        const auto us = std::chrono::duration_cast<microseconds>(finish - start_).count();
        std::cout << us << " us" << std::endl;
    }
private:
    const clock_t::time_point start_;
};

int m[4096][4096] = {};
int* j = (int*) m;
using matrix = int(*)[4096];
matrix k = (matrix) j;

int main()
{
    Timer t;
    
    for (int i = 0; i < 4096; ++i)
        for (int j = 0; j < 4096; ++j)
            m[i][j] = (i+1)*(j+1);
    int sum = 0;
    for (int i = 0; i < 4096; ++i)
        for (int j = 0; j < 4096; ++j)
            sum += m[i][j];

    return 0;
}
