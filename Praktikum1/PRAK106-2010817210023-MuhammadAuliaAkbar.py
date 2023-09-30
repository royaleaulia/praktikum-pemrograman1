a = int(input("Masukan Nilai A: "))
b = int(input("Masukan Nilai B: "))
c = int(input("Masukan Nilai C: "))

apakah_a_sama_dengan_b = int(a == b)       # 0 jika False, 1 jika True
apakah_b_lebih_besar_dari_c = int(b > c)   # 0 jika False, 1 jika True
apakah_a_tidak_sama_dengan_c = int(a != c) # 0 jika False, 1 jika True

print("Apakah a sama dengan b? jawabannya adalah", apakah_a_sama_dengan_b)
print("Apakah b lebih besar dari c? jawabannya adalah", apakah_b_lebih_besar_dari_c)
print("Apakah a tidak sama dengan c? jawabannya adalah", apakah_a_tidak_sama_dengan_c)
