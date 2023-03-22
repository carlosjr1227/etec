                         //=====================================================================================
// Nomes: xxxxxxxxxxxxxxx e xxxxxxxxxxxxxxxx
// Aula 01: Introdu��o ao Microcontrolador PIC18F4550A
//
//=====================================================================================

//=====================================================================================
//                                BIBLIOTECAS
//=====================================================================================


//=====================================================================================
//                                DEFINI��ES DE HARDWARE
//=====================================================================================
//Declara��o dos ports

//*******************************
// PORTA , do RA0 at� RA6
//*******************************
// Exemplo:  sbit NOME at PORTA.BIT (B0, B1, B2, B3, B4, B5, B6 OU B7)

        sbit BOTAO1 at PORTA.b0;
        sbit BOTAO2 at PORTA.b1;
//*******************************
// PORTB , do RB0 at� RB7
//*******************************


//*******************************
// PORTC , do RC0,RC1,RC2,RC4,RC5,RC6 e RC7
//*******************************

//Exemplo:  sbit NOME at PORTC.BIT (B0, B1, B2, B3, B4, B5, B6 OU B7)

    sbit B1 at PORTC.b0;
    sbit B2 at PORTC.b1;
//*******************************
// PORTD , do RD0 at� RD7
//*******************************



//*******************************
// PORTE , do RE0 at� RE3
//*******************************



//=====================================================================================
//                                                DEFINI��ES DE CONSTANTES
//=====================================================================================

// const NUMERO = 15;



//=====================================================================================
//                                DECLARA��O DAS VARI�VEIS  GLOBAIS
//=====================================================================================

// int contador;

//=====================================================================================
//                        DECLARA��O DAS ROTINAS
//=====================================================================================
// void teste(void)
// {

//  }



//=====================================================================================
//                        Verifica��o das INTERRUP��ES
//=====================================================================================
// void interrupt()
// {
     ///////////////////////////////////////////////////////////////////////////
         //Trata Interrup��o  **************************************************
     ///////////////////////////////////////////////////////////////////////////

//


//=====================================================================================
//                                PROGRAMA PRINCIPAL
//=====================================================================================
void main (void)
{
// Declara��o de vari�veis locais


// Registradores de Configura��o:

        ADCON1 |= 0x0F;
        CMCON  |= 7;

// Configura��o dos PORTS de Entrada e Saida
// 0 -> configura o BIT como Sa�da
// 1 -> configura o BIT como Entrada
     TRISA=0b11111111;// porta entrada
      TRISC=0b0;//portc como saida

        // zera as saidas


//********************************************************************
//Inicio do Loop principal
//********************************************************************
        while (1)
        { // aqui deve ser colocado o seu programa

          if(BOTAO1==1)
          {
          B1=1;
          }
          else
          {
          B1=0;
          }
          if(BOTAO2==1)
          {
          B2=1;
          delay_ms(3000);
          B2=0;






        }//fecha o while
}//fecha o void mainvoid main

// projeto criado na ETEC//