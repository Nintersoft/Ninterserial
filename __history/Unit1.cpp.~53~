//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include<string.h>
#include<stdio.h>
#include<ioutils.hpp>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#define TAMANHO 100
TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
void transferirdados(int);
void log(int);
void abrirporta();
void enviar_botao();
void enviar_individual(int);
char destinatario();
char comandos();
//---------------------------------------------------------------------------
handle_t porta;
COMMTIMEOUTS tempos;
DCB configuracao;
//---------------------------------------------------------------------------

String Arquivo;
int coluna=0;
unsigned long tamanho_escrito,tamanho_lido;
char PACOTE[3];
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void abrirporta(){
   String pcCommPort = "COM" + frmPrincipal->lblPorta->Text;
   //endereço da porta a ser acessada (COM1)
   //porta foi declarado como HANDLE na seção private da declaração de classe Form
   //HANDLE porta
   porta = CreateFile(pcCommPort.c_str(),GENERIC_READ+GENERIC_WRITE,0,NULL,OPEN_EXISTING,0,NULL);
   if(porta == INVALID_HANDLE_VALUE){
		log(7);
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
	  log(6);
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
		frmPrincipal->spStatusInd->Visible = False;
		log(5);
		throw Exception("Erro na Configuração da porta");
   }
	frmPrincipal->spLig->Visible = True;
	frmPrincipal->spStatusInd->Visible = False;
	log(3);
	frmPrincipal->btEnviar->Enabled = true;
	frmPrincipal->swSaida1->Enabled = true;
	log(8);
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
	log(4);
	frmPrincipal->btEnviar->Enabled = true;
	frmPrincipal->swSaida1->Enabled = true;
	log(9);
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
	log(4);
	frmPrincipal->btEnviar->Enabled = false;
	frmPrincipal->swSaida1->Enabled = false;
	log(10);
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::FormShow(TObject *Sender)
{
	log(1);
	log(2);
	String DiretorioDados = System::Ioutils::TPath::Combine(Sysutils::GetEnvironmentVariable(L"APPDATA"), L"Nintersoft\\Ninterserial");
	TDirectory::CreateDirectory(DiretorioDados);

	String LocalArquivo = System::Ioutils::TPath::Combine(DiretorioDados, L"Conf.conf");
	if (TFile::Exists(LocalArquivo)){
		mmDados->Lines->LoadFromFile(LocalArquivo);
		transferirdados(0);
		log(12);
	}
	else {
		log(13);
		transferirdados(0);
	}
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

void __fastcall TfrmPrincipal::btEnviarClick(TObject *Sender)
{
	enviar_botao();
}
//---------------------------------------------------------------------------
void enviar_botao(){

	if (frmPrincipal->rbDestino1->IsChecked == true) {
		PACOTE[0] = '1';
	}
	else if (frmPrincipal->rbDestino2->IsChecked == true){
		PACOTE[0] = '2';
	}
	else if (frmPrincipal->rbDestino3->IsChecked == true){
		PACOTE[0] = '3';
	}
	else if (frmPrincipal->rbDestino4->IsChecked == true){
		PACOTE[0] = '4';
	}
	if (frmPrincipal->swSaida1->IsChecked == true) {
		PACOTE[1] = 'L';
	}
	if (frmPrincipal->swSaida1->IsChecked == true) {
		PACOTE[1] = 'D';
	}
		PACOTE[2] = NULL;

	// Porta correspondente ao handle obtido na inicialização
	// Transmissão do PACOTE pela porta serial (RS232)
	WriteFile(porta,PACOTE,3,&tamanho_escrito,NULL);

	// Limpeza do PACOTE após a transmissão
	for(int pos=0;pos<3;pos++){
		PACOTE[pos]=NULL;  // limpa PACOTE
	}
}
//---------------------------------------------------------------------------
void enviar_individual(){

	char comando, destino;

	destino = destinatario();
	PACOTE[0] = destino;
	comando = comandos();
	PACOTE[1] = comando;
	PACOTE[2] = NULL;
	WriteFile(porta,PACOTE,3,&tamanho_escrito,NULL);
	for(int pos=0;pos<3;pos++){
		PACOTE[pos]=NULL;
	}
}
//---------------------------------------------------------------------------
char destinatario(){
	char dest;
	if (frmPrincipal->rbDestino1->IsChecked == true) {
		dest = '1';
	}
	if (frmPrincipal->rbDestino2->IsChecked == true) {
		dest = '2';
	}
	if (frmPrincipal->rbDestino3->IsChecked == true) {
		dest = '3';
	}
	if (frmPrincipal->rbDestino4->IsChecked == true) {
		dest = '4';
	}
	return dest;
}
//---------------------------------------------------------------------------
char comandos(){
	char comand;
	if (frmPrincipal->swSaida1->IsChecked == true) {
		comand = 'L';
	}
	else {
		comand = 'D';
	}
	return comand;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::swSaida1Click(TObject *Sender)
{
	if (!btEnviar->Enabled) {
		enviar_individual();
	}
}
//---------------------------------------------------------------------------
void log(int a){
	frmLog->mmLog->ReadOnly = false;
	if (a == 1) {
		frmPrincipal->lblUltimoReg->Text = "Programa iniciado.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 2) {
		frmPrincipal->lblUltimoReg->Text = "Aguardando liberação de porta - Esperando carregamento de dados...";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 3) {
		frmPrincipal->lblUltimoReg->Text = "Porta aberta com sucesso.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 4) {
		frmPrincipal->lblUltimoReg->Text = "Porta COM" + frmPrincipal->lblPorta->Text + "fechada.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 5) {
		frmPrincipal->lblUltimoReg->Text = "Erro ao acessar a porta, operação abortada.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 6) {
		frmPrincipal->lblUltimoReg->Text = "Erro na configuração do Timeout, operação abortada.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 7) {
		frmPrincipal->lblUltimoReg->Text = "A porta COM" + frmPrincipal->lblPorta->Text +" não existe ou está indisponível, não foi possível acessá-la.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 8) {
		frmPrincipal->lblUltimoReg->Text = "Alternadores e botões liberados para uso - Aguardando comando...";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 9) {
		frmPrincipal->lblUltimoReg->Text = "Novas configurações definidas. Porta COM" + frmPrincipal->lblPorta->Text +". Comandos automáticos: " + frmConf->mmData->Lines->Strings[1] + ".";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 10) {
		frmPrincipal->lblUltimoReg->Text = "Alternadores e botões bloqueados.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 11) {
		frmPrincipal->lblUltimoReg->Text = "Dados da sessão carregados de: " + frmPrincipal->bfAbrirSessao->FileName + ".";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 12) {
		frmPrincipal->lblUltimoReg->Text = "Dados padrões da aplicação carregados, programa disponível para uso. Aguardando comando...";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 13) {
		frmPrincipal->lblUltimoReg->Text = "Os padrões não puderam ser pré carregados. Criando um novo arquivo...";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 14) {
		frmPrincipal->lblUltimoReg->Text = "Criando novos velores padrões para serem carregados na próxima inicialização.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 15) {
		frmPrincipal->lblUltimoReg->Text = "Sua sessão atual foi salva com sucesso.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else if (a == 16) {
		frmPrincipal->lblUltimoReg->Text = "Sua sessão atual não pode ser atualizada, pois, ainda não foi salva.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " + frmPrincipal->lblUltimoReg->Text);
	}
	else {
		frmPrincipal->lblUltimoReg->Text = "Evento desconhecido (Codigo do erro 0xNSS1) caso não haja solução contate nosso suporte.";
		frmLog->mmLog->Lines->Add(DateTimeToStr(Now())+ " - " +frmPrincipal->lblUltimoReg->Text);
	}
	frmLog->mmLog->ReadOnly = true;
	a = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btConfigClick(TObject *Sender)
{
	frmConf->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::swPersonaSwitch(TObject *Sender)
{
	log(9);
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::bcAbrirSessaoClick(TObject *Sender)
{
	if (bfAbrirSessao->Execute()) {
		Arquivo = bfAbrirSessao->FileName;
		if (Arquivo != NULL) {
			mmDados->Lines->LoadFromFile(bfAbrirSessao->FileName);
			frmConf->mmData->Lines->LoadFromFile(bfAbrirSessao->FileName);
		}
	}

	transferirdados(1);

	log(11);
}
//---------------------------------------------------------------------------

void transferirdados(int a){
	if (a != 1) {
		frmPrincipal->lblPorta->Text = "0";
		frmPrincipal->btEnviar->Visible = true;
		frmPrincipal->mmDados->Lines->Clear();
	}
	else {
		frmPrincipal->lblPorta->Text = frmConf->mmData->Lines->Strings[0];
		if (frmConf->mmData->Lines->Strings[1] == "verdadeiro") {
			frmPrincipal->btEnviar->Visible = false;
		}
		else{
			frmPrincipal->btEnviar->Visible = true;
		}
		if (frmConf->mmData->Lines->Strings[1] != "verdadeiro" && frmConf->mmData->Lines->Strings[1] != "falso" | frmConf->mmData->Lines->Strings[0] > "255") {
			log(14);
			frmConf->mmData->Lines->Strings[0] = "0";
			frmConf->mmData->Lines->Strings[1] = "falso";

			String DiretorioDados = System::Ioutils::TPath::Combine(Sysutils::GetEnvironmentVariable(L"APPDATA"), L"Nintersoft\\Ninterserial");
			String LocalArquivo = System::Ioutils::TPath::Combine(DiretorioDados, L"Conf.conf");
			frmConf->mmData->Lines->SaveToFile(LocalArquivo);
		}
	}
}

//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::bcSalvarClick(TObject *Sender)
{
	if (mmDados->Lines != frmConf->mmData->Lines && Arquivo != NULL) {
		mmDados->Lines->SaveToFile(Arquivo);
		log(15);
	}
	else {
		ShowMessage("Salve o arquivo no armazenamento antes de sobrescrever os dados...");
		log(16);
	}
}
//---------------------------------------------------------------------------

