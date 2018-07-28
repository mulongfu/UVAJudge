#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Point{
	public:
		double x, y;
	Point(double _x = 0, double _y = 0): x(_x), y(_y){};
};

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	double n, a;
	while(cin >> n >> a){
		if(n == 0 && a == 0)
			return 0;
		double count = 0;
		vector<Point> points;
		Point A(0,0), B(a,0), C(a,a), D(0,a);
		for(int i =0; i < n; i++){
			Point p;
			cin >> p.x >> p.y;
			points.push_back(p); 
		}
		for(int i = 0; i < points.size(); i++){
			if((points[i].x - A.x) * (points[i].x - A.x) + (points[i].y - A.y) * (points[i].y - A.y) <= a*a &&
			   (points[i].x - B.x) * (points[i].x - B.x) + (points[i].y - B.y) * (points[i].y - B.y) <= a*a &&
			   (points[i].x - C.x) * (points[i].x - C.x) + (points[i].y - C.y) * (points[i].y - C.y) <= a*a &&
			   (points[i].x - D.x) * (points[i].x - D.x) + (points[i].y - D.y) * (points[i].y - D.y) <= a*a){
			   	count++;
			   }
		}
		double result = (count / n) * a * a;
		cout << fixed << setprecision(5) << result << endl;
	}
	return 0;
}

