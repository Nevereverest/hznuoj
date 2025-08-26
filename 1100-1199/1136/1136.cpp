#include <algorithm>
#include <iostream>
const int N = 1e7;
int w[15],v[15],dp[N];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int w1,w2,y,n;
		scanf("%d%d%d",&w1,&y,&n);
		for (int i = 1; i <= n; i++){
			scanf("%d%d",&w[i],&v[i]);
			w[i] = w[i] / 1000;
		}
		for (int i = 0; i < y; i++){
			w2 = w1 / 1000;
			std::fill(dp, dp + w2+1, 0);
			for (int j = 1; j <= n; j++)
				for (int k = w[j]; k <= w2; k++)
					dp[k] = std::max(dp[k], dp[k - w[j]] + v[j]);
			w1 += dp[w2];   
		}
		printf("%d\n",w1);
	}
}
