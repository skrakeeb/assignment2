# calculating factorial by for loop:

from math import*
import timeit

s=1
n=int(input("Give a positive integer:"))

for i in range(n):
   s=s*(i+1)
print ("The value of factorial ",n," is ",s,"\nTime taken to run the code: ",timeit.timeit())
