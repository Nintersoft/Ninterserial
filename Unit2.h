//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TfrmLog : public TForm
{
__published:	// IDE-managed Components
	TMemo *mmLog;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmLog(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmLog *frmLog;
//---------------------------------------------------------------------------
#endif
