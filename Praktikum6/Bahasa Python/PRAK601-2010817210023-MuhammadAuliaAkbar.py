# Meminta input ukuran matriks
baris = int(input("Baris: "))
kolom = int(input("Kolom: "))

# Membuat matriks kosong
matriks = []

# Meminta input elemen matriks
for i in range(baris):
    baris_matriks = [int(input(f"")) for j in range(kolom)]
    matriks.append(baris_matriks)

# Menampilkan matriks
for baris in matriks:
    for elemen in baris:
        print(elemen, end=" ")
    print()
