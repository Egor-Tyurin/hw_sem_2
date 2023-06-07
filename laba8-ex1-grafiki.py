import matplotlib.pyplot as plt
import numpy as np

my_file = open("values.txt", "r")

nomera = []
znacheniay = []


for string in my_file.readlines():
    key, value = string.split(' ')
    value = value.replace(',', '.')

    nomera.append(int(key))
    znacheniay.append(float(value))

indexes = [i * 10 for i in nomera]


plt.plot(znacheniay, indexes)

plt.xlabel("rA")

plt.ylabel("Значения")

plt.show()

