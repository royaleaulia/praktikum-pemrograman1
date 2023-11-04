# Minta pengguna memasukkan dua angka
num1, num2 = map(int, input("Input: ").split())

# Menggunakan kondisi untuk mengurutkan angka
if num1 > num2:
    num1, num2 = num2, num1

# Menampilkan angka dalam urutan terurut
print(f"Output: {num1} {num2}")