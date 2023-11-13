# Minta pengguna memasukkan dua angka
num1, num2 = map(int, input("Input: ").split())

if num1 > num2:
    num1, num2 = num2, num1

print(f"Output: {num1} {num2}")