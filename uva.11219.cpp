#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int in;
    cin >> in;
    int now_n = 1;
    for (int i = 0; i < in; i++) {
        int nd, nm, ny;
        int bd, bm, by;
        scanf("%d/%d/%d", &nd, &nm, &ny);
        scanf("%d/%d/%d", &bd, &bm, &by);
        int k = ny - by;
        if (nm < bm)
            k--;
        else if (nm == bm) {
            if (nd < bd)
                k--;
        }

        if (k < 0) {
            cout << "Case #" << now_n << ": Invalid birth date" << endl;
            now_n++;
        } else if (k > 130) {
            cout << "Case #" << now_n << ": Check birth date" << endl;
            now_n++;
        } else {
            cout << "Case #" << now_n << ": " << k << endl;
            now_n++;
        }
    }

    return 0;
}
