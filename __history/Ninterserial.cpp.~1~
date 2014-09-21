//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", frmPrincipal);
USEFORM("Unit2.cpp", frmLog);
USEFORM("Unit3.cpp", Form3);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->CreateForm(__classid(TfrmLog), &frmLog);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
