#include <iostream>
#include <map>
int main() {
    std::map<int, int> mp;
    int t;
    std::cin >> t;
    while (t--) {
        int c;
        std::cin >> c;
        mp.clear();
        for (int i = 0; i < c; i++) {
            int n;
            int m;
            std::cin >> n >> m;
            mp[m] += n;
        }
        std::map <int, int> ::reverse_iterator it;
        int flag = 0;
        for (it = mp.rbegin(); it != mp.rend(); ++it) {
            if (mp.size() == 1 && (*it).second == 0)
                std::cout << 0;
            if ((*it).second == 0)
                continue;
            if ((*it).second > 0 && flag > 0)
                std::cout << "+";
            if ((*it).second != 1 && (*it).second != -1)
                std::cout << (*it).second;
            if ((*it).second == -1)
                std::cout << "-";
            if ((*it).first != 0 && (*it).first != 1)
                std::cout << "x^" << (*it).first;
            if ((*it).first == 1)
                std::cout << "x";
            flag = 1;
        }
        std::cout << std::endl;
    }
}