#!/bin/bash

CHALLENGE_DIR="challenge"

echo "Preparing env for new challenge..."

if [ -z "$1" ]; then  # Verifica se o primeiro argumento está vazio
    echo "usage: ./prepare.sh <(int) challenge_number>"
    echo "number of args: $#"
else
    if [[ "$1" =~ ^-?[0-9]+$ ]]; then  # Usa uma expressão regular para verificar se o argumento é um inteiro
        echo "Creating folders..."
        mkdir "$CHALLENGE_DIR$1"  # Cria a pasta concatenando o diretório e o número do desafio
        cd "$CHALLENGE_DIR$1"

        mkdir "ghidra_project"
        cd .. 
        echo "Ghidra project folder created."

        mkdir "problem"
        cd ..
        echo "Problem folder created."

        mkdir "reversed"
        touch "main.c"
        cd ..
        echo "Reversed folder and .c file created created."

        echo "ANNOTATIONS.MD created."
        touch "ANNOTATIONS.md"

        echo "Finishing..."
    else
        echo "The type of argument is not integer. Leaving."
    fi
fi
