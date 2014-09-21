//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit2.cpp", frmLog);
USEFORM("Unit3.cpp", frmConf);
USEFORM("Unit1.cpp", frmPrincipal);
USEFORM("Unit4.cpp", frmSobre);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->CreateForm(__classid(TfrmLog), &frmLog);
		Application->CreateForm(__classid(TfrmConf), &frmConf);
		Application->CreateForm(__classid(TfrmSobre), &frmSobre);
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
