const nilai = [60, 85, 40, 90, 75, 50, 95];

const posisi = nilai.indexOf(85);

if (posisi !== -1) {
    console.log("Nilai 85 ditemukan pada indeks:", posisi);
} else {
    console.log("Nilai 85 tidak ditemukan");
}

const nilaiLulus = nilai.filter(x => x >= 75);

console.log("Nilai yang lulus:", nilaiLulus);
