@echo off
chcp 65001
cls
for %%A in ("%~dpnx0") do (
  set "FileName=%%~nA"
)

for /f "tokens=1-2" %%B in ('dir /tc "%FilePath%" ^| find "%FileName%"') do (
  set "FileCreateDateDate=%%B"
  set "FileCreateTime=%%C"
)

echo --Имя этого файла: %~nx0
echo --Этот bat-файл создан: %FileCreateDateDate% %FileCreateTime%
echo --Путь bat-файл: %~dp0
pause