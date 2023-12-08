# Meminta input ukuran matriks
baris = int(input("Masukkan jumlah baris: "))
kolom = int(input("Masukkan jumlah kolom: "))

# Membuat matriks kosong
matriks = []

# Meminta input elemen matriks
for i in range(baris):
    baris_matriks = [int(input(f"Masukkan elemen baris {i + 1}, kolom {j + 1}: ")) for j in range(kolom)]
    matriks.append(baris_matriks)

# Menampilkan matriks
for baris in matriks:
    for elemen in baris:
        print(elemen, end=" ")
    print()
