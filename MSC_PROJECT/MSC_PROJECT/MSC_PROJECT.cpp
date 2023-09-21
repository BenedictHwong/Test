// MSC_PROJECT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <benchmark/benchmark.h>
#include <celero/Celero.h>

//// Function to be tested
//int calculateSum() {
//    int sum = 0;
//    for (int i = 1; i <= 100; ++i) {
//        sum += i;
//    }
//    return sum;
//}
//
//// Google Benchmark function
//static void BM_SimpleForLoop(benchmark::State& state) {
//    for (auto _ : state) {
//        int sum = calculateSum();
//        benchmark::DoNotOptimize(sum);
//    }
//}
//BENCHMARK(BM_SimpleForLoop);
//
////// Celero function
////BASELINE(SimpleForLoopCelero, Baseline, 0, 1000000)
////{
////    int sum = calculateSum();
////    celero::DoNotOptimizeAway(sum);
////}
//
//
//int main(int argc, char** argv)
//{
//    // Initialize and run Google Benchmark
//    benchmark::Initialize(&argc, argv);
//    benchmark::RunSpecifiedBenchmarks();
//
//    // Initialize and run Celero
//    //celero::Run(argc, argv);
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file




int calculateSum() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    return sum;
}

BASELINE(Celero_SimpleForLoop, Baseline, 10, 1000000)
{
    int sum = calculateSum();
    celero::DoNotOptimizeAway(sum);
}

int main(int argc, char** argv) {
    celero::Run(argc, argv);
}