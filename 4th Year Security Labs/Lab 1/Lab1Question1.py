from idlelib.MultiCall import r

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
    string1 = "Hello this is a test"
    string2 = "My name is Robert"
    key1 = 3
    key2 = 5

    print("string1: " + string1)
    print("string2: " + string2)

    beforeString1 = encrypt(string1, key1)
    beforeString2 = encrypt(string2, key2)

    print("Encrypted string1: " + beforeString1)
    print("Encrypted string2: " + beforeString2)

    afterString1 = (decrypt(beforeString1, key1))
    afterString2 = (decrypt(beforeString2, key2))

    print("Decrypted string1: " + afterString1)
    print("Decrypted string2: " + afterString2)

if __name__ == "__main__":
    main()



