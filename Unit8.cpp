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

           Form8->Label5->Caption="����� ������� �� ";
           Form8->Label1->Caption="����� �����, �� ��������� �������";
           Form8->Label2->Caption="����� �����, �� ��������� ������� � ��������� ��� �������";
           Form8->Label3->Caption="����� �����, �� ��������� ������� � ��������� ���� �������";
           Form8->Label4->Caption="������� ����� � ������ � ������, �� ��������� �������";
           pravil_otvet=4;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;
           case 2:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="�� � ��������� ����������� ���������� ������� ������: ";
           Form8->Label1->Caption="����� � ������� ";
           Form8->Label2->Caption="������� � ��������� ";
           Form8->Label3->Caption="��������� � �����";
           Form8->Label4->Caption="�� �������";
           pravil_otvet=3;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 3:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="��� ��������� ���������� �������� � ������������ �����: ";
           Form8->Label1->Caption="���, � ���� ���� ������� ����� ";
           Form8->Label2->Caption=" ���, � ���� ���� ������� ";
           Form8->Label3->Caption="���, ��� ���������� ������� ";
           Form8->Label4->Caption="���, ��� ���������� ������� �����";
           pravil_otvet=1;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;
       case 4:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="� ��� ������ ��� ������ ����������� �����: ";
           Form8->Label1->Caption="������  ";
           Form8->Label2->Caption=" ����� ";
           Form8->Label3->Caption="�����������";
           Form8->Label4->Caption="�����";
           pravil_otvet=2;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 5:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="�� ������� ��� ������� �������: ";
           Form8->Label1->Caption="�����������, �������, �������; ";
           Form8->Label2->Caption="�� ������� � �������� � ���� �������, �������.";
           Form8->Label3->Caption="������, �����, �������, �������";
           Form8->Label4->Caption="���� ��������� ������";
           pravil_otvet=3;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

        case 6:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="�� �������� ��� ������� ��� ����� ���������� �����: ";
           Form8->Label1->Caption="������ ";
           Form8->Label2->Caption="�����";
           Form8->Label3->Caption="�������";
           Form8->Label4->Caption="�����������";
           pravil_otvet=2;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

         case 7:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="����� �� ��������� ������ � ��� �����, �� ������ � ���: ";
           Form8->Label1->Caption="����� ";
           Form8->Label2->Caption="�����";
           Form8->Label3->Caption="�������";
           Form8->Label4->Caption="��������";
           pravil_otvet=4;

           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 8:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="��� ������ ��� �������������: ";
           Form8->Label1->Caption="������������ ���������";
           Form8->Label2->Caption="�����";
           Form8->Label3->Caption="������";
           Form8->Label4->Caption="���� �������";
           pravil_otvet=1;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

       case 9:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="��� ���������� ������� � �������: ";
           Form8->Label1->Caption="��������";
           Form8->Label2->Caption="����������";
           Form8->Label3->Caption="�������� �� ������ �������";
           Form8->Label4->Caption="�������� �� �������� �������";
           pravil_otvet=2;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

   case 10:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="������, � ���� ���� ������� �������� ������ �����: ";
           Form8->Label1->Caption="�������";
           Form8->Label2->Caption="�����������";
           Form8->Label3->Caption="������";
           Form8->Label4->Caption="�� ������ ���";
           pravil_otvet=1;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
                   break;

   
   case 11:  Form8->Label7->Caption= nomer+1;

           Form8->Label5->Caption="�� ��������� ���� ���� ��������� � ��������� ���: ";
           Form8->Label1->Caption="������ �����";
           Form8->Label2->Caption="������ �������";
           Form8->Label3->Caption="���� ��";
           Form8->Label4->Caption="������ ����";
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
Form5->Label5->Caption="������ ����� ������� : �6� + 4� + 8� � 2�";
           Form5->Label1->Caption="2� + 6�";
           Form5->Label2->Caption="2� + 2�";
           Form5->Label3->Caption="14� + 2�";
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

Form6->Label5->Caption="��� � ��� ����� �� ������� �� ������ �����������?";
           Form6->Label1->Caption="�������";
           Form6->Label2->Caption="�������";
           Form6->Label3->Caption="���������";
           Form6->Label4->Caption="�� � ��������";
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
Form7->Label5->Caption="������ �����, � ����� �� 䳺����� � �� �������� ����� ";
           Form7->Label1->Caption="��\�������, ��\������, ��\���������";
           Form7->Label2->Caption="��\�������, ��\�������, ����\������";
           Form7->Label3->Caption="��\�������, ��\������, ��\�����";
           Form7->Label4->Caption="����\������, ��\���, ��\����";
           pravil_otvet=2;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------
