#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    int n, x;
    std::cin >> n >> x;
    std::vector<std::pair<int, int>> snacks(n);
    for (int i = 0; i < n; i++) std::cin >> snacks[i].first;
    for (int i = 0; i < n; i++) std::cin >> snacks[i].second;
    sort(snacks.begin(), snacks.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
        while (snacks[i].second > 0 && x >= snacks[i].first) {
            x -= snacks[i].first;
            snacks[i].second--;
            count++;
        }
    }
    std::cout << count;
}