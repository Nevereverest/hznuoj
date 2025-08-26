#include <iostream>
#include <map>
#include <sstream>
std::map<std::string, int>m;
int main() {
    std::string s, b;
    int n, flag = 0;
    while (std::cin >> n) {
        if (flag)
            puts("");
        flag++;
        m.clear();
        while (std::getline(std::cin, s) && s != "EndOfText") {
            for (int i = 0; i < s.length(); i++)
                if (isalpha(s[i])) s[i] = tolower(s[i]);
                else s[i] = ' ';
            std::stringstream ss(s);
            while (ss >> b) m[b]++;
        }
        int t = 0;
        std::map<std::string, int>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
            if (it->second == n) {
                t = 1;
                std::cout << it->first << std::endl;
            }
        if (!t) std::cout << "There is no such word.\n";
    }
}
