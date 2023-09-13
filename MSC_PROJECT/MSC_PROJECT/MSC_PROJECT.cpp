// MSC_PROJECT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <benchmark/benchmark.h>

static void BM_SimpleForLoop(benchmark::State& state) {
    // This loop will run multiple times to get a more accurate measurement
    for (auto _ : state) {
        int sum = 0;
        for (int i = 1; i <= 100; ++i) {
            sum += i;
        }
        // Make sure the variable is not optimized away by compiler
        benchmark::DoNotOptimize(sum);
    }
}
// Register the function as a benchmark
BENCHMARK(BM_SimpleForLoop);


int main(int argc, char** argv)
{
    // Initialize the benchmark library.
    /*benchmark::Initialize(&argc, argv);
    benchmark::RunSpecifiedBenchmarks();*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
