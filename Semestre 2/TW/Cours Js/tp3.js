let choix = parseInt(prompt("1-Debutant\n 2-Intermediaire\n 3-Expert\n 4-Goat\n 5-Quiter"))
switch (choix) {
    case 1: {
        alert("Niveau Debutant")

        let nbr = Math.floor(Math.random() * 10)
        let n = 3
        alert("Vous avez " + n + " tentatives")
        let trouver = false
        for (i = 1; i <= n; i++) {
            alert("Tentative n° " + i)
            let dev = parseInt(prompt("Diviner un nombre entre [0-10]: "))
            if (dev === nbr) {
                alert("Bravo tu a bien deviner !")
                trouver = true
                break;

            } else {
                if (dev > nbr) {
                    alert("Plus petit !")
                } else {
                    alert("Plus grand !")
                }
            }

        }
        if (trouver === false) {
            alert("Vous avez echouer !")
        }
        break

    }

    case 2: {
        alert("Niveau Intermediaire")

        let nbr = Math.floor(Math.random() * 50)
        let n = 5
        alert("Vous avez " + n + " tentatives")
        let trouver = false
        for (i = 1; i <= n; i++) {
            alert("Tentative n° " + i)
            let dev = parseInt(prompt("Diviner un nombre entre [0-50]: "))
            if (dev === nbr) {
                alert("Bravo tu a bien deviner !")
                trouver = true
                break;

            } else {
                if (dev > nbr) {
                    alert("Plus petit !")
                } else {
                    alert("Plus grand !")
                }
            }

        }
        if (trouver === false) {
            alert("Vous avez echouer !")
        }
        break

    }
    case 3: {
        alert("Niveau Expert")

        let nbr = Math.floor(Math.random() * 100)
        let n = 7
        alert("Vous avez " + n + " tentatives")
        let trouver = false
        for (i = 1; i <= n; i++) {
            alert("Tentative n° " + i)
            let dev = parseInt(prompt("Diviner un nombre entre [0-100]: "))
            if (dev === nbr) {
                alert("Bravo tu a bien deviner !")
                trouver = true
                break;

            } else {
                if (dev > nbr) {
                    alert("Plus petit !")
                } else {
                    alert("Plus grand !")
                }
            }

        }
        if (trouver === false) {
            alert("Vous avez echouer !")
        }
        break

    }
    case 4: {
        alert("Niveau Goat")

        let nbr = Math.floor(Math.random() * 1000)
        let n = 10
        alert("Vous avez " + n + " tentatives")
        let trouver = false
        for (i = 1; i <= n; i++) {
            alert("Tentative n° " + i)
            let dev = parseInt(prompt("Diviner un nombre entre [0-1000]: "))
            if (dev === nbr) {
                alert("Bravo tu a bien deviner !")
                trouver = true
                break;

            } else {
                if (dev > nbr) {
                    alert("Plus petit !")
                } else {
                    alert("Plus grand !")
                }
            }

        }
        if (trouver === false) {
            alert("Vous avez echouer !")
        }
        break

    }
    case 5: {
        alert("Au revoir !")
        break
    }
    default:
        alert("Choix invalide")




}