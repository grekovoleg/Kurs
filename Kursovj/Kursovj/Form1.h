#pragma once
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>
#include <clocale>
using namespace std;
using namespace System;
using namespace System::IO;
int NC;
struct z {
char name[20];
char vid[20];
long summa;
char data[11];
long ves;
}*humans;

struct sp {
char fio[20];
char vid[20];
long summa;
struct sp* sled;
//struct sp* pred;
} *spisok;

struct sp2 {
char fio[20];
char vid[20];
long summa;
struct sp2* sled;
struct sp2* pred;
} *spisok2;
void text_data(char *s,char *sd)
{
char s0[3],month[12][9]={
"������","�������","�����","������","���","����",
"����","�������","��������","�������","������","�������"};
strcpy(s,sd+8);
strcat(s," ");
strncpy(s0,sd+5,2); s0[2]=0;
strcat(s,month[ atoi(s0)-1]);
strcat(s," ");
strncat(s,sd,4);
return;
}
void vstavka(struct z* humans,char* fio)
{
int i;
struct sp *nov,*nt,*z=0;
for(nt=spisok; nt!=0 && strcmp(nt->fio,fio)<0; z=nt, nt=nt->sled);
if(nt && strcmp(nt->fio,fio)==0) return;
nov=(struct sp *) malloc(sizeof(struct sp));
strcpy(nov->fio,fio);
nov->sled=nt;
nov->summa=0;
for(i=0;i<NC;i++)
if(strcmp(humans[i].name,fio)==0)
nov->summa+=humans[i].summa;
if(!z) spisok=nov;
else z->sled=nov;
return;
}

void obrvstavka(char* fio, int summa)
{
struct sp2 *nov2,*nt2,*z2=0;
for(nt2=spisok2; nt2!=0 && strcmp(nt2->fio,fio)<0; z2=nt2, nt2=nt2->sled);
if(nt2 && strcmp(nt2->fio,fio)==0) return;
nov2=(struct sp2 *) malloc(sizeof(struct sp2));
strcpy(nov2->fio,fio);
nov2->summa=summa;
nov2->pred=z2;
nov2->sled=nt2;
if(!z2) spisok2=nov2;
else z2->sled=nov2;
if(nt2) nt2->pred=nov2;
return;
}
namespace Kursovj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}



















	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������������������������������������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  �������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabControl^  ���������;
	private: System::Windows::Forms::TabPage^  tabPage3;









	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->��������� = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->���������->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->����ToolStripMenuItem, 
				this->�������ToolStripMenuItem, this->�����ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(560, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�������ToolStripMenuItem, 
				this->���������ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->���������������������������������������������ToolStripMenuItem, 
				this->����������������������������������������������������ToolStripMenuItem, this->�������������������������������ToolStripMenuItem, 
				this->����������������������������������������������ToolStripMenuItem, this->�����������������������������������������������ToolStripMenuItem, 
				this->�������������������������������ToolStripMenuItem});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ���������������������������������������������ToolStripMenuItem
			// 
			this->���������������������������������������������ToolStripMenuItem->Name = L"���������������������������������������������ToolStripMenuItem";
			this->���������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(439, 22);
			this->���������������������������������������������ToolStripMenuItem->Text = L"��� � ������� �������� ������ ����� ����� � ���������\?";
			this->���������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::���������������������������������������������ToolStripMenuItem_Click);
			// 
			// ����������������������������������������������������ToolStripMenuItem
			// 
			this->����������������������������������������������������ToolStripMenuItem->Name = L"����������������������������������������������������ToolStripMenuItem";
			this->����������������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(439, 22);
			this->����������������������������������������������������ToolStripMenuItem->Text = L"��� � ����� �� ����������� ����� ������ � �������� ������ ����\?";
			this->����������������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����������������������������������������������������ToolStripMenuItem_Click);
			// 
			// �������������������������������ToolStripMenuItem
			// 
			this->�������������������������������ToolStripMenuItem->Name = L"�������������������������������ToolStripMenuItem";
			this->�������������������������������ToolStripMenuItem->Size = System::Drawing::Size(439, 22);
			this->�������������������������������ToolStripMenuItem->Text = L"���������� ������ ���� �����������";
			this->�������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������������������������������ToolStripMenuItem_Click);
			// 
			// ����������������������������������������������ToolStripMenuItem
			// 
			this->����������������������������������������������ToolStripMenuItem->Name = L"����������������������������������������������ToolStripMenuItem";
			this->����������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(439, 22);
			this->����������������������������������������������ToolStripMenuItem->Text = L"��������� ���������� ����������� ����������� �����";
			this->����������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����������������������������������������������ToolStripMenuItem_Click);
			// 
			// �����������������������������������������������ToolStripMenuItem
			// 
			this->�����������������������������������������������ToolStripMenuItem->Name = L"�����������������������������������������������ToolStripMenuItem";
			this->�����������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(439, 22);
			this->�����������������������������������������������ToolStripMenuItem->Text = L"���������� � ������ ����������� �������� � ����������          ";
			// 
			// �������������������������������ToolStripMenuItem
			// 
			this->�������������������������������ToolStripMenuItem->Name = L"�������������������������������ToolStripMenuItem";
			this->�������������������������������ToolStripMenuItem->Size = System::Drawing::Size(439, 22);
			this->�������������������������������ToolStripMenuItem->Text = L"������� ������. ��� � �������� ������                           ";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(546, 389);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(100, 96);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(1, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(290, 391);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(546, 389);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�������� ������";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(-4, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(547, 368);
			this->listBox1->TabIndex = 0;
			// 
			// ���������
			// 
			this->���������->Controls->Add(this->tabPage1);
			this->���������->Controls->Add(this->tabPage2);
			this->���������->Controls->Add(this->tabPage3);
			this->���������->Location = System::Drawing::Point(0, 27);
			this->���������->Name = L"���������";
			this->���������->SelectedIndex = 0;
			this->���������->Size = System::Drawing::Size(554, 415);
			this->���������->TabIndex = 2;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Transparent;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(546, 389);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"���������";
			this->tabPage3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::tabPage3_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(560, 444);
			this->Controls->Add(this->���������);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��������";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->���������->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }

private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {this->Close();
		 }
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {this->Close();
		 }
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
FILE *in;
int i;
char ctemp[280];
String ^s;
if ((in=fopen("kyrsach.txt","r"))==NULL)
{
MessageBox::Show("���� �� ������!",
"������!",
MessageBoxButtons::OK,
MessageBoxIcon::Error);
return;
}
�������ToolStripMenuItem->Enabled=true;
listBox1->Items->Clear();
fscanf(in,"%ld",&NC);
humans=(struct z*)malloc(NC*sizeof(struct z));
for(i=0;i<NC;i++)
{
fscanf(in,"%s%s%ld%s%ld",humans[i].name, humans[i].vid, &humans[i].summa, humans[i].data, &humans[i].ves);
sprintf(ctemp,"%-20s %-20s %7ld %s %ld",
humans[i].name,humans[i].vid, humans[i].summa,humans[i].data,humans[i].ves);
s=gcnew String(ctemp);
listBox1->Items->Add(s);
}
fclose(in);
		 }
private: System::Void
���������������������������������������������ToolStripMenuItem_Click
(System::Object^ sender, System::EventArgs^ e)
{
int i=0;
struct z best;
char ss[1000];
String ^s;
strcpy(best.name,humans[0].name);
best.summa=humans[0].summa;
for(i=1;i<NC;i++)
if (humans[i].summa>best.summa)
{
strcpy(best.name,humans[i].name);
best.summa=humans[i].summa;
}
sprintf(ss,"%s\n %ld ������",best.name,best.summa);
s=gcnew String(ss);
MessageBox::Show(s,"������ ���� ����� �������� � ����");
}
		 private: System::Void ����������������������������������������������������ToolStripMenuItem_Click(System::Object^  sender, 
					  System::EventArgs^  e) { int i;
char sd[17];
char ss[80];
String ^s;
struct z* best=humans;
for(i=1;i<NC;i++)
if (strcmp(humans[i].data,best->data)<0) best=&humans[i];
text_data(sd,best->data);
sprintf(ss,"%s\n%s\n%ld �����\n������ %s",
best->vid,best->name, best->summa,sd);
s=gcnew String(ss);
MessageBox::Show(s,"����� ������ ������ ����");
				  }
private: System::Void �������������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
int i;
struct sp* nt;
char ss[80];
String ^s;
tabControl1->SelectTab(1); // ��������� �� ������� "������"
if(!spisok)
for(i=0;i<NC;i++)
vstavka(humans,humans[i].name);
richTextBox1->ReadOnly=1;
richTextBox1->Clear();
richTextBox1->Text ="\n���������� ������\n=============================\n";
for(nt=spisok; nt!=0; nt=nt->sled)
{
sprintf(ss,"%-20s %10ld",nt->fio,nt->summa);
s=gcnew String(ss,0,31);
richTextBox1->Text = richTextBox1->Text+"\n"+s;
}
		 }


private: System::Void ����������������������������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
		 }

private: System::Void tabPage3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};




