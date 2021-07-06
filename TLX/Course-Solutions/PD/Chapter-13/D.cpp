#include <iostream>
using namespace std;

int n, k, catat[100] = {0};
bool pernah[100] = {false};

void tulis(int x, int kedalaman) {
    if (kedalaman > k) {
        for (int i = 0; i < k; i++) {
            cout << catat[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = x; i <= n; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman-1] = i;
                tulis(i+1, kedalaman+1);
                pernah[i] = false;
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    cin >> n >> k;
    tulis(1, 1);
    return 0;
}
