#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {2, 4, 5, 2, 6, 7, 2, 8, 2};
    int size = array.size();

    int numCount;
    std::cout << "Enter the number of values you want to find frequencies for: ";
    std::cin >> numCount;

    std::vector<int> numbersToFind(numCount);
    std::cout << "Enter the values you want to find frequencies for, separated by spaces: ";
    for (int i = 0; i < numCount; ++i) {
        std::cin >> numbersToFind[i];
    }

    for (int i = 0; i < numCount; ++i) {
        int frequency = 0;
        int num = numbersToFind[i];

        for (int j = 0; j < size; ++j) {
            if (array[j] == num) {
                frequency++;
            }
        }

        std::cout << "The frequency of " << num << " is: " << frequency << std::endl;
    }

    return 0;
}
