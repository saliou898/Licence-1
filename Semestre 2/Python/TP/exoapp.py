print("========= MENU ==========")
print("1. Addition")
print("2. Soustraction")
print("3. Multiplication")
print("4. Division")
print("5. Modulo")
print("6. Puissance")
print("7. Quitter")
print("===============")
choix=int(input("Faites votre choix:"))
a=int(input("Entrer le premier nombre"))
b=int(input("Entrer le second nombre"))
match choix:
    case 1:
        print(f"Resultat: {a+b}")
    case 2:
        print(f"Resultat: {a-b}")
    case 3:
        print(f"Resultat: {a*b}")
    case 4:
        if b!=0:
            print(f"Resultat: {a/b}")
        else:  
            print(f"Erreur !!! Impossible de diviser par 0") 
    case 5:  
         if b!=0:
            print(f"Resultat: {a%b}")
         else:  
            print(f"Erreur !!! Impossible de diviser par 0")
    case 6:
        print(f"Resultat : {a**b}")
    case 7:
        print(f"Quitter")
        
    case _:
        print(f"Votre choix est invalide choisir entrer 1 et 7")
