import math
a=int(input("Entrer le premier parametre:"))
b=int(input("Entrer le deuxieme parametre:"))
c=int(input("Entrer le troisieme parametre:"))
if a==0:
    if b==0:
      print(f"Impossible")
    else:
       print(f"Le resultat est {-c/b}")
else:
   delta=(b**2)-4*a*c 
   if delta==0:
      x0=-b/(2*a)
      print(f"Unique solution: {x0}")
   elif delta>0:
      x1=(-b-math.sqrt(delta))/(2*a)
      x2=(-b+math.sqrt(delta))/(2*a)
      print(f"Deux solutions: {x1: .2f} et {x2: .2f}")
   else:
      print(f"Pas de solutions")
      

             