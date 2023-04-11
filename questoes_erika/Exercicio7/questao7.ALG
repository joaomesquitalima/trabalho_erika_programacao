Algoritmo "Questao 7"

Var

salario,prestacao:real

Inicio
escreval("Informe seu salario bruto: ")
leia(salario)

escreval("Informe o valor da prestacao: ")
leia(prestacao)

se (prestacao <= salario*0.3) entao
   escreval("Emprestimo Aprovado.")
senao
   escreval("Emprestimo Negado.")
fimse

Fimalgoritmo