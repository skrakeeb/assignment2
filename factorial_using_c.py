from ctypes import*
fact=CDLL('factorial.so')
def factorial(n):
    s=fact.factorial(n)
    if (s==-1):
        return "Give another value"
    else:
        return s
n=int(input("Give a positive integer"))
print ("The value of factorial ",n," is ",factorial(n))
    
