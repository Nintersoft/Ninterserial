//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include<string.h>
#include<stdio.h>

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#define TAMANHO 100
TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
void abrirporta();

//---------------------------------------------------------------------------
handle_t porta;
COMMTIMEOUTS tempos;
DCB configuracao;
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void abrirporta(){
   wchar_t pcCommPort[]= TEXT("COM1");
   //endereço da porta a ser acessada (COM1)
   //porta foi declarado como HANDLE na seção private da declaração de classe Form
   //HANDLE porta
   porta = CreateFile(pcCommPort,GENERIC_READ+GENERIC_WRITE,0,NULL,OPEN_EXISTING,0,NULL);
   if(porta == INVALID_HANDLE_VALUE){
		frmPrincipal->lblUltimoReg->Text = "A porta não existe ou está indisponível, não foi possível acessá-la";
		frmLog->mmLog->ReadOnly = False;
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
		frmLog->mmLog->ReadOnly = True;
		throw Exception("Não foi possível abrir a porta COM.\nPor favor, tente novamente!");
	}

   //Tempo máximo entre o recebimento de 2 bytes (ms)
   tempos.ReadIntervalTimeout = 20;

   //Multiplicador de tempo de recebimento por byte
   tempos.ReadTotalTimeoutMultiplier = 0;
   tempos.ReadTotalTimeoutConstant = 100;
   tempos.WriteTotalTimeoutMultiplier = 0;
   tempos.WriteTotalTimeoutConstant = 100;
   if(!SetCommTimeouts(porta ,&tempos))
   {
	  CloseHandle(porta);
	  frmPrincipal->spLig->Visible = False;
	  frmPrincipal->spStatusInd->Visible = False;
	  frmPrincipal->lblUltimoReg->Text = "Erro na configuração do Timeout, operação abortada";
	  frmLog->mmLog->ReadOnly = False;
	  frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
	  frmLog->mmLog->ReadOnly = True;
	  throw Exception("Erro na configuração de Timeout");
   }

   GetCommState(porta, &configuracao);

   configuracao.BaudRate = 19200;
   configuracao.ByteSize = 8;
   configuracao.Parity = NOPARITY;
   configuracao.StopBits = ONESTOPBIT;

   if(!SetCommState(porta,&configuracao))
   {
		CloseHandle(porta);
		frmPrincipal->spLig->Visible = False;
		frmPrincipal->spStatusInd->Visible = False;		frmPrincipal->lblUltimoReg->Text = "Erro ao acessar a porta, operação abortada";
		frmLog->mmLog->ReadOnly = False;
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
		frmLog->mmLog->ReadOnly = True;
		throw Exception("Erro na Configuração da porta");
   }
	frmPrincipal->spLig->Visible = True;
	frmPrincipal->spStatusInd->Visible = False;
	frmPrincipal->lblUltimoReg->Text = "Porta aberta com sucesso";
	frmLog->mmLog->ReadOnly = False;
	frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
	frmLog->mmLog->ReadOnly = True;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btAbrirClick(TObject *Sender)
{
	abrirporta();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btLiberarClick(TObject *Sender)
{
	CloseHandle(porta);
	frmPrincipal->spLig->Visible = False;
	frmPrincipal->spStatusInd->Visible = False;
	lblUltimoReg->Text = "Porta fechada";
	frmLog->mmLog->ReadOnly = False;
	frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +lblUltimoReg->Text);
	frmLog->mmLog->ReadOnly = True;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::bcAbrirPortaClick(TObject *Sender)
{
	abrirporta();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::bcFecharPortaClick(TObject *Sender)
{
	CloseHandle(porta);
	frmPrincipal->spLig->Visible = False;
	frmPrincipal->spStatusInd->Visible = False;	lblUltimoReg->Text = "Porta fechada";
	frmLog->mmLog->ReadOnly = False;
	frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +lblUltimoReg->Text);
	frmLog->mmLog->ReadOnly = True;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::FormShow(TObject *Sender)
{
	frmLog->mmLog->ReadOnly = False;
	frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +lblUltimoReg->Text);
	lblUltimoReg->Text = "Aguardando liberação de porta - Esperando comando...";
	frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +lblUltimoReg->Text);
	frmLog->mmLog->ReadOnly = True;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::bcLogClick(TObject *Sender)
{
	frmLog->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::bcSalvarLogClick(TObject *Sender)
{
	if (bfSalvar->Execute()) {
		frmLog->mmLog->Lines->SaveToFile(bfSalvar->FileName);
	}
}
//---------------------------------------------------------------------------

