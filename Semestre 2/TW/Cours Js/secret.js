let n_geneer,
  n,
  trouver = 0;
n_geneer = Math.floor(Math.random() * 10);
for (let i = 1; i <= 3; i++) {
  alert("Vous avez 3  tentative !\n Tententif  " + i);
  n = parseInt(prompt("Deviner le nombre generer !"));
  if (n_geneer == n) {
    alert("Bravo vous avez bien deviner !");
    trouver = 1;
    break;
  } else {
    if (n > n_geneer) {
      alert("Trop Grand !");
    } else {
      alert("Trop petit !");
    }
  }
}
if (trouver == 0) {
  alert("Vous avez echouer !");
}
