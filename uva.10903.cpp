#include <bits/stdc++.h>
using namespace std;

class Player {
public:
	int id;
	double win, lose;
	Player(int _id = 1, double _win = 0, double _lose = 0) : id(_id), win(_win), lose(_lose) {};
};

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	bool blank = false;
	int n, k;
	while (cin >> n) {
		if (n == 0) {
			return 0;
		}
		else {	
			vector<Player> playerid_win_lose;
			for (int i = 0; i < n; i++) {
				Player p(i + 1, 0, 0);
				playerid_win_lose.push_back(p);
			}			
			cin >> k;
			if (blank)
				cout << endl;;
			blank = true;
			for (int i = 0; i < k * n * (n - 1) / 2; i++) {
				int p1, p2;
				string m1, m2;
				cin >> p1 >> m1 >> p2 >> m2;
				if (m1 == "rock" && m2 == "paper") {	//p2贏
					playerid_win_lose[--p2].win++;
					playerid_win_lose[--p1].lose++;
				}
				else if (m1 == "rock" && m2 == "scissors") {	//p1贏
					playerid_win_lose[--p1].win++;
					playerid_win_lose[--p2].lose++;
				}
				else if (m1 == "paper" && m2 == "scissors") {	//p2贏
					playerid_win_lose[--p2].win++;
					playerid_win_lose[--p1].lose++;
				}
				else if (m1 == "paper" && m2 == "rock") {	//p1贏
					playerid_win_lose[--p1].win++;
					playerid_win_lose[--p2].lose++;
				}
				else if (m1 == "scissors" && m2 == "rock") {	//p2贏
					playerid_win_lose[--p2].win++;
					playerid_win_lose[--p1].lose++;
				}
				else if (m1 == "scissors" && m2 == "paper") {	//p1贏
					playerid_win_lose[--p1].win++;
					playerid_win_lose[--p2].lose++;
				}
				else {
					;
				}
			}
			//cout << playerid_win_lose[0].win << playerid_win_lose[0].lose << playerid_win_lose[1].win << playerid_win_lose[1].lose;
			for (int i = 0; i < n; i++) {
				if (isnan(playerid_win_lose[i].win / (playerid_win_lose[i].win + playerid_win_lose[i].lose)) || isnan(playerid_win_lose[i].win / (playerid_win_lose[i].win + playerid_win_lose[i].lose)))
					cout  << '-' << endl;				
				
				else {
					printf("%.3lf\n", (double)(playerid_win_lose[i].win / (double)(playerid_win_lose[i].win + playerid_win_lose[i].lose)));
					//cout << fixed << setprecision(3) << round_s((double)(playerid_win_lose[i].win / (playerid_win_lose[i].win + playerid_win_lose[i].lose))) << endl;
				}
			}
		}		
	}
	return 0;
}
