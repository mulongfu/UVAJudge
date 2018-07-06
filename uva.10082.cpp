#include <iostream>
#include <map>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	map<char, char> list;
	list['W'] = 'Q', list['S'] = 'A', list['X'] = 'Z', list['D'] = 'S',	list['E'] = 'W';
	list['F'] = 'D', list['C'] = 'X', list['R'] = 'E', list['G'] = 'F',	list['V'] = 'C';
	list['T'] = 'R', list['H'] = 'G', list['B'] = 'V', list['Y'] = 'T',	list['J'] = 'H';
	list['N'] = 'B', list['U'] = 'Y', list['K'] = 'J', list['M'] = 'N',	list['O'] = 'I';
	list['L'] = 'K', list['P'] = 'O', list[';'] = 'L', list[','] = 'M',	list['['] = 'P';
	list['\''] = ';', list['.'] = ',', list['\\'] = ']', list['/'] = '.', list['1'] = '`';
	list['2'] = '1', list['3'] = '2', list['4'] = '3', list['5'] = '4',	list['6'] = '5';
	list['7'] = '6', list['8'] = '7', list['9'] = '8', list['0'] = '9',	list['-'] = '0';
	list['='] = '-', list['I'] = 'U', list[']'] = '[';
	char c;
	while((c = getchar())!= EOF){
		if(c == 'Q')
			cout << 'Q';
		else if(c == 'A')
			cout << 'A';
		else if(c == 'Z')
			cout << 'Z';
		else if(c == '`')
			cout << '`';
		else if(c == ' ')
			cout << ' ';
		else if(c == '\n')
			cout << endl;
		else{
		map<char, char>::iterator it = list.find(c);
		cout << it -> second ;
		}
		
	} 
	return 0;
}
