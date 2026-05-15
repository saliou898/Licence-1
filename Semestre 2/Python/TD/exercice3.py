prenom=input("Donner votre prenom: ")
nom=input("Donner votre nom: ")
c= prenom+nom
print(len(c))
nom=nom.upper()
print(f"Nom masuscul: {nom}")
nom=nom.lower()
print(f"Nom minuscul: {nom}")
nom=nom.title()
print(f"nom: {nom}")
print(f"taille: {len(nom)}")
if 'e' in nom.lower():
    print("Oui il existe ")
else:
    print("Non")
    
