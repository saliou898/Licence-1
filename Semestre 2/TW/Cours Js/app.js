let solde=10000;
let choix=parseInt(prompt("Faites votre choix: \n 0.Voir Solde\n 1.DEPOT \n 2.RETRAIT \n 3.VIREMENT"))
switch(choix){
case 1:
let depot=parseInt(prompt("Depot de combien:"));
let dep=solde+depot;
alert("Apres depot, votre nouveau solde est: " + dep);
break;

case 2:
let retrait=parseInt(prompt("Retrait de combien:"));

if (retrait<=solde){
    solde-=retrait
    alert("Vous avez retirer "+retrait+"\nNouveau solde: "+solde)
}else{
    alert("Votre solde est insufisant !")
}
break;

case 3:
let compte="AB1234"
let compteSaisi=prompt("Saisir le numero de compte");
if (compteSaisi==compte){
    let virement=parseInt(prompt("Montant de virement:"));
    if(virement>solde){
        alert("IMPOSSIBLE!!! Solde insuffisant")
    }else{
        alert("Virement effectué avec succes,nouveau solde:"+(solde-virement));
    } 
}else{
    alert("Ce compte n'existe pas !")
}
break;
case 0:
    alert('Solde: '+solde)
    break;

}