#include <stdio.h>

int main(void) { 
// Atividade01
 float custoFabrica, distribuidor, impostos, totalCarro,impoDecimal, distDecimal;
 // Entrada de dados (inserir o valor da temperatura)
printf("\n Informe o valor do custo da fábrica: ");
  scanf("%f",&custoFabrica);
printf("\n Informe o percentual de impostos: ");
  scanf("%f",&impostos);
printf("\n Informe o percentual do distribuidor: ");
  scanf("%f",&distribuidor);
 //processamento dos dados
 impoDecimal = (impostos * custoFabrica )/ 100;
 distDecimal = (distribuidor * custoFabrica) / 100;

 totalCarro = custoFabrica + impoDecimal + distDecimal; 
 //saida
  printf("\n Valor total do carro (em mil):%.2f" , totalCarro);
  printf("\n Valor do distribuidor (em mil): %.1f" ,distDecimal);
printf("\n Percentual do distribuidor (em %): %.f" ,distribuidor);

  printf("\n Valor dos impostos (em mil): %.1f",impoDecimal);
//#######################################//
// Atividade02
 float nota1, nota2, nota3, mediaParcial, mediaFinal;
 // Entrada de dados (inserir o valor da temperatura)
printf("\n Informe a nota 1 do aluno: ");
  scanf("%f",&nota1);
printf("\n Informe a nota 2 do aluno: ");
  scanf("%f",&nota2);
printf("\n Informe a nota 3 do aluno: ");
  scanf("%f",&nota3);
 //processamento dos dados
 mediaParcial = (nota1 * 2) + (nota2 * 3) + (nota3 * 5) ;

 mediaFinal = mediaParcial / 10; 
 //saida
  printf("\n Média final :%2.f" , mediaFinal); 
//##############################//
//Atividade03
//É um dado que será utilizado na execução de um programa, ou processo, ela pode ser temporária ou definitiva. Ela pode ser dos tipos inteiros, strings, char, float, double, deve ser declarada com seu tipo seguido do seu valor, ela ocupa um espaço na memória do computador assim que declarada, sendo usada, ou não, podendo esse valor armazanada sofrer alterações.  
//###############################//
// Atividade04 
 float temperatureCelsius, temperatureFarenheit, temperatureKelvin;
 // Entrada de dados (inserir o valor da temperatura)
  printf("\n Informe a temperatura em Celsius: ");
  scanf("%f",&temperatureCelsius);

 //processamento dos dados
temperatureKelvin = temperatureCelsius + 273.15;

temperatureFarenheit= (temperatureCelsius * 1.8) + 32;  
 //saida
  printf("\n Temperatura em graus Farenheit = %.2f\n", temperatureFarenheit); 
  printf("\n Temperatura em graus Kelvin = %.2f\n", temperatureKelvin);
//#################################//
// Atividade05
 float cotacaoDolar, cotacaoEuro, real, dolar, euro;
 // Entrada de dados
printf("\n Informe o valor da cotação do dolar: ");
  scanf("%f",&cotacaoDolar);
  printf("\n Informe o valor da cotação do euro: ");
  scanf("%f",&cotacaoEuro);
printf("\n Informe o valor em Reais a ser convertido:");
  scanf("%f",&real);
  
 //processamento dos dados
dolar = real / cotacaoDolar;
euro = real / cotacaoEuro;  
  
 //saida
printf("\n Valor convertido em Dollar: %.2f", dolar);
printf("\n Valor convertido em Euro: %.2f", euro);  
//###################################//// Atividade05
 int numero, meses, dias, horas, minutos;
 // Entrada de dados
printf("\nDigite um número que corresponda aos anos: ");
  scanf("%d",&numero);  
 //processamento dos dados
 meses = (numero * 12);
 dias = (numero * 365);
 horas = (numero * 8760);
 minutos = (numero * 525600); 
 //saida
printf("\nNúmero de meses: %d" , meses);
printf("\nNúmero de dias: %d" , dias);
printf("\nNúmero de horas: %d" , horas);
printf("\nNúmero de minutos: %d" , minutos);  
}
