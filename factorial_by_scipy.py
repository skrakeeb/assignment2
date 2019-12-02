#factorial using scipy library:

import scipy.special as sp

n=int(input("Give a positive integer: "))
s=sp.factorial(n)
print ("The value of factorial ",n," is ",s)
