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
	// technique #1 single nearset point
	/*float arr[3][10][3], a, b, c;
	 float res = 1e9, t;
	 int resi;
	 for (int i = 0; i < 3; i++)
	 for (int k = 0; k < 10; k++)
	 for (int r = 0; r < 3; r++)
	 cin >> arr[i][k][r];
	 cin >> a >> b >> c;
	 for (int i = 0; i < 3; i++)
	 for (int k = 0; k < 10; k++) {
	 t = sqrt(
	 ((a - arr[i][k][0]) * (a - arr[i][k][0]))
	 + ((b - arr[i][k][1]) * (b - arr[i][k][1]))
	 + ((c - arr[i][k][2]) * (c - arr[i][k][2])));
	 if (t < res) {
	 res = t;
	 resi = i + 1;
	 }
	 }
	 cout << "class = " << resi;*/
	//----------------------------------------------------------------------------------
	// technique #2 five nearest point
	/*float arr[3][10][3], a, b, c;
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
	 cout << "class = " << maxi;*/
	//------------------------------------------------------------------------------------
	//technique #3 city
	/*float arr[3][10][3], a, b, c;
	 for (int i = 0; i < 3; i++)
	 for (int k = 0; k < 10; k++)
	 for (int r = 0; r < 3; r++)
	 cin >> arr[i][k][r];
	 cin >> a >> b >> c;
	 float res = 1e9, t;
	 int resi;
	 for (int i = 0; i < 3; i++)
	 for (int k = 0; k < 10; k++) {
	 t = abs((a - arr[i][k][0])) + abs((b - arr[i][k][1]))
	 + abs((c - arr[i][k][2]));
	 if (t < res) {
	 res = t;
	 resi = i + 1;
	 }
	 }
	 cout << "class = " << resi;*/
	//----------------------------------------------------------------------------------------
	// #4 feature scale
	// z=(x-ux)/qx;
	/*float arr[3][10][3], a, b, c;
	 for (int i = 0; i < 3; i++)
	 for (int k = 0; k < 10; k++)
	 for (int r = 0; r < 3; r++)
	 cin >> arr[i][k][r];
	 cin >> a >> b >> c;
	 float ux[3], qx[3];
	 for (int i = 0; i < 3; i++) {
	 float sum = 0;
	 for (int k = 0; k < 3; k++)
	 for (int r = 0; r < 10; r++)
	 sum += arr[k][r][i];
	 ux[i] = sum;
	 }
	 for (int i = 0; i < 3; i++) {
	 float sum = 0;
	 for (int k = 0; k < 3; k++)
	 for (int r = 0; r < 10; r++)
	 sum += ((ux[i] - (arr[k][r][i])) * (ux[i] - (arr[k][r][i])));
	 qx[i] = sum / 30;
	 }
	 for (int i = 0; i < 3; i++)
	 for (int k = 0; k < 10; k++)
	 for (int r = 0; r < 3; r++)
	 arr[i][k][r] = (arr[i][k][r] - ux[r]) / qx[r];
	 a = (a - ux[0]) / qx[0], b = (b - ux[1]) / qx[1], c = (c - ux[2]) / qx[2];*/
	//----------------------------------------------------------------------------------------

}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
