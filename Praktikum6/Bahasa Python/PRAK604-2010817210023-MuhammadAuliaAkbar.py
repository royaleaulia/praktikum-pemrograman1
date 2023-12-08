def decode_message(cipher, message):
    star_count = 0
    hash_count = 0
    decoded = ""

    for i in range(len(cipher)):
        if cipher[i] == message[i]:
            decoded += '*'
            star_count += 1
        else:
            decoded += '#'
            hash_count += 1

    return decoded, star_count, hash_count

# Input cipher (kode yang dimiliki oleh Shikamaru)
cipher = input().rstrip()

# Input pesan yang diterima oleh Shikamaru
message = input().rstrip()

# Menyelesaikan masalah dengan fungsi decode_message
decoded, star_count, hash_count = decode_message(cipher, message)

# Menampilkan hasil
print(decoded)
print(f"* = {star_count}")
print(f"# = {hash_count}")

# Menentukan pesan asli atau palsu
if len(cipher) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
elif star_count >= hash_count:
    print("Pesan Asli")
else:
    print("Pesan Palsu")


