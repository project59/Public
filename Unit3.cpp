//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
      ADOQuery1->Close();
      ADOQuery1->SQL->Clear();
      ADOQuery1->SQL->Add("INSERT INTO users VALUES ('"+Edit1->Text+"', '"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"')");

      ADOQuery1->ExecSQL();
      ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add( "select * from users" );
   ADOQuery1->Open();
   if (StrToInt(Edit4->Text)> 14 ) {ShowMessage ("�������� ����������� �� ����� 6-7 ������");}
   else {ShowMessage ("����������� ������ ������������");}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{Form3-> Hide();
 Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::N1Click(TObject *Sender)
{
 Form3-> Hide();
 Form1->Show();
}
//---------------------------------------------------------------------------

