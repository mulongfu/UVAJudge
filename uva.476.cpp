#include <iostream>
#include <vector>
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

Rect::Rect(double _lx, double _ly, double _rx, double _ry, int _id = 1): left_up_corner(_lx, _ly), right_down_corner(_rx, _ry), id(_id){};

vector<Rect> RSet;
vector<Point> PSet;

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
		else if(first == '*'){
			Point temp;
			while(cin >> temp.x >> temp.y){
				bool in_flag = false;
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
					if(!in_flag)
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


