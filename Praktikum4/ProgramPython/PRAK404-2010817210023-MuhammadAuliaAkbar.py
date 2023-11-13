while True:
    print("Pilih Program: ")
    print("1. Penjumalahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    masukanInput = int(input("Masukan Pilihan: "))

    if masukanInput == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Aulia Akbar")
        break

    if masukanInput == 1:
        print("Masukan Nilai Pertama ", end="")
        nilai_pertama = float(input())
        print("Masukan Nilai Kedua ", end="")
        nilai_kedua = float(input())

        hasil = nilai_pertama + nilai_kedua 
        print(f"Hasil Penjumlahan antara {nilai_pertama} dan {nilai_kedua} adalah {hasil}")

    elif masukanInput == 2:
        print("Masukan Nilai Pertama ", end="")
        nilai_pertama = float(input())
        print("Masukan Nilai Kedua ", end="")
        nilai_kedua = float(input())

        hasil = nilai_pertama - nilai_kedua 
        print(f"Hasil Penjumlahan antara {nilai_pertama} dan {nilai_kedua} adalah {hasil}")

    elif masukanInput == 3:
        print("Masukan Nilai Pertama ", end="")
        nilai_pertama = float(input())
        print("Masukan Nilai Kedua ", end="")
        nilai_kedua = float(input())

        hasil = nilai_pertama * nilai_kedua 
        print(f"Hasil Penjumlahan antara {nilai_pertama} dan {nilai_kedua} adalah {hasil}")

    elif masukanInput == 4:
        print("Masukan Nilai Pertama ", end="")
        nilai_pertama = float(input())
        print("Masukan Nilai Kedua ", end="")
        nilai_kedua = float(input())

        hasil = nilai_pertama / nilai_kedua 
        print(f"Hasil Penjumlahan antara {nilai_pertama} dan {nilai_kedua} adalah {hasil}")
    
    else:
        print("Input anda salah, silahkan coba lagi")


