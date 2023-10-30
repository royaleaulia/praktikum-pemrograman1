# Mengambil tiga angka acak sebagai input
angka1, angka2, angka3 = map(int, input("Masukkan tiga angka acak: ").split())

# Menggunakan metode kondisional untuk mengurutkan angka
if angka1 <= angka2 and angka1 <= angka3:
    min_angka = angka1
    if angka2 <= angka3:
        mid_angka = angka2
        max_angka = angka3
    else:
        mid_angka = angka3
        max_angka = angka2
elif angka2 <= angka1 and angka2 <= angka3:
    min_angka = angka2
    if angka1 <= angka3:
        mid_angka = angka1
        max_angka = angka3
    else:
        mid_angka = angka3
        max_angka = angka1
else:
    min_angka = angka3
    if angka1 <= angka2:
        mid_angka = angka1
        max_angka = angka2
    else:
        mid_angka = angka2
        max_angka = angka1

# Menampilkan hasil pengurutan
print(f"Hasil pengurutan: {min_angka} {mid_angka} {max_angka}")