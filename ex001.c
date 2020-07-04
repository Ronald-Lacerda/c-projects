#include <stdio.h>


    int ano_bissexto(int a){
        
        if(((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0)){
          return(1);
        }else {
            return(0);
        }
    
    }

    int verificar_data(int dia,int mes,int ano){
        if ((dia<=31) && (mes<=12) && ((ano>=1900) && (ano<=2100))){
            return(1);
        }else {
            return(0);
    }
    }

    int converter_data(int d, int m, int ano ){
        int aux;
        switch(m){
            case 1: 
                return(d);
                break;
            case 2:
                return((m-1) * 31 + d );
                break;
            case 3:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -2 + d);
                }else{
                return((m-1)*31 -3 + d);
                }    
                break;
            case 4:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -2 + d);
                    break;
                }else{
                return((m-1)*31 -3 + d);
                break;
                }   
                break;
            case 5:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -4 + d);
                }else{
                return((m-1)*31 -5 + d);
                }   
              case 6:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -4 + d);
                }else{
                return((m-1)*31 -5 + d);
                } 
            case 7:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -5 + d);
                }else{
                return((m-1)*31 -6 + d);
                }
            case 8:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -5 + d);
                }else{
                return((m-1)*31 -6 + d);
                }
            case 9:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -5 + d);
                }else{
                return((m-1)*31 -6 + d);
                }
            case 10:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -6 + d);
                }else{
                return((m-1)*31 -7 + d);
                }
            case 11:
                aux = ano_bissexto(ano);
                if (aux==0){
                    return((m-1)*31 -6 + d);
                }else{
                return((m-1)*31 -7  + d);
                }
            case 12:
                aux = ano_bissexto(ano);
                if (aux!=0){
                    return((m-1)*31 + d -7);
                }else{
                return((m-1)*31  + d -8);
                }
            
        }
    }



int main (){
    int dia, mes, ano, verificador, cv;

    
    REFAZ: printf("Digite uma data valida: \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    verificador = verificar_data(dia, mes, ano);
    if (verificador != 0){
        cv = converter_data(dia, mes, ano);
        printf("Corresponde ao %d º dia do ano\n", cv);
    }else  {
        printf("A data informada é invalida! Tente novamente \n");
        goto REFAZ;
    }



}



/*
Escreva um programa que pea trŒs inteiros, correspondentes a dia , mŒs e ano.
 Pea os nœmeros atØ conseguir valores que estejam na faixa correta (dias entre
  1 e 31, mŒs entre 1 e 12 e ano entre 1900 e 2100). Verifique se o mŒs e o
   nœmero de dias batem (incluindo verificaªo de anos bissextos). Se estiver 
   tudo certo imprima o nœmero que aquele dia corresponde no ano. Comente seu 
   programa.  PS: Um ano Ø bissexto se for divisvel por 4 e nªo for divisvel 
   por 100, exceto para os anos divisveis por 400, que tambØm sªo bissextos.  
   */ 