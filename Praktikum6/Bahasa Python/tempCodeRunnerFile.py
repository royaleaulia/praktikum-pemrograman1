# Input ordo matriks
n = int(input(""))

# Input matriks A
print("Masukkan elemen matriks A:")
A = [[int(input()) for _ in range(n)] for _ in range(n)]

# Input matriks B
print("Masukkan elemen matriks B:")
B = [[int(input()) for _ in range(n)] for _ in range(n)]

# Perkalian matriks A dan B
hasil = [[0 for _ in range(n)] for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil[i][j] += A[i][k] * B[k][j]

# Menampilkan hasil perkalian
print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(f"{hasil[i][j]}", end=" ")
    print()