import math

putaran = float(input("Masukkan Pak Dengklek Mengelilingi Tanaman: "))
jaraktempuh = float(input("Masukkan Jarak Tempuh Pak Denglek (Satuan Kilometer): "))

kelilingaslilingkaran = jaraktempuh / putaran
jarijari = kelilingaslilingkaran / (2 * math.pi)

print("Diketahui:")
print(f"Pak Dengklek mengelilingi taman = {int(putaran)} Putaran")
print(f"Jarak tempuh Pak Dengklek = {int(jaraktempuh)} Kilometer")
print("Jawaban:")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jarijari:.2f} Kilometer")
