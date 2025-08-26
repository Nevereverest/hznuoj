#include <algorithm>
#include <iostream>
struct s {
	int id, iq, face, sum, flag;
}ss[100000];
bool cmp(const s a, const s b) {
	if (a.flag != b.flag)
		return a.flag > b.flag;
	else if (a.sum != b.sum)
		return a.sum > b.sum;
	else if (a.iq != b.iq)
		return a.iq > b.iq;
	else return a.id < b.id;
}
int main() {
	int cnt, n, l, h;
	std::cin >> n >> l >> h;
	cnt = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> ss[i].id >> ss[i].iq >> ss[i].face;
		ss[i].sum = ss[i].face + ss[i].iq;
		if (ss[i].face >= h && ss[i].iq >= h)ss[i].flag = 4;
		else if (ss[i].face >= l && ss[i].face < h && ss[i].iq >= h)ss[i].flag = 3;
		else if (ss[i].face >= l && ss[i].face < h && ss[i].iq < h && ss[i].iq >= l && ss[i].iq >= ss[i].face)ss[i].flag = 2;
		else if (ss[i].face < l || ss[i].iq < l)ss[i].flag = 0;
		else ss[i].flag = 1;
		if (ss[i].flag != 0)cnt++;
	}
	std::sort(ss, ss + n, cmp);
	std::cout << cnt << std::endl;
	for (int i = 0; i < cnt; i++) {
		std::cout << ss[i].id << " " << ss[i].iq << " " << ss[i].face << std::endl;
	}
}
