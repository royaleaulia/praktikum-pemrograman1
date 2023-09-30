a = int(input("Masukan Nilai A: "))
b = int(input("Masukan Nilai B: "))
x = int(input("Masukan Nilai X: "))
y = int(input("Masukan Nilai Y: "))

hasilbagiab = a % b
hasilbagixy = x % y
jumlah = hasilbagiab + hasilbagixy

print("Total sisa hasil bagi dari {} dibagi {} dan {} dibagi {} adalah {}".format(a, b, x, y, jumlah))
