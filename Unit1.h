//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Menus.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Dialogs.hpp>
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *gbControle;
	TButton *btAbrir;
	TButton *btLiberar;
	TStatusBar *BarraStatus;
	TLabel *lblStatusL;
	TCircle *spStatus;
	TLabel *lblStatus;
	TMenuBar *BarraCardapio;
	TLabel *lblLog;
	TMenuItem *bcArquivo;
	TMenuItem *bcFerramentas;
	TMenuItem *bcAjuda;
	TMenuItem *bcSobre;
	TMenuItem *bcAjuda1;
	TMenuItem *bcLog;
	TMenuItem *bcAbrirPorta;
	TMenuItem *bcFecharPorta;
	TMenuItem *bcDiv;
	TMenuItem *bcSalvar;
	TMenuItem *bcDiv1;
	TMenuItem *bcConfig;
	TLabel *lblUltimoReg;
	TCircle *spLig;
	TCircle *spStatusInd;
	TMenuItem *bcSalvarComo;
	TSaveDialog *bfSalvar;
	TMenuItem *bcLogs;
	TMenuItem *bcSalvarLog;
	TMenuItem *bcAbrirSessao;
	TSaveDialog *bfSalvarSec;
	TOpenDialog *bfAbrirSessao;
	TGroupBox *GroupBox1;
	TButton *btConfig;
	TLabel *lblNomePorta;
	TLabel *lblPorta;
	void __fastcall btAbrirClick(TObject *Sender);
	void __fastcall btLiberarClick(TObject *Sender);
	void __fastcall bcAbrirPortaClick(TObject *Sender);
	void __fastcall bcFecharPortaClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall bcLogClick(TObject *Sender);
	void __fastcall bcSalvarLogClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
