// let n
// do{
//     n=parseInt(prompt("Donner un nombre positif !"))
// } while(n<=0)
// for (let i=1;i<=n;i++){
//     if (n%i==0){
//         console.log(i);
//     }
// }

// Exercice pour les nombre 1er
let nombre,cpt=0;
nombre =  Math.floor(Math.random()*10)
for (let i = 1; i <= nombre; i++) {
  if (nombre % i == 0) {
    cpt++;
  }
}
if (cpt==2) {
  alert(nombre + " est un nombre premier");
} else {
  alert(nombre + " n'est pas un nombre 1er");
}
