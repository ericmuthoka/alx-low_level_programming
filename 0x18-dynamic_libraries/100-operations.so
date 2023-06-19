import ctypes
import random

# Load the dynamic library
libhello = ctypes.CDLL("./libhello.so")

# Declare the function signatures
libhello.add.argtypes = [ctypes.c_int, ctypes.c_int]
libhello.add.restype = ctypes.c_int

libhello.sub.argtypes = [ctypes.c_int, ctypes.c_int]
libhello.sub.restype = ctypes.c_int

libhello.mul.argtypes = [ctypes.c_int, ctypes.c_int]
libhello.mul.restype = ctypes.c_int

libhello.div.argtypes = [ctypes.c_int, ctypes.c_int]
libhello.div.restype = ctypes.c_int

libhello.mod.argtypes = [ctypes.c_int, ctypes.c_int]
libhello.mod.restype = ctypes.c_int

# Call the C functions from Python
a = random.randint(-111, 111)
b = random.randint(-111, 111)

print("{} + {} = {}".format(a, b, libhello.add(a, b)))
print("{} - {} = {}".format(a, b, libhello.sub(a, b)))
print("{} x {} = {}".format(a, b, libhello.mul(a, b)))
print("{} / {} = {}".format(a, b, libhello.div(a, b)))
print("{} % {} = {}".format(a, b, libhello.mod(a, b)))
