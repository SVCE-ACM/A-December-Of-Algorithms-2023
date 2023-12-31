#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> Box1 = {"Emerald", "Ruby", "Bronze", "Silver"};
    std::vector<std::string> Box2 = {"Gold", "Diamond", "Ruby", "Copper"};
    std::vector<std::string> Box3 = {"Ruby", "Platinum", "Bronze", "Silver"};

    // Check if Box2 contains "Gold"
    if (std::find(Box2.begin(), Box2.end(), "Ruby") != Box2.end()) {
        std::cout << "Box2 contains Gold" << std::endl;
    } else {
        std::cout << "Box2 does not contain Gold" << std::endl;
    }

    return 0;
}
