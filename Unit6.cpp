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

           Form6->Label5->Caption="��������� ��������� ������� ������ ����: ";
           Form6->Label1->Caption="����� ��������";
           Form6->Label2->Caption="���������";
           Form6->Label3->Caption="������ ��������";
           Form6->Label4->Caption="�������� ��������";
           pravil_otvet=2;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;


           case 2:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="���������� ����'��� �������:  ";
           Form6->Label1->Caption="��������";
           Form6->Label2->Caption="�����";
           Form6->Label3->Caption="�������";
           Form6->Label4->Caption="������";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

           case 3:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="���	���� ����������'������� ���� �������? <��� ����'������� ���� ��� ����� ������� ���>:  ";
           Form6->Label1->Caption="������������";
           Form6->Label2->Caption="ѳ����������";
           Form6->Label3->Caption="����������";
           Form6->Label4->Caption="���� ��������� ������";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

            case 4:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="������ ������� ��� ������� �:  ";
           Form6->Label1->Caption="����� ������� ��";
           Form6->Label2->Caption="��������� ����";
           Form6->Label3->Caption="�������� - ����������� ������";
           Form6->Label4->Caption="���� ��������� ������";
           pravil_otvet=1;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

           case 5:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="����� ��������� ������ ���� ������ � ���������� ����� � ���:";
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

           Form6->Label5->Caption="<����� � ������> �� ��� ��������:";
           Form6->Label1->Caption="���������";
           Form6->Label2->Caption="��������";
           Form6->Label3->Caption="�������";
           Form6->Label4->Caption="���� ��������� ������";
           pravil_otvet=1;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

            case 7:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="̳��� ��� �� �������� ���������:";
           Form6->Label1->Caption="� ��. VI ��";
           Form6->Label2->Caption=" �� ���. V ��";
           Form6->Label3->Caption="� ��. V ��.";
           Form6->Label4->Caption="� ��. V� ��.";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;

           case 8:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption=".� ��� ���� �������� �� ������� ���������� ������? ";
           Form6->Label1->Caption="������";
           Form6->Label2->Caption="�����������";
           Form6->Label3->Caption="�������";
           Form6->Label4->Caption="��������";
           pravil_otvet=4;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;


           case 9:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="����	������ ����� ����?? ";
           Form6->Label1->Caption="� 1015-1054 ��. ";
           Form6->Label2->Caption="� 980-1015 ��.";
           Form6->Label3->Caption="� 882-912 ��.";
           Form6->Label4->Caption="� 892-898 ��.";
           pravil_otvet=3;


           Form6->Label5->Font->Size = 12;
           Form6->Label1->Font->Size = 12;
           Form6->Label2->Font->Size = 12;
           Form6->Label3->Font->Size = 12;
           Form6->Label4->Font->Size = 12;
                   break;


           case 10:  Form6->Label7->Caption= nomer+1;

           Form6->Label5->Caption="���� �������� �����:<���� ����볺 ����, �� ������ ��� ���� ����>? ";
           Form6->Label1->Caption="����������";
           Form6->Label2->Caption="�������� �������";
           Form6->Label3->Caption="����";
           Form6->Label4->Caption="������";
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

void __fastcall TForm6::N3Click(TObject *Sender)
{
Form6 -> Hide();
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

void __fastcall TForm6::N4Click(TObject *Sender)
{
Form6 -> Hide();
Form8 -> Show();

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

