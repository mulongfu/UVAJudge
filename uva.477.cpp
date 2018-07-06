#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Point{
	public:
		int pid;
		double x, y;
		Point(double _x = 0, double _y = 0, int _pid = 1): x(_x), y(_y), pid(_pid){};
};

class Rect{
	public:
		int id;
		Point left_up_corner, right_down_corner;
		Rect(double _lx, double _ly, double _rx, double _ry, int _id);		
};

class Circle{
	public:
		int cid;
		double radius;
		Point center;
		Circle(double _cx, double _cy, double _radius, int _id);		
};

Rect::Rect(double _lx, double _ly, double _rx, double _ry, int _id = 1): left_up_corner(_lx, _ly), right_down_corner(_rx, _ry), id(_id){};

Circle::Circle(double _cx, double _cy, double _radius, int _id = 1): center(_cx, _cy), radius(_radius), cid(_id) {};

vector<Rect> RSet;

vector<Circle> CSet;

int main(){
   	char first;
   	int Rid = 1, Pid = 1;
   	while(cin >> first){
   		if(first == 'r'){
   			Point left, right;
   			cin >> left.x >> left.y >> right.x >> right.y;
   			RSet.push_back(Rect(left.x, left.y, right.x, right.y, Rid));
   			Rid++;
		}
		else if(first == 'c'){
			double radius_temp; 
			Point center_temp;
			cin >> center_temp.x >> center_temp.y >> radius_temp;
			CSet.push_back(Circle(center_temp.x, center_temp.y, radius_temp, Rid));
			Rid++;
		}
		else if(first == '*'){
			Point temp;
			while(cin >> temp.x >> temp.y){
				bool in_flag = false, in_c_flag = false;
				if(temp.x == 9999.9 && temp.y == 9999.9){
					return 0;
				}	
				else{
					for(vector<Rect>::iterator i = RSet.begin(); i != RSet.end(); i++){
						if((temp.x > (*i).left_up_corner.x)    && 
						   (temp.x < (*i).right_down_corner.x) &&
						   (temp.y < (*i).left_up_corner.y)    &&
						   (temp.y > (*i).right_down_corner.y)){
						   cout << "Point " << Pid << " is contained in figure " << (*i).id << endl;
						   in_flag = true;
						}						
					}
					
					for(vector<Circle>::iterator i = CSet.begin(); i != CSet.end(); i++){
						if(sqrt(pow((abs(temp.x - (*i).center.x) ),2) + pow((abs(temp.y - (*i).center.y) ),2)) < (*i).radius){
						   cout << "Point " << Pid << " is contained in figure " << (*i).cid << endl;
						   in_c_flag = true;
						}						
					}
					if(!in_flag && !in_c_flag)
						cout << "Point " << Pid << " is not contained in any figure" << endl;
					//PSet.push_back(Point(temp.x, temp.y, Pid));
					//Pid++;
				}
				Pid++;
			}			
		}
		/*for(vector<Rect>::iterator i = RSet.begin(); i != RSet.end(); i++)
			cout << (*i).id;*/
		/*for(vector<Point>::iterator i = PSet.begin(); i != PSet.end(); i++)
			cout << (*i).pid;*/
	}
}


