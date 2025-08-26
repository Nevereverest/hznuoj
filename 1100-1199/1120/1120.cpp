#include <iostream>
#include <stack>
int n, i, c, k;
bool cont;
std::stack<int> s;
int main() {
    while (true) {
        std::cin >> n;
        if (!n) break;
        while (true) {
            while (!s.empty()) s.pop();
            for (k = i = 0; i < n; i++) {
                std::cin >> c;
                if (!c) break;
                while (k < n && k != c) {
                    if (s.size() > 0 && s.top() == c) break;
                    s.push(++k);
                }
                if (s.top() == c) s.pop();
            }
            if (!c) break;
            (!s.size()) ? printf("Yes\n") : printf("No\n");
        }
        printf("\n");
    }
}
