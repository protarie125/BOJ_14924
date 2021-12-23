#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double s, t, d;
	cin >> s >> t >> d;

	auto h = d / (2 * s);
	auto m = h * t;

	cout << m;

	return 0;
}