@REM Ustawienie nazwy i kolorystyki; usunięcie wyświetlania ścieżki.
@echo off
title BSC - better simple calc
color 1e


@REM miejsce rozpoczęcia - czyszczenie cmd.
:top
cls
echo Welcome to "Better simple calculator" in batch
echo.


@REM Wprowadzanie i sprawdzanie pierwszej liczby.
:first
set /p firstValue=Please enter first number: 
set /a firstNumber=%firstValue%

echo.

if %firstNumber% NEQ 0 goto operator
if %firstNumber% EQU 0 if %firstValue% EQU 0 goto operator
if %firstNumber% EQU 0 if %firstValue% NEQ 0 echo This number is invalid... insert valid number.
goto first


@REM Wprowadzanie i sprawdzanie operatora matematycznego.
:operator
set /p MathOper=What kind of calculation do you want to do? (-, +, / or *): 
echo.  
if %mathOper% EQU + goto second
if %mathOper% EQU - goto second
if %mathOper% EQU / goto second
if %mathOper% EQU * goto second
echo It isn't correct operator... insert one of these operators: -, +, / or *.
goto operator


@REM Wprowadzanie i sprawdzanie drugiej liczby.
:second
set /p secondValue=Please enter second number: 
set /a secondNumber=%secondValue%

echo.

if %secondNumber% NEQ 0 goto checker
if %secondNumber% EQU 0 if %secondValue% EQU 0 goto checker
if %secondNumber% EQU 0 if %secondValue% NEQ 0 echo This number is invalid... insert valid number.
goto second


@REM Sprawdzanie, czy nie spróbowano podzielić przez zero.
:checker
if %mathOper% NEQ / goto math
if %mathOper% EQU / if %secondNumber% NEQ 0 goto math
if %mathOper% EQU / if %secondNumber% EQU 0 echo You can't divide anything by zero. Please, change math operator or second number.
goto changer

@REM Prośba o zmianę wybranej wartości (w przypadku próby dzielenia przez zero).
:changer
set /p choose=What do you want to change? (choose: operator or secondNumber) 
if %choose% EQU operator goto operator
if %choose% EQU secondNumber goto second
goto changer


@REM Wykonanie ustalonej operacji matematycznej.
:math
set /a result=%firstNumber%%mathOper%%secondNumber%
echo Your result is %result%
echo Well done! :)

echo.
echo.


@REM System kończąco-restartujący.
:ending
set /p end=Do you want to count something else? (Y/N)
if %end% EQU Y goto top
if %end% EQU N exit
goto ending