#include <iostream> 
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int main() { 
    int n, counter = 1;
    while(cin >> n){
    	vector<int> heights;
    	int sum = 0, average = 0, abs_total = 0;
    	if(n == 0)
    		return 0;
    	else{
    		for(int i = 0; i < n; i++){
    			int temp;
    			cin >> temp;
    			heights.push_back(temp);
			}
			average = accumulate(heights.begin(), heights.end(), sum) / heights.size();
			for(vector<int>::iterator i = heights.begin(); i != heights.end(); i++){
				abs_total += abs(*i - average);
			}			
			cout << "Set #" << counter << endl;
			cout << "The minimum number of moves is " << abs_total / 2 << "." << endl << endl;
			counter++;
		}
	}
	return 0;
}

