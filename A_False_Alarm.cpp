#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test = 0; test < t; test++) {
        int n, x;
        cin >> n >> x;
        int a[10];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int i, j;
        for (i = 0; i <= n; i++) {
            int time = 0;
            for (j = 0; j < n; j++) {
                if (a[j] == 0) {
                    time++;
                } else {
                    if (time >= i && time < i + x) {
                        time++;
                    } else {
                        break;
                    }
                }
            }

            if (j == n) break;
        }

        if (i <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
