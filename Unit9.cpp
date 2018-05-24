//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit4.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm9::N1Click(TObject *Sender)
{
Form9 -> Hide();
Form4 -> Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::N2Click(TObject *Sender)
{
Form9 -> Hide();
Form4 -> Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::N3Click(TObject *Sender)
{
Form9 -> Hide();
Form1 -> Show();
}
//---------------------------------------------------------------------------
