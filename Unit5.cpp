//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "Unit9.h"
 #include "Unit8.h"
 #include "Unit7.h"
 #include "Unit6.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

int s=0, i=0, pravil_otvet, nomer=0;
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm5::Button1Click(TObject *Sender)
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
  case 1:  Form5->Label7->Caption= nomer+1;

           Form5->Label5->Caption="���� ������� ����� �, ���� 18% �� ����� ���������� 4.14?";
           Form5->Label1->Caption="20";
           Form5->Label2->Caption="23";
           Form5->Label3->Caption="25";
           Form5->Label4->Caption="21";
           pravil_otvet=2;


           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;

           Form5->Label5->Font->Name = "Comic Sans MS";
           Form5->Label1->Font->Name = "Comic Sans MS";
           Form5->Label2->Font->Name = "Comic Sans MS";
           Form5->Label3->Font->Name = "Comic Sans MS";
           Form5->Label4->Font->Name= "Comic Sans MS";

                   break;

  case 2:
           Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="����'���� ������� 2^n=1024";
           Form5->Label1->Caption="n=10";
           Form5->Label2->Caption="n=8";
           Form5->Label3->Caption="n=4";
           Form5->Label4->Caption="���� ��������";
           pravil_otvet=1;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

  case 3:  Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="��������� ��������� �^3+1 �� ��������";
           Form5->Label1->Caption="(�+1)2";
           Form5->Label2->Caption="(�-1)(�2+�+1)";
           Form5->Label3->Caption="(�+1)(�2-�+1)";
           Form5->Label4->Caption="(�+1)(�2+�+1)";
           pravil_otvet=3;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

case 4:    Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="��������� ��������� �^3-1 �� ��������";
           Form5->Label1->Caption="(�+1)2";
           Form5->Label2->Caption="(�-1)(�2+�+1)";
           Form5->Label3->Caption="(�+1)(�2-�+1)";
           Form5->Label4->Caption="(�+1)(�2+�+1)";
           pravil_otvet=2;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

  case 5:  Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="������ ������ �� �������  �2=�-5";
           Form5->Label1->Caption="�������";
           Form5->Label2->Caption="�����";
           Form5->Label3->Caption="����";
           Form5->Label4->Caption="���";
           pravil_otvet=1;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

  case 6:  Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="������ : p(x;y)=2x^2-5��+2�^2. ���� ������� �������� �(2;1)?";
           Form5->Label1->Caption="20";
           Form5->Label2->Caption="-10";
           Form5->Label3->Caption="10";
           Form5->Label4->Caption="0";
           pravil_otvet=4;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

  case 7:  Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="��� � ����� �(-2;2),�(5;25),�(-1;-1),�(3;6) �������� ������� �������  �=�^2";
           Form5->Label1->Caption="A";
           Form5->Label2->Caption="B";
           Form5->Label3->Caption="C";
           Form5->Label4->Caption="E";
           pravil_otvet=2;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

  case 8:  Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption=" ��������� ��������� �^2-1 �� ��������";
           Form5->Label1->Caption="(a-1)(�+1)";
           Form5->Label2->Caption="(�-1)(�-1)";
           Form5->Label3->Caption="(�+1)(�+1)";
           Form5->Label4->Caption="(�+1)a";
           pravil_otvet=1;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

case 9:    Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="������ ����� ������ �������� ��������� (2;7)";
           Form5->Label1->Caption="0";
           Form5->Label2->Caption="6";
           Form5->Label3->Caption="4";
           Form5->Label4->Caption="2";
           pravil_otvet=3;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
                   break;

  case 10: Form5->Label7->Caption= nomer+1;
           Form5->Label5->Caption="��������� ����� : (2�-3)^2";
           Form5->Label1->Caption="4a^2-6a+9";
           Form5->Label2->Caption="4a^2-12a+9";
           Form5->Label3->Caption="4a^2-6a+3";
           Form5->Label4->Caption="4a^2-9";
           pravil_otvet=1;

           Form5->Label5->Font->Size = 12;
           Form5->Label1->Font->Size = 12;
           Form5->Label2->Font->Size = 12;
           Form5->Label3->Font->Size = 12;
           Form5->Label4->Font->Size = 12;
  case 11:
           Button1->Enabled=false;
                   break;


}

}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
 Form5-> Hide();
 Form9-> Show();
Form9->Label2->Caption=s;

}
//---------------------------------------------------------------------------

void __fastcall TForm5::N2Click(TObject *Sender)
{
Form5->Hide ();
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

void __fastcall TForm5::N3Click(TObject *Sender)
{
Form5->Hide ();
Form7-> Show ();
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

void __fastcall TForm5::N4Click(TObject *Sender)
{
Form5->Hide ();
Form8-> Show();
           Form8->Label5->Caption="���� � ��� ������� ����: ";
           Form8->Label1->Caption="������ � ������� ���";
           Form8->Label2->Caption="�������� �� ����";
           Form8->Label3->Caption="���� ������";
           Form8->Label4->Caption="������� ����� ����� �������";
           pravil_otvet=4;


           Form8->Label5->Font->Size = 12;
           Form8->Label1->Font->Size = 12;
           Form8->Label2->Font->Size = 12;
           Form8->Label3->Font->Size = 12;
           Form8->Label4->Font->Size = 12;
}
//---------------------------------------------------------------------------



