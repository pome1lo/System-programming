@echo off
chcp 65001
echo --Строка параметров: %*
echo -- Параметр 1: %~1
echo -- Параметр 2: %~2
echo -- Параметр 3: %~3 
set /a result1=%~1 + %~2
set /a result2=%~1 * %~2
set /a result3=%~3 / %~2
set /a result4=%~2 - %~1
set /a result5=(%~2 - %~1) * (%~1 - %~2)
echo %~1 + %~2 = %result1%
echo %~1 * %~2 = %result2%
echo %~3 / %~2 = %result3%
echo %~2 - %~1 = %result4%
echo (%~2 - %~1) * (%~1 - %~2) = %result5%
pause