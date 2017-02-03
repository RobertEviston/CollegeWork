__author__ = 'robert'

from Crypto.Cipher import DES
from base64 import *

des = DES.new("12345678", DES.MODE_ECB)
enc = b16encode(des.encrypt("AAAABBBBAAAABBBB"))
dec = des.decrypt(b16decode("19FF4637BB2FE77C19FF4637BB2FE77C"))

print ("The encrypted string is: " + enc)
print ("The decrypted string is: " + dec)
