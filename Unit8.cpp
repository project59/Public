//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit6.h"
#include "Unit8.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int s=0, i=0, pravil_otvet, nomer=0;
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button1Click(TObject *Sender)
{
if(RadioButton1->Checked==true)i=1;
 if(RadioButton2->Checked==true)i=2;
 if(RadioButton3->Checked==true)i=3;
 if(RadioButton4->Checked==true)i=4;
 if(i==pravil_otvet)s++; i=0;
 RadioButton1->Checked=false;
 RadioButton2->Checked=false;
 RadioButton3->Checked=false;
 RadioButton4->Checked=false;
  nomer++;

  switch(nomer)
{
   case 1:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Живий організм це ";
           Form8->Label1->Caption="група клітин, що виконують функції";
           Form8->Label2->Caption="група клітин, що утворюють тканини і виконують різні функції";
           Form8->Label3->Caption="група клітин, що утворюють тканини і виконують одну функцію";
           Form8->Label4->Caption="взаємодія клітин і тканин і органів, що утворюють організм";
           pravil_otvet=4;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;
           case 2:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Які з наведених найпростіших викликають хвороби людини: ";
           Form8->Label1->Caption="амеби і евглени ";
           Form8->Label2->Caption="інфузорії і споровики ";
           Form8->Label3->Caption="споровики і амеби";
           Form8->Label4->Caption="усі варіанти";
           pravil_otvet=3;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 3:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Хто вважається остаточним хазяїном у паразитичних червів: ";
           Form8->Label1->Caption="той, в кого живе доросла форма ";
           Form8->Label2->Caption=" той, в кого живе личинка ";
           Form8->Label3->Caption="той, хто переносить личинку ";
           Form8->Label4->Caption="той, хто переносить дорослу форму";
           pravil_otvet=1;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;
       case 4:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="У якій частині тіла павука розташоване серце: ";
           Form8->Label1->Caption="голова  ";
           Form8->Label2->Caption=" груди ";
           Form8->Label3->Caption="головогруди";
           Form8->Label4->Caption="лапки";
           pravil_otvet=2;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 5:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Які частини тіла властиві комахам: ";
           Form8->Label1->Caption="головогруди, черевце, кінцівки; ";
           Form8->Label2->Caption="всі членики з єднались у один сегмент, кінцівки.";
           Form8->Label3->Caption="голова, груди, черевце, кінцівки";
           Form8->Label4->Caption="немає правильної відповіді";
           pravil_otvet=3;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

        case 6:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="На члениках якої частини тіла комах розташовані крила: ";
           Form8->Label1->Caption="голова ";
           Form8->Label2->Caption="груди";
           Form8->Label3->Caption="черевце";
           Form8->Label4->Caption="головогруди";
           pravil_otvet=2;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

         case 7:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Через що надходить повітря у тіло комах, які живуть у воді: ";
           Form8->Label1->Caption="зябра ";
           Form8->Label2->Caption="легені";
           Form8->Label3->Caption="черевце";
           Form8->Label4->Caption="дихальця";
           pravil_otvet=4;

           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 8:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Чим вкрите тіло членистоногих: ";
           Form8->Label1->Caption="хутинізованою кутикулою";
           Form8->Label2->Caption="шкірою";
           Form8->Label3->Caption="лускою";
           Form8->Label4->Caption="інша відповідб";
           pravil_otvet=1;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 9:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Яка кровоносна система у молюсків: ";
           Form8->Label1->Caption="замкнена";
           Form8->Label2->Caption="незамкнена";
           Form8->Label3->Caption="залежить від розміру молюска";
           Form8->Label4->Caption="залежить від різновиду молюска";
           pravil_otvet=2;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

   case 10:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="Ссавці, у яких зуби ростуть протягом усього життя: ";
           Form8->Label1->Caption="гризуни";
           Form8->Label2->Caption="парнокопитні";
           Form8->Label3->Caption="хижаки";
           Form8->Label4->Caption="усі відповіді вірні";
           pravil_otvet=1;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

   
   case 11:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="За допомогою чого риба орієнтується у каламутній воді: ";
           Form8->Label1->Caption="органів слуху";
           Form8->Label2->Caption="органів дихання";
           Form8->Label3->Caption="бічної лінії";
           Form8->Label4->Caption="органів зору";
           pravil_otvet=3;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

  case 12:
  Button1->Enabled=false;
                   break;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button2Click(TObject *Sender)
{
Form8-> Hide();
Form9-> Show();
Form9->Label2->Caption=s;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::N2Click(TObject *Sender)
{
Form8-> Hide();
Form5-> Show();
Form5->Label5->Caption="Зведіть подібні доданки : –6х + 4у + 8х – 2у";
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
void __fastcall TForm8::N3Click(TObject *Sender)
{
Form8->Hide ();
Form6-> Show ();

Form6->Label5->Caption="Хто з цих князів не належав до династії Рюриковичів?";
           Form6->Label1->Caption="Мономах";
           Form6->Label2->Caption="Ізяслав";
           Form6->Label3->Caption="Володимир";
           Form6->Label4->Caption="Усі з вказаних";
           pravil_otvet=3;
           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::N4Click(TObject *Sender)
{
Form8 -> Hide();
Form7 -> Show();
Form7->Label5->Caption="Вкажіть рядок, у якому всі дієслова з не пишуться разом ";
           Form7->Label1->Caption="не\славити, не\робити, не\приносити";
           Form7->Label2->Caption="не\навидіти, не\хтувати, недо\бачати";
           Form7->Label3->Caption="не\здужати, не\думали, не\співав";
           Form7->Label4->Caption="недо\чувати, не\вірю, не\знаю";
           pravil_otvet=2;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------
