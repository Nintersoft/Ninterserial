//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmConf *frmConf;
//---------------------------------------------------------------------------
__fastcall TfrmConf::TfrmConf(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmConf::bnDefinirClick(TObject *Sender)
{
	frmPrincipal->lblPorta->Text = cnPorta->Text;
	mmData->Lines->Clear();
	mmData->Lines->Add(cnPorta->Text);
	if (cbEnvDad->IsChecked == true) {
		frmPrincipal->btEnviar->Visible = false;
		mmData->Lines->Add("verdadeiro");
	}
	else {
		frmPrincipal->btEnviar->Visible = true;
		mmData->Lines->Add("falso");
	}
	frmPrincipal->swPersona->IsChecked = true;
	if (cnPorta->Text == "0" &&	cbEnvDad->IsChecked == false){
		frmPrincipal->swPersona->IsChecked = false;
	}
	frmConf->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmConf::bnRestClick(TObject *Sender)
{
	cnPorta->Text = "0";
	cbEnvDad->IsChecked = false;
}
//---------------------------------------------------------------------------

