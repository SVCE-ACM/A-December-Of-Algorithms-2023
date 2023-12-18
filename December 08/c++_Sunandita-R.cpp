#include <iostream>
#include <vector>

std::vector<std::vector<int>> find_path(int n) {
    if (n % 2 == 0 || n < 3 || n > 15) {
        throw std::invalid_argument("Input must be an odd integer between 3 and 15.");
    }

    std::vector<std::vector<int>> magic_square(n, std::vector<int>(n, 0));

    int i = 0, j = n / 2;
    int num = n * n;

    while (num >= 1) {
        magic_square[i][j] = num;
        num--;

        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;

        if (magic_square[newi][newj] == 0) {
            i = newi;
            j = newj;
        } else {
            i++;
        }
    }

    // Transpose the magic square
    std::vector<std::vector<int>> transposed_square(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transposed_square[j][i] = magic_square[i][j];
        }
    }

    return transposed_square;
}

int main() {
    int n;
    std::cin >> n;

    try {
        std::vector<std::vector<int>> result = find_path(n);

        for (const auto& row : result) {
            for (int num : row) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
