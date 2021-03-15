#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N],p[N],ans[N];
int main() {
	srand(19260817);
	int n;scanf ("%d",&n);
	for (int i=1;i<=n;i++) scanf ("%d",&a[i]);
	for (int i=1;i<=n;i++) p[i]=i;
	int T=100;
	while (T--){
		random_shuffle(p+1,p+n+1);
		int x=0,y=0,tmp;
		for (int i=1;i<=n;i++){
			if ((x!=1)&&((tmp=__gcd(x,a[p[i]]))!=x)) x=tmp,ans[p[i]]=1;
			else y=__gcd(y,a[p[i]]),ans[p[i]]=2;
		}
		if (x==1&&y==1) {
			cout("YES");
			for (int i=1;i<=n;i++) printf ("%d ",ans[i]);
			return 0;
		}
	}
	puts("NO");
	return 0;
}
