let max;
for (let i = 1; i <= 3; i++) {
  let n = parseInt(prompt("Donner une entier !"));
  if (i == 1) {
    max = n;
  } else {
    if (n > max) {
      max = n;
    }
  }
}
alert("Max est: " + max);
