# 💻 Fundamentos da Programação

Projetos em **C** desenvolvidos no 2º semestre, praticando os conceitos básicos da programação: variáveis, condicionais, laços, vetores, funções e structs.

## 📁 Projetos

| # | Projeto | O que faz | Conceitos |
|---|---------|-----------|-----------|
| 01 | [Calculadora](01_calculadora.c) | Menu com as 4 operações básicas | funções, `switch`, `do-while` |
| 02 | [Média de notas](02_media_notas.c) | Calcula média, maior e menor nota e a situação do aluno | vetores, `for`, `if/else` |
| 03 | [Adivinhe o número](03_adivinhe_o_numero.c) | Jogo: acerte o número de 1 a 100 com dicas | `rand`, `while`, contador |
| 04 | [Cadastro de alunos](04_cadastro_alunos.c) | Cadastra, lista e busca alunos | `struct`, strings, `strcmp` |
| 05 | [Funções matemáticas](05_funcoes_matematicas.c) | Fatorial, número primo e Fibonacci | funções, recursão |

## ▶️ Como rodar

**No Dev-C++:** abra o arquivo `.c`, aperte `F11` (compilar e executar).

**No terminal (GCC):**

```bash
gcc 01_calculadora.c -o calculadora
./calculadora        # no Windows: calculadora.exe
```

## 📝 Detalhes de cada projeto

### 01 · Calculadora
Mostra um menu e executa soma, subtração, multiplicação ou divisão. Trata divisão por zero e opção inválida.

### 02 · Média de notas
Lê até 10 notas, calcula a média e mostra a situação:
- média ≥ 7 → **Aprovado**
- média ≥ 5 → **Recuperação**
- abaixo disso → **Reprovado**

### 03 · Adivinhe o número
O computador sorteia um número de 1 a 100. A cada palpite, o jogo diz se o número é maior ou menor, e no final mostra quantas tentativas você usou.

### 04 · Cadastro de alunos
Um mini sistema com menu: cadastrar (nome, idade, nota), listar em tabela e buscar por nome. Guarda até 50 alunos.

### 05 · Funções matemáticas
Cada cálculo é uma função separada:
- `fatorial(n)`: com laço `for` (limite de 20 para não estourar o `long`)
- `ehPrimo(n)`: testa divisores até a raiz do número
- `fibonacci(n)`: versão recursiva

## 🧠 O que aprendi

- Organizar o código em funções
- Controlar o fluxo com `if`, `switch`, `for`, `while` e `do-while`
- Guardar vários dados com vetores e `struct`
- Receber e validar dados do usuário com `scanf`

## 🚀 Próximos passos

- [ ] Salvar o cadastro de alunos em arquivo
- [ ] Adicionar remoção e edição no cadastro
- [ ] Criar um jogo da forca

---
Feito por **Mila Ladislau** · [GitHub](https://github.com/ludmilaladislau) · [LinkedIn](https://linkedin.com/in/ludmila-ladislau-2ab0562a7)
