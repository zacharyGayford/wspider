@echo off

cls

if not exist bin mkdir bin
set target=%1
if [%target%]==[] (
    set target=main
)

pushd bin

cmake .. --preset default
move compile_commands.json ../src
ninja && main.exe

popd 
