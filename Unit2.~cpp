//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT Password From users WHERE Login LIKE'%"+Edit1->Text+"%'");
ADOQuery1-> Open();
if ( ADOQuery1->IsEmpty() )
{ShowMessage ("Користувач не знайдений");}
else {
 if (ADOQuery1->FieldByName("Password")->Value != Edit2->Text )
 {ShowMessage ("Невірний пароль");}
 else Form4->Show() ;}
}
//---------------------------------------------------------------------------

