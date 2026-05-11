@echo off
cls
rem Ecrire un programme qui prend en enter un nombre positif pus l'affiche en H M S
:teste
set /p nbr= Donner un nombre positif: 
if %nbr% LSS 0 goto teste
pause >null