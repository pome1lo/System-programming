@echo off
chcp 65001
setlocal enabledelayedexpansion
set num1=%~1
set num2=%~2
set operator=%~3
echo -- Строка параметров: !num1! !num2! !operator!
echo -- Параметр 1: !num1! 
echo -- Параметр 2: !num2!
echo -- Параметр 3: !operator!

if "!operator!"=="+" (
    set /a result=!num1! + !num2!
) else if "!operator!"=="-" (
    set /a result=!num1! - !num2!
) else if "!operator!"=="*" (
    set /a result=!num1! * !num2!
) else if "!operator!"=="/" (
    set /a result=!num1! / !num2!
) else (
    echo Invalid operator
    exit /b 1
)
echo Результат: !result!
endlocal
pause