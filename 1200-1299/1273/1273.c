#include <iostream>
#include <map>
std::map<std::string, int> s;
int m, n;
int main(){
    std::string tmp;
    int num;
    std::cin >> m >> n;
    for (int i = 0; i < m; i++) {
        std::cin >> tmp >> num;
        s[tmp] = num;
    }
    for (int i = 0; i < n; i++) {
        int ans = 0;
        while (std::cin >> tmp, tmp != ".")
            if (s.count(tmp))
                ans += s[tmp];
        printf("%d\n", ans);
    }
}