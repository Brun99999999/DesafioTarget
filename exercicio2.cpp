#include <iostream>
#include <vector>
#include <stdexcept>

class Fibonacci {
public:
    Fibonacci(int max_size) : max_size_(max_size) {
        sequence_.reserve(max_size_);
        sequence_.push_back(0);
        sequence_.push_back(1);
        for (int i = 2; i < max_size_; ++i) {
            sequence_.push_back(sequence_[i - 1] + sequence_[i - 2]);
        }
    }

    bool Contains(int num) const {
        for (int i = 0; i < sequence_.size(); ++i) {
            if (sequence_[i] == num) {
                return true;
            }
        }
        return false;
    }

private:
    std::vector<int> sequence_;
    int max_size_;
};

int main() {
    try {
        // TESTANDO O CÓDIGO COM O VALOR 7
        int n = 7;

        Fibonacci fibonacci_sequence(n + 1);

        bool resposta = fibonacci_sequence.Contains(n);
        if (!resposta)
            std::cout << "O Número 7 NÃO pertence a sequência de fibonacci!\n";
        else
            std::cout << "O Número 7 PERTENCE a sequência de fibonacci!\n";

        // TESTANDO CÓDIGO COM O VALOR 21
        n = 21;

        Fibonacci fibonacci_sequence2(n + 1);

        resposta = fibonacci_sequence2.Contains(n);
        if (!resposta)
            std::cout << "O Número 21 NÃO pertence a sequência de fibonacci!\n";
        else
            std::cout << "O Número 21 PERTENCE a sequência de fibonacci!\n";
    }
    catch (const std::exception& ex) {
        std::cerr << "Erro: " << ex.what() << std::endl;
        return 1;
    }

    return 0;
}
