//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit7.h"
#include "Unit9.h"
#include "Unit6.h"
#include "Unit5.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int s=0, i=0, pravil_otvet, nomer=0;

TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button1Click(TObject *Sender)
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
  case 1:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="����� - �� �������� ������� ����, ���: ";
           Form7->Label1->Caption="��������� ��� �'������� ��� � �������";
           Form7->Label2->Caption="������� ���� �������� ������ �������� � �������";
           Form7->Label3->Caption="������ �������, ������������� �����, �� ��������� ��";
           Form7->Label4->Caption="������ ���������� �������� �� ����� ��� � ���������������";
           pravil_otvet=3;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;

           case 2:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="ĳ����������� - ��: ";
           Form7->Label1->Caption="�������� ����� 䳺�����, ��� �� ������ �������� �� 䳺� ��� ������";
           Form7->Label2->Caption="��������, ������� ����� 䳺�����, ��� ������ ��";
           Form7->Label3->Caption="����������� ������� ����, ��� ������ ������ 䳿, �������� �� ���� ������";
           Form7->Label4->Caption="���� ��������� ������";
           pravil_otvet=1;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;

           case 3:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="ĳ�������������� ������ - ��:";
           Form7->Label1->Caption="䳺���������� � ���������";
           Form7->Label2->Caption="䳺���������� � �����������";
           Form7->Label3->Caption="䳺���������� � �����������";
           Form7->Label4->Caption="䳺���������� � ��������� �������";
           pravil_otvet=4;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;


          case 4:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="ĳ������ - �� ������� ����, ���:";
           Form7->Label1->Caption="������ ������ 䳿, �������� �� ���� ������";
           Form7->Label2->Caption="������ �� ��� ���� ��������";
           Form7->Label3->Caption="������ ����� ��������";
           Form7->Label4->Caption="������ ����� ������ �������� ��� ���� ������������";
           pravil_otvet=2;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;

           case 5:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="������ �����, � ����� �� 䳺����� ���������� ����:";
           Form7->Label1->Caption="��������, ������, ��������";
           Form7->Label2->Caption="������, ����, ����";
           Form7->Label3->Caption="�����, �����, ����������";
           Form7->Label4->Caption="��������, �������, ������";
           pravil_otvet=4;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;


           case 6:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="������� ������� 䳺�������������� ��������: ";
           Form7->Label1->Caption="���� ��� ���������� � �����. (�. ����쳺��)";
           Form7->Label2->Caption="� ���� ������ ��� ������������ ������ (�. ����)";
           Form7->Label3->Caption="����������� ����� ����� ����� �� ���. (������� ���������)";
           Form7->Label4->Caption="�������� ���� � ����� �� ����������. (������� ���������)";
           pravil_otvet=1;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;


            case 7:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="������ �����, � ����� �� 䳺����� � �������������:";
           Form7->Label1->Caption=" ������ �������, ������� �����";
           Form7->Label2->Caption="������ �������, ��� �������";
           Form7->Label3->Caption="���� ������, ����� ������ ������";
           Form7->Label4->Caption="������� �쳺����, ������� ������";
           pravil_otvet=2;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;

          
           case 8:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="������ �����, � ����� �� 䳺����� 1 䳺�����:";
           Form7->Label1->Caption=" ��������, ������, �������, �����";
           Form7->Label2->Caption="�����, ��������, ���������, �����";
           Form7->Label3->Caption="����, �����, ������, ��������";
           Form7->Label4->Caption="����, �����, ������, ���";
           pravil_otvet=4;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;
           case 9:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="������ �����, � ����� �� 䳺����� ���������� �������:";
           Form7->Label1->Caption="����, �������, ����� �, ��������";
           Form7->Label2->Caption="������, �������, ������ �, ��������";
           Form7->Label3->Caption="����, ��������, ��������, ������";
           Form7->Label4->Caption="��, ������� ��, �������, �������� ��";
           pravil_otvet=3;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;

          case 10:  Form7->Label7->Caption= nomer+1;

           Form7->Label5->Caption="��������� - �� �������� ������� ����, ���:";
           Form7->Label1->Caption="������ �������, ���������� �� 䳿, ��� �� ������ ��";
           Form7->Label2->Caption="��������� ��� �'������� ��������� ������ ������� ";
           Form7->Label3->Caption="������ ���������� �������� �� ����� ��� � ���������������";
           Form7->Label4->Caption="���� ��������� ������";
           pravil_otvet=2;


           Form7->Label5->Font->Size = 12;
           Form7->Label1->Font->Size = 12;
           Form7->Label2->Font->Size = 12;
           Form7->Label3->Font->Size = 12;
           Form7->Label4->Font->Size = 12;
                   break;
  case 11:
  Button1->Enabled=false;
                   break;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
Form7-> Hide();
Form9-> Show();
Form9->Label2->Caption=s;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::N2Click(TObject *Sender)
{
Form7 -> Hide();
Form5 -> Show();
Form5->Label5->Caption="������ ������ ������� : �6� + 4� + 8� � 2�";
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
void __fastcall TForm7::N3Click(TObject *Sender)
{
Form7 -> Hide();
Form6 -> Show();

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

void __fastcall TForm7::N4Click(TObject *Sender)
{
Form7 -> Hide();
Form8 -> Show();


           Form8->Label5->Caption="���� � ��� ������� ����: ";
           Form8->Label1->Caption="������ � �������� ���";
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
