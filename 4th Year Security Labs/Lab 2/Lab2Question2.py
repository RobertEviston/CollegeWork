__author__ = 'robert'

def caesar(s, k, decrypt=False):
    if decrypt: k = 26 - k

    r = ""

    for i in s:
        if (ord(i) >= 65 and ord(i) <= 90):
            r += chr((ord(i) - 65 + k) % 26 +65)
        elif (ord(i) >= 97 and ord(i) <= 122):
            r += chr((ord(i) - 97 + k) % 26 + 97)
        else:
            r += i

    return r

def encrypt(p, k):
    return caesar(p, k)

def decrypt(c, k):
    return caesar(c, k, True)

def main():

    string1 = "Vg jbhyq frrz gung, nf ur rknzvarq gur frireny cbffvovyvgvrf, n fhfcvpvba pebffrq uvf zvaq: gur zrzbel bs ubj ur uvzfrys unq orunirq va rneyvre qnlf znqr uvz nfx jurgure fbzrbar zvtug or uvqvat ure sebz gur jbeyq"

    key = 0

    print("Plaintext String: " + string1 + "\n")

    while key < 30:

        key += 1

        string2 = decrypt(string1, key)

        if "the" in string2:
            print("Deciphered String: " + string2 + "\n" + "\nKey: " + str(key))


if __name__ == "__main__":
    main()