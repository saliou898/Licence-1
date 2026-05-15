
courses = []

print("Ajoutez 5 articles dans la liste de courses :")

for i in range(5):
    article = input(f"Article {i + 1} : ")
    courses.append(article)

print("\nListe des courses :")
for index, article in enumerate(courses):
    print(f"{index} : {article}")

index_modif = int(input("\nEntrez l'index de l'article à modifier : "))

if 0 <= index_modif < len(courses):
    nouvel_article = input("Entrez le nouvel article : ")
    courses[index_modif] = nouvel_article
    print("Article modifié avec succès.")
else:
    print("Index invalide.")


print("\nListe après modification :")
for index, article in enumerate(courses):
    print(f"{index} : {article}")


supprime = courses.pop()
print(f"\nDernier article supprimé : {supprime}")


nom_article = input("\nEntrez le nom de l'article à supprimer : ")

if nom_article in courses:
    courses.remove(nom_article)
    print(f"{nom_article} a été supprimé.")
else:
    print("Article introuvable.")


courses.sort()


print("\nListe triée alphabétiquement :")
for article in courses:
    print(article)

print(f"\nNombre d'articles dans la liste : {len(courses)}")