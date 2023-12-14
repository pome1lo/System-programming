@echo off
chcp 65001

echo -- строка параметров: %1 %2
echo -- файл: %2
echo -- режим: %1

if "%1" EQU "" goto error
if "%1" EQU "создать" goto create
if "%1" EQU "удалить" goto delete
if "%1" NEQ "удалить" goto errorl
if "%1" NEQ "создать" goto errorl

:create
if "%2" NEQ "" goto checkFileToCreate
echo - не задано имя файла
goto exit

:checkFileToCreate
if exist %2 (goto existFile)
copy NUL %2
echo - файл %2 создан
goto exit

:existFile
echo - файл %2 уже существует
goto exit

:delete
if "%2" NEQ "" goto checkFileToDelete
echo - не задано имя файла
goto exit

:checkFileToDelete
if not exist %2 (goto notFoundFile)
del %2
echo - файл %2 удален
goto exit

:notFoundFile
echo - файл %2 не найден
goto exit

:error
echo - %0 mode file
echo - mode = {создать, удалить}
echo - file = filename
goto exit

:errorl
echo - неверный режим
goto exit

:exit