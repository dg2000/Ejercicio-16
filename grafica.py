import numpy as np

import matplotlib.pyplot as plt


ganadas = np.loadtxt("data.txt")[:, 0]

repe = np.loadtxt("data.txt")[:, 1]

t = range(len(repe))

plt.plot(t, ganadas)

plt.plot(t, repe)

plt.savefig('album.png')
