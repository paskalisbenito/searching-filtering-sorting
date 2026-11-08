
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> produk = {
        "Laptop", "Mouse", "Keyboard", "Monitor", "Headset"
    };

    bool ditemukan = false;

    for (int i = 0; i < produk.size(); i++) {
        if (produk[i] == "Keyboard") {
            cout << "Keyboard ditemukan pada indeks: " << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Keyboard tidak ditemukan" << endl;
    }

    cout << "Produk dengan nama lebih dari 5 karakter: ";

    for (string x : produk) {
        if (x.length() > 5) {
            cout << x << " ";
        }
    }

    return 0;
}
