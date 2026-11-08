#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    bool ditemukan = false;

    for (int i = 0; i < suhu.size(); i++) {
        if (suhu[i] == 0) {
            cout << "Nilai 0 ditemukan pada indeks: " << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Nilai 0 tidak ditemukan" << endl;
    }

    cout << "Suhu positif: ";

    for (int x : suhu) {
        if (x > 0) {
            cout << x << " ";
        }
    }

    return 0;
}
