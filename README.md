![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Makefile](https://img.shields.io/badge/Build-Makefile-blue?style=for-the-badge&logo=gnu&logoColor=white)


## Indice 
- [Sobre o Projeto](#sobre-o-projeto)
- [Arquivos Principais](#arquivos-principais)
  - [ft_printf.h](#ft_printfh)
  - [ft_putchar_fd.c](#ft_putchar_fdc)
  - [ft_putstr_fd.c](#ft_putstr_fdc)
  - [ft_putnbr.c](#ft_putnbrc)
  - [ft_putptr_fd.c](#ft_putptr_fdc)
  - [ft_unsigned.c](#ft_unsignedc)
  - [ft_to_hex.c](#ft_to_hexc)

# ft_printf

Uma implementação personalizada da função `printf` em C.

## Instruções de Instalação

Para compilar e instalar a biblioteca `ft_printf`, siga os passos abaixo:

### 1. Clonar o repositório

Clone o repositório utilizando o comando:

```bash
git clone https://github.com/GustavonBrito/ft_printf.git
```

### 2. Compilar a biblioteca

Utilize o Makefile fornecido para compilar a biblioteca. No diretório raiz do projeto, execute:
```bash
make
```

### 3. Limpar arquivos compilados

Para remover os arquivos objeto gerados durante a compilação, execute:
```bash
make clean
```

### 4. Remover todos os arquivos compilados e a biblioteca

Para remover todos os arquivos objeto e a biblioteca compilada, execute:
```bash
make fclean
```

### 5. Recompilar a biblioteca

Para limpar e recompilar a biblioteca do zero, execute:
```bash
make re
```

### 6. Usar a biblioteca em seu projeto

Inclua o cabeçalho ft_printf.h no seu código e compile seu projeto com a biblioteca libftprintf.a. Exemplo:
```C
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, World!\n");
    return 0;
}
```

### 7. Entre no diretório do projeto:
```bash
cd src
```

### 8. Compile seu projeto com o seguinte comando:
```bash
cc -o arquivo_de_saida src/ft_printf.c libftprintf.a
```

### 9. Execute o projeto:
```bash
./arquivo_de_saida
```

# Sobre o Projeto
Implementar a função ft_printf excelente para explorar diversos aspectos da linguagem C, como manipulação de variáveis variádicas, formatação de strings e conversão de tipos de dados. A função ft_printf é uma das mais utilizadas no desenvolvimento de software, especialmente quando estamos debugando o código, tornando-se uma ferramenta indispensável no dia a dia de um programador.

# Arquivos Principais
ft_printf.c
Este arquivo contém a implementação principal da função ft_printf. A função ft_printf percorre a string de formato, identifica os especificadores de formato e chama as funções apropriadas para tratar cada tipo de dado.

## ft_printf.h
Este arquivo de cabeçalho contém as declarações das funções utilizadas no projeto, bem como as inclusões de bibliotecas necessárias.

## ft_putchar_fd.c
Implementa a função ft_putchar_fd, que escreve um caractere no descritor de arquivo especificado.

## ft_putstr_fd.c
Implementa a função ft_putstr_fd, que escreve uma string no descritor de arquivo especificado.

## ft_putnbr.c
Implementa a função ft_putnbr, que escreve um número inteiro no descritor de arquivo especificado.

## ft_putptr_fd.c
Implementa a função ft_putptr_fd, que escreve um ponteiro no descritor de arquivo especificado, formatando-o como um endereço hexadecimal.

## ft_unsigned.c
Implementa a função ft_unsigned, que escreve um número inteiro sem sinal no descritor de arquivo especificado.

## ft_to_hex.c
Implementa a função ft_to_hex, que converte um número inteiro em sua representação hexadecimal e escreve no descritor de arquivo especificado.