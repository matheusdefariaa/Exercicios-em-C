import ctypes

total = ctypes.cdll.LoadLibrary("./calculator.so")
print(total.addition(2,4))

