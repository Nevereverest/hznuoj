#include <iostream>
int main() {
    std::string s;
    while(std::cin >> s && s != "END") {
        if(s == "0") std::cout << "2" << std::endl;
        else if(s == "1") std::cout << "1" << std::endl;
        else {
            int len = s.size();
            s = std::to_string(len);
            int cnt = 2;
            while(len != 1) {
                len = s.size();
                s = std::to_string(len);
                cnt++;
            }
            std::cout << cnt << std::endl;
        }
    }
}
