const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

const posisi = produk.indexOf("Keyboard");

if (posisi !== -1) {
    console.log("Keyboard ditemukan pada indeks:", posisi);
} else {
    console.log("Keyboard tidak ditemukan");
}

const hasilFilter = produk.filter(x => x.length > 5);

console.log("Produk dengan nama lebih dari 5 karakter:", hasilFilter);
