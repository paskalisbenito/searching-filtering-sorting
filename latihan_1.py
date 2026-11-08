nilai = [60, 85, 40, 90, 75, 50, 95]

if 85 in nilai:
    print("Nilai 85 ditemukan pada indeks:", nilai.index(85))
else:
    print("Nilai 85 tidak ditemukan")

nilai_lulus = [x for x in nilai if x >= 75]

print("Nilai yang lulus:", nilai_lulus)
