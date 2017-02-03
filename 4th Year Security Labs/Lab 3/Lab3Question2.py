__author__ = 'robert'

from Crypto.Cipher import DES
from base64 import *

des = DES.new("12345678", DES.MODE_CBC, "00000000")

enc = b16encode(des.encrypt('AAAABBBBAAAABBBB'))

dec = des.decrypt("00000000" + b16decode("AAC823F6BBE58F9EAF1FE0EB9CA7EB08"))[8:]

print("The encrypted string is: " + enc)
print("The decrypted string is: " + dec)


