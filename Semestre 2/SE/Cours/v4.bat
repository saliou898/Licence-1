@echo off
cls
rem Ecrire un programme qui prend en entree un nombre positif puis l'affiche en H M S.

:teste
set /p nbr=Donner un nombre positif: 
if "%nbr%"=="" goto teste
set /a test=nbr 2>nul
if %nbr% LSS 0 goto teste

set /a h=nbr / 3600
set /a res=nbr %% 3600
set /a min=res / 60
set /a sec=res %% 60

echo Le nombre vaut: %h% H %min% Min %sec% Sec
pause >nul
