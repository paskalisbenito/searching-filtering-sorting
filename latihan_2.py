produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

if "Keyboard" in produk:
    print("Keyboard ditemukan pada indeks:", produk.index("Keyboard"))
else:
    print("Keyboard tidak ditemukan")

hasil_filter = [x for x in produk if len(x) > 5]

print("Produk dengan nama lebih dari 5 karakter:", hasil_filter)
