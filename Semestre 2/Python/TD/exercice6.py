
notes = []

for i in range(5):
    note = float(input(f"Entrez la note {i + 1} (entre 0 et 20) : "))
    notes.append(note)

print("\nListe des notes :", notes)


print("Note la plus basse :", min(notes))


print("Note la plus haute :", max(notes))


moyenne = sum(notes) / len(notes)
print("Moyenne des notes :", moyenne)


compteur = 0

for note in notes:
    if note >= 10:
        compteur += 1

print("Nombre de notes supérieures ou égales à 10 :", compteur)


notes.remove(min(notes))
notes.remove(max(notes))

nouvelle_moyenne = sum(notes) / len(notes)

print("\nListe après suppression des extrêmes :", notes)
print("Nouvelle moyenne :", nouvelle_moyenne)


notes.sort()

print("Notes triées par ordre croissant :", notes)