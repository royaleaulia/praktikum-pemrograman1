a = float(input(""))
b = float(input(""))

c = (b**2 - a**2)**0.5

tinggi = a
alas = c
keliling = a + b + c
luas = 0.5 * a * c

print("Alas = {:.0f} cm".format(alas))
print("Tinggi = {:.0f} cm".format(tinggi))
print("Keliling = {:.0f} cm".format(keliling))
print("Luas = {:.0f} cm^2".format(luas))