__author__ = 'robert'

def fence(p, k):
    fence = [[None] * len(p) for n in range(k)]
    rails = range(k - 1) and range(k - 1, 0, -1)

    for n, x in enumerate(p):
        fence[rails[n % len(rails)]][n] = x

    return [c for rail in fence for c in rail if c is not None]

def encrypt(p, k):
    return ''.join(fence(p, k))

def decrypt(c, k):
    rng = range(len(c))
    pos = fence(rng, k)

    return ''.join(c[pos.index(k)] for k in rng)


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
