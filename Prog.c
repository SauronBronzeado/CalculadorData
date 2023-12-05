#include <stdio.h>
#include <stdlib.h>

const int Bissexto = 2020;
const int RefAno = 2021;
const int RefDia = 6;
// sexta feira 01/01/2021

const int janeiro = 31;
const int fevereiro = 28;
const int marco = 31;
const int abril = 30;
const int maio = 31;
const int junho = 30;
const int julho = 31;
const int agosto = 31;
const int setembro = 30;
const int outubro = 31;
const int novembro = 30;
const int dezembro = 31;

const int domingo = 1;
const int segunda = 2;
const int terca = 3;
const int quarta = 4;
const int quinta = 5;
const int sexta = 6;
const int sabado = 7;

int AnoAtual = 2023;
int MesAtual = 01;
int DiaAtual = 01;
int DiaDaSemanaAtual;
int SemanaAtual;

int main()
{
	int AuxCalculoBissexto;
	int FlagBissexto;
	int DiaCorrido;
	int AuxDias;
	int UmDeJaneiro;
	int AuxSoma = 0;
	int AuxDifAnos;
	int AuxSemana;
	int Valido = 0;
	
	// =====  Input de Dado Ano  =====
	// Input Ano
	while(1)
	{
		printf("Digite o Ano ");
		scanf("%u", &AnoAtual);
		if(AnoAtual > 1600 && AnoAtual < 3000)
		break;
		else
		printf("Ano Invalido \n");
	}
	system("cls");
	
		// Calculo Ano Bissexto
	AuxCalculoBissexto = (AnoAtual - 			Bissexto) % 4;
	if (AuxCalculoBissexto == 0)
		FlagBissexto = 1;
	else
		FlagBissexto = 0;
	
	//Input Mes 
	while(1)
	{
	printf("Digite o Mes ");
	scanf("%u", &MesAtual);
	if(MesAtual > 0 &&  MesAtual <= 12)
	break;
	else
	printf("Mes Invalido \n");
	}
	system("cls");
	
	while(1)
	{
	printf("Digite o Dia ");
	scanf("%u", &DiaAtual);
	
	
	if( MesAtual == 1 || 
		 MesAtual == 3 || 
		 MesAtual == 5 ||
		 MesAtual == 7 ||
		 MesAtual == 8 || 
		 MesAtual == 10 ||
		 MesAtual == 12 )
	{
		if(DiaAtual > 0 && DiaAtual <= 31)
		break;
		else
		printf("Dia Invalido \n");
	}
	
	if(MesAtual == 4 ||
		MesAtual == 6 || 
		MesAtual == 9 ||
		MesAtual == 11 )
	{
		if(DiaAtual > 0 && DiaAtual < 31)
		break;
		else
		printf("Dia Invalido \n");
	}
	
	if(MesAtual == 2)
	{
		if( DiaAtual > 0 && DiaAtual <= 28 +			FlagBissexto)
		break;
		else
		printf("Dia Invalido \n");
	}
	}
	system("cls");
	// ===== Calculo 1 de Janeiro =====

	AuxDifAnos = abs(AnoAtual - RefAno);
	//Ano Positivo
	if (AnoAtual >= RefAno)
		UmDeJaneiro = (6 + AuxDifAnos + AuxDifAnos / 4) % 7;
	//Ano Negativo
	else
		UmDeJaneiro = 6 - (AuxDifAnos + (4 + AuxDifAnos - 1) / 4) % 7;

	//=====  Calculo Ano Bissexto =====
	AuxCalculoBissexto = (AnoAtual - Bissexto) % 4;

	if (AuxCalculoBissexto == 0)
		FlagBissexto = 1;
	else
		FlagBissexto = 0;
	// ============================
	printf("Data %d", DiaAtual);
	printf(" / %d", MesAtual);
	printf(" / %d \n\n", AnoAtual);

	//=====  Calculo Dia Corrente =====
	printf("Mês atual: ");
	switch (MesAtual)
	{
	case 0:
		AuxDias = 0;
		printf("Nulo\n");
		break;

	case 1:
		AuxDias = 0;
		printf("Janeiro\n");
		break;

	case 2:
		AuxDias = janeiro;
		printf("Fevereiro\n");
		break;

	case 3:
		AuxDias = janeiro + fevereiro + FlagBissexto;
		printf("Março\n");
		break;

	case 4:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco;
		printf("Abril\n");
		break;

	case 5:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril;
		printf("Maio\n");
		break;

	case 6:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio;
		printf("Junho\n");
		break;

	case 7:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio + junho;
		printf("Julho\n");
		break;

	case 8:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio + junho + julho;
		printf("Agosto\n");
		break;

	case 9:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio + junho + julho + agosto;
		printf("Setembro\n");
		break;

	case 10:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio + junho + julho + agosto + setembro;
		printf("Outubro\n");
		break;

	case 11:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio + junho + julho + agosto + setembro + outubro;
		printf("Novembro\n");
		break;

	case 12:
		AuxDias = janeiro + fevereiro + FlagBissexto + marco + abril + maio + junho + julho + agosto + setembro + outubro + novembro;
		printf("Dezembro\n");
		break;

	default:
		AuxDias = 0;
		printf("Valor Invalido\n");
	}
	DiaCorrido = DiaAtual + AuxDias;
	printf("Dias Corridos: %d\n", DiaCorrido);
	// ============================

	//=====  Calculo Dia da Semana =====

	switch (UmDeJaneiro)
	{
	case 0:
		AuxSoma = 6;
		break; //sabado
	case 1:
		AuxSoma = 0;
		break; //domingo
	case 2:
		AuxSoma = 1;
		break; //segunda
	case 3:
		AuxSoma = 2;
		break; //terça
	case 4:
		AuxSoma = 3;
		break; //quarta
	case 5:
		AuxSoma = 4;
		break; //quinta
	case 6:
		AuxSoma = 5;
		break; //sexta
	case 7:
		AuxSoma = 6;
		break; //sabado
	default:
		printf("Valor de Semana Invalido \n");
	}
	DiaDaSemanaAtual = (DiaCorrido % 7) + AuxSoma;

	if (DiaDaSemanaAtual == 0)
		printf("Sabado\n");

	if (DiaDaSemanaAtual == 1)
		printf("Domingo\n");

	if (DiaDaSemanaAtual == 2)
		printf("Segunda Feira\n");

	if (DiaDaSemanaAtual == 3)
		printf("Terça Feira\n");

	if (DiaDaSemanaAtual == 4)
		printf("Quarta Feira\n");

	if (DiaDaSemanaAtual == 5)
		printf("Quinta Feira\n");

	if (DiaDaSemanaAtual == 6)
		printf("Sexta Feira\n");

	if (DiaDaSemanaAtual == 7)
		printf("Sabado\n");

	//=====  Calculo  Semana =====
	AuxSemana = UmDeJaneiro - 1;

	SemanaAtual = (DiaCorrido + AuxSemana) / 7 + 1;

	printf("Semana: %d\n", SemanaAtual);
}
