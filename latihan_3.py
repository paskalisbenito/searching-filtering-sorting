suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

if 0 in suhu:
    print("Nilai 0 ditemukan pada indeks:", suhu.index(0))
else:
    print("Nilai 0 tidak ditemukan")

suhu_positif = [x for x in suhu if x > 0]

print("Suhu positif:", suhu_positif)
