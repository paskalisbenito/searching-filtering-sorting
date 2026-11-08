#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nilai = {60, 85, 40, 90, 75, 50, 95};

    bool ditemukan = false;

    for (int i = 0; i < nilai.size(); i++) {
        if (nilai[i] == 85) {
            cout << "Nilai 85 ditemukan pada indeks: " << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Nilai 85 tidak ditemukan" << endl;
    }

    cout << "Nilai yang lulus: ";
    for (int x : nilai) {
        if (x >= 75) {
            cout << x << " ";
        }
    }

    return 0;
}
