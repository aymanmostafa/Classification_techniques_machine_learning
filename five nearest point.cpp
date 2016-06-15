//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
void fastInOut();

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
	// technique #2 five nearest point
	float arr[3][10][3], a, b, c;
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 10; k++)
			for (int r = 0; r < 3; r++)
				cin >> arr[i][k][r];
	cin >> a >> b >> c;
	float t;
	vector<pair<float, int>> v;
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 10; k++) {
			t = sqrt(
					((a - arr[i][k][0]) * (a - arr[i][k][0]))
							+ ((b - arr[i][k][1]) * (b - arr[i][k][1]))
							+ ((c - arr[i][k][2]) * (c - arr[i][k][2])));
			v.push_back( { t, i });
		}
	sort(all(v));
	int y[3] = { 0 }, max = -1e9, maxi;
	for (int i = 0; i < 5; i++)
		y[v[i].second]++;
	for (int i = 0; i < 3; i++)
		if (y[i] > max) {
			max = y[i];
			maxi = i + 1;
		}
	cout << "class = " << maxi;
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
