#factorial using scipy library:

import scipy.special as sp
import timeit

n=int(input("Give a positive integer: "))
s=sp.factorial(n)
print ("The value of factorial ",n," is ",s,"\nTime taken to run the code: ",timeit.timeit)
