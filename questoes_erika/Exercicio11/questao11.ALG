Algoritmo "serie_fetuccine"

Var
   // Se��o de Declara��es das vari�veis
   a,b,k,i:inteiro


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
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