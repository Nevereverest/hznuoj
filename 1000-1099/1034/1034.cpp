#include <algorithm>
#include <iostream>
struct student {
    std::string name;
    int class1;
    int class2;
} stu[10001];
bool cmp(const student s1, const student s2) {
    if (s1.class2 != s2.class2) return s1.class2 > s2.class2;
    if (s1.class1 != s2.class1) return s1.class1 > s2.class1;
    if (s1.name != s2.name) return s1.name < s2.name;
}
int main() {
    int n, t;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> stu[i].name >> stu[i].class1 >> stu[i].class2;
        }
        std::sort(stu, stu + n, cmp);
        for (int i = 0; i < n; i++) {
            std::cout << stu[i].name << " " << stu[i].class1 << " " << stu[i].class2 << std::endl;
        }
        std::cout << std::endl;
    }
}