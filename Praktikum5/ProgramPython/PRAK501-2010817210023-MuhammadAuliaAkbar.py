def maxBilangan(a, b, c, d):
    terbesar = a;
    if (b > terbesar):
        terbesar = b
    if (c > terbesar):
        terbesar = c
    if (d > terbesar):
        terbesar = d
    return terbesar

inputSemuaBil = input("Input: ")
bilangan = list(map(int, inputSemuaBil.split()))
hasil = maxBilangan(*bilangan)
print(f"Output {hasil}")
