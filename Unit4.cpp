//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit8.h"
#include "Unit7.h"
#include "Unit6.h"
#include "Unit5.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

extern int pravil_otvet;
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
Form4 -> Hide();
Form5 -> Show();
Form5->Label5->Caption="«вед≥ть под≥бн≥ доданки : Ц6х + 4у + 8х Ц 2у";
           Form5->Label1->Caption="2х + 6у";
           Form5->Label2->Caption="2х + 2у";
           Form5->Label3->Caption="14х + 2у";
           Form5->Label4->Caption="4x+6y";
           pravil_otvet=2;
           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;


}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
{
Form4 -> Hide();
Form6 -> Show();

Form6->Label5->Caption="’то з цих кн€з≥в не належав до династ≥њ –юрикович≥в?";
           Form6->Label1->Caption="ћономах";
           Form6->Label2->Caption="≤з€слав";
           Form6->Label3->Caption="¬олодимир";
           Form6->Label4->Caption="”с≥ з вказаних";
           pravil_otvet=3;
           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button3Click(TObject *Sender)
{
Form4 -> Hide();
Form7 -> Show();
Form7->Label5->Caption="¬каж≥ть р€док, у €кому вс≥ д≥Їслова з не пишутьс€ разом ";
           Form7->Label1->Caption="не\славити, не\робити, не\приносити";
           Form7->Label2->Caption="не\навид≥ти, не\хтувати, недо\бачати";
           Form7->Label3->Caption="не\здужати, не\думали, не\сп≥вав";
           Form7->Label4->Caption="недо\чувати, не\в≥рю, не\знаю";
           pravil_otvet=2;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;

}

//---------------------------------------------------------------------------
void __fastcall TForm4::Button4Click(TObject *Sender)
{
Form4 -> Hide();
Form8 -> Show();

           Form8->Label5->Caption="„ому у риб холодна кров: ";
           Form8->Label1->Caption="живуть у холодн≥й вод≥";
           Form8->Label2->Caption="залежить в≥д виду";
           Form8->Label3->Caption="кров зм≥шана";
           Form8->Label4->Caption="низький р≥вень обм≥ну речовин";
           pravil_otvet=4;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------

