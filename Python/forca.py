import random
import sys

def jogo_forca(palavra_secreta):
    ganhou = False
    perdeu = False
    erros = 0
    palavra_completa = []

    for letra in palavra_secreta:
        palavra_completa.append("_")

    while ganhou != True or perdeu != True:
        letra_chute = input("Digite uma letra: ")
        if letra_chute in palavra_secreta:
            posicao = 0
            for letra in palavra_secreta:
                if letra == letra_chute:
                    palavra_completa[posicao] = letra
                    print(palavra_completa)
            
                posicao += 1

        else:
            erros += 1
            print(erros, "/ 6")

        if not "_" in palavra_completa:
            ganhou = True
            print("Você ganhou.")
            break
        elif erros >= 6:
            perdeu = True
            print("Você perdeu.")
            break


jogo_forca("carro")
