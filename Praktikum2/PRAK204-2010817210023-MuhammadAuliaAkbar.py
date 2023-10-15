import math
jari2 = float(input("Masukkan jari-jari: "))
tinggi = float(input("Masukkan tinggi: "))

volume = math.pi * (jari2 * jari2) * tinggi
luas = 2 * math.pi * jari2 * (jari2 + tinggi)
keliling = 2 * math.pi * jari2

print("\nVolume = {:.2f}".format(volume))
print("Luas = {:.2f}".format(luas))
print("Keliling = {:.2f}".format(keliling))
