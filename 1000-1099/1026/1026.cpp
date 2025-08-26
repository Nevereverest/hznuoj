#include <iostream>
#include <map>
int main() {
    std::map<std::string, int> stu;
    std::string name;
    int score, t;
    std::cin >> t;
    while (t--)
    {
        int n, m;
        std::cin >> n;
        while (n--) {
            std::cin >> name;
            std::cin >> score;
            std::pair<std::string, int> value(name, score);
            stu.insert(value);
        }
        std::cin >> m;
        while (m--) {
            std::cin >> name;
            std::map<std::string, int>::iterator iter = stu.find(name);
            if (iter != stu.end())
                std::cout << iter->second << std::endl;
            else
                std::cout << "error" << std::endl;
        }
    }
}

