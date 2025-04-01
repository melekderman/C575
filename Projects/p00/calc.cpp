#include <iostream>
#include <iomanip>

int main() {
    double perf_1thr = 438.27;
    double perf_4thr = 1520.98;

    double S = perf_4thr / perf_1thr;
    double Fp = (4.0 / 3.0) * (1.0 - (1.0 / S));

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Speedup (S): " << S << std::endl;
    std::cout << "Parallel fraction (Fp): " << Fp << std::endl;

    return 0;
}
