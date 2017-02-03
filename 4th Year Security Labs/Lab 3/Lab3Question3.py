__author__ = 'robert'

from Crypto.Cipher import DES
import base64

key = "12345678"

def add_padding(str1, key):
    modulo = len(str1) % len(key)
    print("length before: " + str(len(str1)))
    i = 0

    while i < (modulo-2):
        str1 += "\x00"
        i += 1

    str1 += ("0" + str(modulo))

    print("length after: " + str(len(str1)))

    return str1

def remove_padding(str1, key):
    str1.replace("\x00", "", 2)

    return str1


def main():
    des = DES.new(key, DES.MODE_ECB)

    plain_without_padding = "AAAABBBBCCCC"
    plain_with_padding = "AAAABBBBCCCC\x00\x0004"
    encoded_string = "19FF4637BB2FE77C81987E5CB99B66E2"

    print("base16 encoded: " + encoded_string  + "\n" "base16 decoded: " + des.decrypt(base64.b16decode(encoded_string)))

    plain_without_padding = add_padding(plain_without_padding, key)
    plain_with_padding = remove_padding(plain_with_padding, key)

    print("Without padding: " + plain_without_padding)
    print("With padding: " + plain_with_padding)
    print("** NOTE ** " + "\n" + "Padding will not display in console for \"With padding\" so must be seen by length taken of string.\ne.g was 12 is now 16 in length")

if __name__ == "__main__":
    main()