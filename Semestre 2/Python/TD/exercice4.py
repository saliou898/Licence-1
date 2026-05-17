
telephone = input("Entrez un numéro de téléphone : ")


numero_nettoye = ""

for caractere in telephone:
    if caractere.isdigit():
        numero_nettoye += caractere

if len(numero_nettoye) == 9:
    print("Le numéro est valide.")

    numero_formate = (
        numero_nettoye[0:2] + " " +
        numero_nettoye[2:5] + " " +
        numero_nettoye[5:7] + " " +
        numero_nettoye[7:9]
    )

    print("Numéro formaté :", numero_formate)

else:
    print("Le numéro est invalide.")

email = input("Entrez une adresse email : ")

if "@" in email and "." in email.split('@')[-1]:
    print("Adresse email valide.")
else:
    print("Adresse email invalide.")

print("\n--- Résumé ---")
print("Numéro nettoyé :", numero_nettoye)
print("Email :", email)