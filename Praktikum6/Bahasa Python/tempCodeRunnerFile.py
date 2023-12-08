baris1, baris2 = map(int, input("Masukkan Ukuran Matriks (Baris x Kolom): ").split())

# Inisialisasi matriks pertama dan kedua
matriks1 = []
matriks2 = []

if baris1 != baris2:
    print("Jumlah Tidak Sama")
else:
    # Input elemen matriks pertama
    print("Masukkan elemen matriks pertama:")
    matriks1 = list(map(int, input().split()))

    # Input elemen matriks kedua
    print("Masukkan elemen matriks kedua:")
    matriks2 = list(map(int, input().split()))

    # Inisialisasi matriks hasil
    hasil = [matriks1[i] * matriks2[i] for i in range(baris1)]

    # Menampilkan hasil
    print("Hasil perkalian matriks:")
    for nilai in hasil:
        print(nilai, end=" ")