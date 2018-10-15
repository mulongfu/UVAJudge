#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int in;
    cin >> in;
    cin.ignore();
    for (int i = 0; i < in; i++) {
        vector<pair<int, int>> max_el;
        int count[27] = {0};
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int j = 0; j < s.size(); j++) {
            if (isalpha(s[j]))
                count[s[j] - 'a']++;
        }
        int now_max = -1;

        // Find Maximum Value
        for (int k = 0; k < 27; k++) {
            if (count[k] >= now_max) {
                now_max = count[k];
            }
        }

        for (int k = 0; k < 27; k++) {
            if (count[k] == now_max)
                cout << (char)(k + 'a');
        }
        cout << endl;
    }

    return 0;
}
