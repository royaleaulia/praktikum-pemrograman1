import math

alas = float(input("Alas (Menggunakan cm): "))
tinggi = float(input("Tinggi (Menggunakan cm): "))

sisiA = tinggi
sisiB = math.sqrt(alas * alas + tinggi * tinggi)# Menggunakan Teorema Pythagoras
sisiC = alas
keliling = sisiA + sisiB + sisiC
luas = 0.5 * alas * tinggi

print("Jawab:")
print(f"Sisi A = {sisiA:.2f} cm")
print(f"Sisi B = {sisiB:.2f} cm")
print(f"Sisi C = {sisiC:.2f} cm")
print(f"Keliling = {keliling:.2f} cm")
print(f"Luas = {luas:.2f} cm")
