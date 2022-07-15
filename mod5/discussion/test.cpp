#include <iostream>
#include <vector>
#include <thread>
#include <numeric>

void AddRealBigNum(uint64_t &sum, uint64_t start, uint64_t end)
{
    sum = 0;
    for (uint64_t i = start; i < end; i++)
    {
        sum += i;
    }
}

int main()
{
    int number_of_elements = 1000 * 1000 * 1000; // how many things to count
    int bucket_size = number_of_elements / 2;    // how many things go in each thread

    uint64_t sum, start = 0;

    std::vector<uint64_t> partial_sums(2);

    std::thread t1(AddRealBigNum, std::ref(partial_sums[0]), 0, bucket_size);

    std::thread t2(AddRealBigNum, std::ref(partial_sums[1]), bucket_size, 2 * bucket_size);

    t1.join(); // without these, it won't work
    t2.join();

    uint64_t total =
     std::accumulate(partial_sums.begin(), partial_sums.end(), uint64_t(0));

     printf("\n%ld\n", total);
}