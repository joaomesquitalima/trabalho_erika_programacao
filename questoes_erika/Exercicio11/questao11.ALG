Algoritmo "serie_fetuccine"

Var
   // Seção de Declarações das variáveis
   a,b,k,i:inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   i <- 3
   escreval("Insira o primeiro termo da sequencia")
   leia(a)
   escreval("Insira o segundo termo da sequencia")
   leia(b)

   para i de 1 ate 11 faca

      se i%2 = 0 entao
         k <- a - b
      senao
           k <- a + b
      fimse
      
      a <- b
      b <- k
      escreval(k)
      

   fimpara

Fimalgoritmo