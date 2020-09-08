#include <iostream>
using namespace std;

int main (){
	int n, x;
	cin >> n >> x;
	int l = 0, r = 0, s = 0;
	for (int i = 0; i < n; i++){
		int y;
		cin >> y;
		if (y < x)
			l++;
		if (y > x)
			r++;
		if (y == x)
			s++;
	}
	int ans;
	if (s == 0)
		ans = 1;
	else 
		ans = 0;
	while((l >= ((n+1+ans)/2))||(r > ((n+ans)/2)))
		ans++;
	cout << ans;
}
