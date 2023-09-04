@echo off

cls

if not exist bin mkdir bin
set target=%1
if [%target%]==[] (
    set target=default
)

cmake -B bin -S . --preset %target%
move bin/compile_commands.json src

ninja -C bin && .\bin\main.exe
