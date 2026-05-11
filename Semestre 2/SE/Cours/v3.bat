@echo off
cls
rem Ecrire un progaramme
:teste 
set /p nbr= Donner un nombre positif: 
if %nbr% LSS 0 goto teste
set /a i=1
:table
set /a r= nbr*i
echo %nbr% * %i% = %r%
set /a i=i+1
if %i% LSS 13 goto table

pause > null