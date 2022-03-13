#include "test.hpp"

int main() {
    const int N = 1e3;
    std::cout << "test desc" << std::endl;
    std::cout << "N = " << N << std::endl;
    std::vector<int> V;
    V.reserve(N);
    for (int i = 0; i < N; i++) {
        V.push_back(N - i);
    }
    test(V);
    return 0;
}