__author__ = 'Robert Eviston'

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
    string1 = "And I shall remain satisfied, and proud to have been the first who has ever enjoyed the fruit " + "of his writings as fully as he could desire; for my desire has been no other than to deliver " + "over to the detestation of manking the false and foolish tales of the books of chivalry, which, " + "thanks to that of my true Don Quixote, are even now tottering, and doubtless doomed to fall for " + "ever. Farewell."
    key = -3

    print("Original String1: " + string1 + "\n")

    beforeString1 = encrypt(string1, key)

    print("Encrypted string1: " + beforeString1 + "\n")

    afterString1 = (decrypt(beforeString1, key))

    print("Decrypted string1: " + afterString1 + "\n")

if __name__ == "__main__":
    main()
