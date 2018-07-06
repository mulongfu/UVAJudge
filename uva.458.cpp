#include <iostream> 

using namespace std;

int main() { 
    int bias = 7;
    char input[2000];
    while(cin.getline(input, 2000)){
    	for(int i = 0; input[i] != '\0'; i++){
    		cout << char(input[i] - bias);
		}
		cout << endl;
	}
	return 0;
}
