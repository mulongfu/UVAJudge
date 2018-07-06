#include <iostream>
using namespace std;

int main(){
    char input[500] = {'\0'};
    bool first = false;
    while(cin.getline(input, 500)){
    	char output[500] = {'\0'};
    	int output_index = 0;
    	for(int i = 0; input[i] != '\0'; i++){
    		if(input[i] == '"' && first == false){
    			first = true;    			
				output[output_index] = '`';
				output_index++;
				output[output_index] = '`';
				output_index++;
			}
			else if(input[i] == '"' && first){
				first = false;
				output[output_index] = '\'';
				output_index++;
				output[output_index] = '\'';
				output_index++;
			}
			else{
				output[output_index] = input[i];
				output_index++;
			}			
		}	
		cout << output << endl;
	}
	
	return 0;
}
