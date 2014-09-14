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
   //endere�o da porta a ser acessada (COM1)
   //porta foi declarado como HANDLE na se��o private da declara��o de classe Form
   //HANDLE porta
   porta = CreateFile(pcCommPort,GENERIC_READ+GENERIC_WRITE,0,NULL,OPEN_EXISTING,0,NULL);
   if(porta == INVALID_HANDLE_VALUE){
		frmPrincipal->lblUltimoReg->Text = "A porta n�o existe ou est� indispon�vel, n�o foi poss�vel acess�-la";
		frmLog->mmLog->ReadOnly = False;
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
		frmLog->mmLog->ReadOnly = True;
		throw Exception("N�o foi poss�vel abrir a porta COM.\nPor favor, tente novamente!");
	}

   //Tempo m�ximo entre o recebimento de 2 bytes (ms)
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
	  frmPrincipal->lblUltimoReg->Text = "Erro na configura��o do Timeout, opera��o abortada";
	  frmLog->mmLog->ReadOnly = False;
	  frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
	  frmLog->mmLog->ReadOnly = True;
	  throw Exception("Erro na configura��o de Timeout");
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
		frmPrincipal->spStatusInd->Visible = False;		frmPrincipal->lblUltimoReg->Text = "Erro ao acessar a porta, opera��o abortada";
		frmLog->mmLog->ReadOnly = False;
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
		frmLog->mmLog->ReadOnly = True;
		throw Exception("Erro na Configura��o da porta");
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
	lblUltimoReg->Text = "Aguardando libera��o de porta - Esperando comando...";
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

