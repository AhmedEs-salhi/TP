from math import *

def g1(x):
    return(2*sqrt(sin(x)))

def g2(x):
    return(4*sin(x)/x)

def ptFixe(x0, EPS, Nmax, fonc):
    for n in range(Nmax):
        r = fonc(x0)
        Er = abs(r - x0)
        if Er < EPS:
            break
        x0 = r      
    return r, n + 1
  
#============MAIN FUNCTION=============#
  
EPS = 1e-7
Nmax = int(input(" Donner Nmax : "))
x0 = float(input( " le terme intial : "))
g = eval(input("choisir la fonction : "))

r, niter = ptFixe(x0, EPS, Nmax, g)
if niter>=Nmax:
    print("methode diverge")
else:
    print("methode converge ")
    print(20*"=")
    print("solution approche de l'equation : ", r)
    print ("atteint apres ", niter, "iteration")
