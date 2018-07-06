#include <iostream>
#include <vector>
using namespace std;

class point {
public:
	int x, y;
	point(int _x = 0, int _y = 0) :x(_x), y(_y) {};
};

int main() {
	int k;
	while (cin >> k) {
		if (k == 0)
			return 0;
		else {
			vector<point> points;
			point divi_point;
			cin >> divi_point.x >> divi_point.y;
			for (int i = 0; i < k; i++) {
				int x, y;
				cin >> x >> y;
				points.push_back(point(x, y));
			}
			for (int i = 0; i < points.size(); i++) {
				if (points[i].x == divi_point.x || points[i].y == divi_point.y) {
					cout << "divisa" << endl;
				}
				else if (points[i].x > divi_point.x && points[i].y > divi_point.y)
					cout << "NE" << endl;
				else if (points[i].x > divi_point.x && points[i].y < divi_point.y)
					cout << "SE" << endl;
				else if (points[i].x < divi_point.x && points[i].y < divi_point.y)
					cout << "SO" << endl;
				else
					cout << "NO" << endl;
			}
		}
	}
}
