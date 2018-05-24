//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit9.h"
#include "Unit6.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

int s=0, i=0, pravil_otvet, nomer=0;
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button1Click(TObject *Sender)
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
  case 1:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Нагрудною прикрасою скіфської царівни була: ";
           Form6->Label1->Caption="Срібна прикраса";
           Form6->Label2->Caption="Пектораль";
           Form6->Label3->Caption="Золота прикраса";
           Form6->Label4->Caption="Бронзова прикраса";
           pravil_otvet=2;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;


           case 2:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Першобогом слов'яни вважали:  ";
           Form6->Label1->Caption="Білобога";
           Form6->Label2->Caption="Ярило";
           Form6->Label3->Caption="Дажбога";
           Form6->Label4->Caption="Перуна";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

           case 3:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Про	який східнослов'янський союз йдеться? <Цей слов'янський союз був ядром Київської Русі>:  ";
           Form6->Label1->Caption="Древлянський";
           Form6->Label2->Caption="Сіверянський";
           Form6->Label3->Caption="Полянський";
           Form6->Label4->Caption="Нема правильної відповіді";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

            case 4:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Історія Київської Русі описана у:  ";
           Form6->Label1->Caption="Повісті минолих літ";
           Form6->Label2->Caption="Поввчання дітям";
           Form6->Label3->Caption="Галицько - Волинському літописі";
           Form6->Label4->Caption="Нема правильної відповіді";
           pravil_otvet=1;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

           case 5:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Князь Святослав вперше брав участь у військовому поході у віці:";
           Form6->Label1->Caption="5";
           Form6->Label2->Caption="15";
           Form6->Label3->Caption="20";
           Form6->Label4->Caption="10";
           pravil_otvet=4;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;
           case 6:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="<Людей з півночі> на Русі називали:";
           Form6->Label1->Caption="норманами";
           Form6->Label2->Caption="варягами";
           Form6->Label3->Caption="вікінгами";
           Form6->Label4->Caption="нема правильної відповіді";
           pravil_otvet=1;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

            case 7:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Місто Київ за легендою заснували:";
           Form6->Label1->Caption="у кін. VI ст";
           Form6->Label2->Caption=" на поч. V ст";
           Form6->Label3->Caption="у кін. V ст.";
           Form6->Label4->Caption="у кін. VІ ст.";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

           case 8:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption=".У яке місто відправив на княжіння Володимира батько? ";
           Form6->Label1->Caption="Чернігів";
           Form6->Label2->Caption="Іскоростень";
           Form6->Label3->Caption="Полоцьк";
           Form6->Label4->Caption="Новгород";
           pravil_otvet=4;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;


           case 9:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Коли	правив князь Олег?? ";
           Form6->Label1->Caption="у 1015-1054 рр. ";
           Form6->Label2->Caption="у 980-1015 рр.";
           Form6->Label3->Caption="у 882-912 рр.";
           Form6->Label4->Caption="у 892-898 рр.";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;


           case 10:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="Кому належать слова:<Русь веселіє пити, не можемо без того бути>? ";
           Form6->Label1->Caption="Володимиру";
           Form6->Label2->Caption="Ярославу Мудрому";
           Form6->Label3->Caption="Ользі";
           Form6->Label4->Caption="Ігореві";
           pravil_otvet=1;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;
  case 11:
           Button1->Enabled=false;
                   break;


}

}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
Form6-> Hide();
Form9-> Show();
Form9->Label2->Caption=s;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::N2Click(TObject *Sender)
{Form6-> Hide();
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

void __fastcall TForm6::N3Click(TObject *Sender)
{
Form6 -> Hide();
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

void __fastcall TForm6::N4Click(TObject *Sender)
{
Form6 -> Hide();
Form8 -> Show();

           Form8->Label5->Caption="Чому у риб холодна кров: ";
           Form8->Label1->Caption="живуть у холодній воді";
           Form8->Label2->Caption="залежить від виду";
           Form8->Label3->Caption="кров змішана";
           Form8->Label4->Caption="низький рівень обміну речовин";
           pravil_otvet=4;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------

