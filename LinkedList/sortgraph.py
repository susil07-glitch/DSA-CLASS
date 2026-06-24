
import numpy as np
import matplotlib.pyplot as plt



x=[10,100,1000,10000,20000,100000,200000]
bubble=[1584e-06,4.3833e-05,0.00547304,0.115689,0.338842,9.543999,46.1187]
selection=[1.209e-06,2.325e-05,0.000659834,0.0289263,0.119598,3.00527,12.0601]

plt.plot(x,bubble,label="bubble sort ")
plt.plot(x,selection,label="selection sort")
plt.ylabel("Time take")
plt.xlabel("input number ")
plt.title("bubble sort Time Complexity Graph ")
plt.legend()
plt.show()
