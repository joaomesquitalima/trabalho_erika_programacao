Algoritmo "Questao 9"


Var
   maior,a,n,i,idade,mulheres:inteiro;
   idades_m:inteiro

   percentual,deninter:real

   sexo,cabelo,olho:caractere;

inicio
      idades_m <- 0

   enquanto idade >= 0 faca

      escreval("informe o sexo [m/f]: ")
      leia(sexo)
      escreval("informe a cor dos olhos [1-azuis/2-verdes/3-castanhos]: ")
      leia(olho)
      escreval("informe a cor do cabelo [1-louro/2-castanho/3-pretos]:  ")
      leia(cabelo)
      escreval("informe sua idade: ")
      leia(idade)




      se (sexo = "F") ou (sexo = "f") entao
         mulheres <- mulheres +1

         se((idade>=18) e (idade<=35)) então
            se((olho = 2) e (cabelo = 1)) então
               deninter++
            fimse
         fimse

      fimse

      se (idade = -1) então
         interrompa
      fimse


      se idade > idades_m entao
         idades_m <- idade
      fimse
      se mulheres > 0 entao
       percentual <- (deninter*100)/mulheres
      fimse

   fimenquanto




      Escreval("A maior idade dos habitantes e: ",maior)
      Escreval("A percentagem de mulheres com idade entre 18-35, olhos verdes e cabelos louros e: ",percentual," %")
      fimalgoritmo
    