@echo off
cls
rem Ecrire un programme qui pose une serie de 5 questions a choix multiple.
rem L'utilisateur gagne 10 points a chaque bonne reponse.
rem Les donnees de l'utilisateur sont enregistrees dans un fichier .txt.

set /a score=0
set "nom="

set /p nom=Entrez votre nom: 
if "%nom%"=="" set "nom=Utilisateur"

:question1
cls
echo ***********************************************
echo I- Quelle est la capitale du Senegal ?
echo 1- Senegal
echo 2- Dakar
echo 3- Saint-Louis
echo 4- Ziguinchor
echo ***********************************************
set /p rep=Faites votre choix: 
if "%rep%"=="2" (
    echo Bonne reponse !
    set /a score=score+10
) else (
    echo Mauvaise reponse.
)
pause

:question2
cls
echo ***********************************************
echo II- Qui est l'actuel president de la Republique du Senegal ?
echo 1- Ousmane Sonko
echo 2- Bassirou Diomaye Faye
echo 3- Macky Sall
echo 4- Abdoulaye Wade
echo ***********************************************
set /p rep=Faites votre choix: 
if "%rep%"=="2" (
    echo Bonne reponse !
    set /a score=score+10
) else (
    echo Mauvaise reponse.
)
pause

:question3
cls
echo ***********************************************
echo III- Qui est l'actuel Premier ministre du Senegal ?
echo 1- Amadou Ba
echo 2- Pape Djibril Fall
echo 3- Ousmane Sonko
echo 4- Aucun
echo ***********************************************
set /p rep=Faites votre choix: 
if "%rep%"=="3" (
    echo Bonne reponse !
    set /a score=score+10
) else (
    echo Mauvaise reponse.
)
pause

:question4
cls
echo ***********************************************
echo IV- Combien de points gagne-t-on par bonne reponse ?
echo 1- 5 points
echo 2- 10 points
echo 3- 15 points
echo 4- 20 points
echo ***********************************************
set /p rep=Faites votre choix: 
if "%rep%"=="2" (
    echo Bonne reponse !
    set /a score=score+10
) else (
    echo Mauvaise reponse.
)
pause

:question5
cls
echo ***********************************************
echo V- Quelle commande permet de faire un choix dans un fichier batch ?
echo 1- echo
echo 2- pause
echo 3- choice
echo 4- cls
echo ***********************************************
set /p rep=Faites votre choix: 
if "%rep%"=="3" (
    echo Bonne reponse !
    set /a score=score+10
) else (
    echo Mauvaise reponse.
)
pause

:fin
cls
echo ***********************************************
echo Nom: %nom%
echo Score final: %score% / 50
echo ***********************************************

(
    echo Nom: %nom%
    echo Score: %score% / 50
    echo Date: %date% %time%
    echo ----------------------------------------
) >> resultats.txt

echo Vos resultats ont ete enregistres dans resultats.txt.
pause >nul
