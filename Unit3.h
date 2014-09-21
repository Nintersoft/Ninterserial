//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Memo.hpp>
//---------------------------------------------------------------------------
class TfrmConf : public TForm
{
__published:	// IDE-managed Components
	TNumberBox *cnPorta;
	TLabel *lblComPort;
	TButton *bnDefinir;
	TGroupBox *gbCon;
	TGroupBox *gbInter;
	TCheckBox *cbEnvDad;
	TButton *bnRest;
	TSpeedButton *sbAjPorta;
	TMemo *mmData;
	void __fastcall bnDefinirClick(TObject *Sender);
	void __fastcall bnRestClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmConf(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmConf *frmConf;
//---------------------------------------------------------------------------
#endif
