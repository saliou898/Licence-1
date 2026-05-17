from math import ceil, floor
tva=0.2
prix_ht= float(input("Entrer le prix ht: "))
prix_tva =prix_ht*tva
prix_ttc= prix_ht +prix_tva
print(f"Prix TTC: {prix_ttc} FCFA")
print(f"Prix arrondi: {ceil(prix_ttc)} FCFA")