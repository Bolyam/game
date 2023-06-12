#pragma once
#include <iostream>

namespace bolyamgame {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int line = 1;
	private: bool win = false;
	private: String^ word;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Panel^ panel39;
	private: System::Windows::Forms::Panel^ panel40;
	private: System::Windows::Forms::Panel^ panel41;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::Panel^ panel46;
	private: System::Windows::Forms::Panel^ panel47;
	private: System::Windows::Forms::Panel^ panel48;
	private: System::Windows::Forms::Panel^ panel49;
	private: System::Windows::Forms::Panel^ panel50;
	private: System::Windows::Forms::Panel^ panel51;
	private: System::Windows::Forms::Panel^ panel52;
	private: System::Windows::Forms::Panel^ panel53;
	private: System::Windows::Forms::Panel^ panel54;
	private: System::Windows::Forms::Panel^ panel55;
	private: System::Windows::Forms::Panel^ panel56;
	private: System::Windows::Forms::Panel^ panel57;
	private: System::Windows::Forms::Panel^ panel58;
	private: System::Windows::Forms::Panel^ panel59;
	private: System::Windows::Forms::Panel^ panel60;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label4;


	protected:


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel39->SuspendLayout();
			this->panel40->SuspendLayout();
			this->panel41->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel43->SuspendLayout();
			this->panel44->SuspendLayout();
			this->panel45->SuspendLayout();
			this->panel46->SuspendLayout();
			this->panel47->SuspendLayout();
			this->panel48->SuspendLayout();
			this->panel49->SuspendLayout();
			this->panel50->SuspendLayout();
			this->panel51->SuspendLayout();
			this->panel52->SuspendLayout();
			this->panel53->SuspendLayout();
			this->panel54->SuspendLayout();
			this->panel55->SuspendLayout();
			this->panel56->SuspendLayout();
			this->panel57->SuspendLayout();
			this->panel58->SuspendLayout();
			this->panel59->SuspendLayout();
			this->panel60->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(26, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 2);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(167, 27);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(105, 99);
			this->panel3->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(26, 156);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(105, 99);
			this->panel4->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(167, 156);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(105, 99);
			this->panel5->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(308, 27);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(105, 99);
			this->panel6->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(446, 27);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(105, 99);
			this->panel7->TabIndex = 1;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(582, 27);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(105, 99);
			this->panel8->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->Location = System::Drawing::Point(308, 156);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(105, 99);
			this->panel9->TabIndex = 1;
			// 
			// panel10
			// 
			this->panel10->Location = System::Drawing::Point(446, 156);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(105, 99);
			this->panel10->TabIndex = 1;
			// 
			// panel11
			// 
			this->panel11->Location = System::Drawing::Point(582, 156);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(105, 99);
			this->panel11->TabIndex = 1;
			// 
			// panel12
			// 
			this->panel12->Location = System::Drawing::Point(582, 279);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(105, 99);
			this->panel12->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->Location = System::Drawing::Point(446, 279);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(105, 99);
			this->panel13->TabIndex = 1;
			// 
			// panel14
			// 
			this->panel14->Location = System::Drawing::Point(308, 279);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(105, 99);
			this->panel14->TabIndex = 1;
			// 
			// panel15
			// 
			this->panel15->Location = System::Drawing::Point(308, 403);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(105, 99);
			this->panel15->TabIndex = 1;
			// 
			// panel16
			// 
			this->panel16->Location = System::Drawing::Point(446, 403);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(105, 99);
			this->panel16->TabIndex = 1;
			// 
			// panel17
			// 
			this->panel17->Location = System::Drawing::Point(582, 403);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(105, 99);
			this->panel17->TabIndex = 1;
			// 
			// panel18
			// 
			this->panel18->Location = System::Drawing::Point(308, 527);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(105, 99);
			this->panel18->TabIndex = 1;
			// 
			// panel19
			// 
			this->panel19->Location = System::Drawing::Point(446, 527);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(105, 99);
			this->panel19->TabIndex = 1;
			// 
			// panel20
			// 
			this->panel20->Location = System::Drawing::Point(582, 527);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(105, 99);
			this->panel20->TabIndex = 1;
			// 
			// panel21
			// 
			this->panel21->Location = System::Drawing::Point(167, 403);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(105, 99);
			this->panel21->TabIndex = 1;
			// 
			// panel22
			// 
			this->panel22->Location = System::Drawing::Point(167, 279);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(105, 99);
			this->panel22->TabIndex = 1;
			// 
			// panel23
			// 
			this->panel23->Location = System::Drawing::Point(26, 279);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(105, 99);
			this->panel23->TabIndex = 1;
			// 
			// panel24
			// 
			this->panel24->Location = System::Drawing::Point(26, 403);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(105, 99);
			this->panel24->TabIndex = 1;
			// 
			// panel25
			// 
			this->panel25->Location = System::Drawing::Point(26, 527);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(105, 99);
			this->panel25->TabIndex = 1;
			// 
			// panel26
			// 
			this->panel26->Location = System::Drawing::Point(167, 527);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(105, 99);
			this->panel26->TabIndex = 1;
			// 
			// panel27
			// 
			this->panel27->Location = System::Drawing::Point(582, 649);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(105, 99);
			this->panel27->TabIndex = 1;
			// 
			// panel28
			// 
			this->panel28->Location = System::Drawing::Point(446, 649);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(105, 99);
			this->panel28->TabIndex = 1;
			// 
			// panel29
			// 
			this->panel29->Location = System::Drawing::Point(308, 649);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(105, 99);
			this->panel29->TabIndex = 1;
			// 
			// panel30
			// 
			this->panel30->Location = System::Drawing::Point(167, 649);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(105, 99);
			this->panel30->TabIndex = 1;
			// 
			// panel31
			// 
			this->panel31->Location = System::Drawing::Point(26, 649);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(105, 99);
			this->panel31->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(35, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(90, 90);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(2, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 82);
			this->label6->TabIndex = 4;
			this->label6->Text = L"A";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 0;
			// 
			// panel32
			// 
			this->panel32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel32->BackColor = System::Drawing::Color::White;
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel32->Controls->Add(this->label3);
			this->panel32->Location = System::Drawing::Point(178, 28);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(90, 90);
			this->panel32->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 82);
			this->label3->TabIndex = 4;
			this->label3->Text = L"A";
			// 
			// panel33
			// 
			this->panel33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel33->BackColor = System::Drawing::Color::White;
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel33->Controls->Add(this->label2);
			this->panel33->Location = System::Drawing::Point(313, 28);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(90, 90);
			this->panel33->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 82);
			this->label2->TabIndex = 4;
			this->label2->Text = L"A";
			// 
			// panel34
			// 
			this->panel34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel34->BackColor = System::Drawing::Color::White;
			this->panel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel34->Controls->Add(this->label4);
			this->panel34->Location = System::Drawing::Point(441, 28);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(90, 90);
			this->panel34->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(2, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 82);
			this->label4->TabIndex = 3;
			this->label4->Text = L"A";
			// 
			// panel35
			// 
			this->panel35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel35->BackColor = System::Drawing::Color::White;
			this->panel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel35->Controls->Add(this->label5);
			this->panel35->Location = System::Drawing::Point(572, 28);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(90, 90);
			this->panel35->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(2, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 82);
			this->label5->TabIndex = 4;
			this->label5->Text = L"A";
			// 
			// panel36
			// 
			this->panel36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel36->BackColor = System::Drawing::Color::White;
			this->panel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel36->Controls->Add(this->label7);
			this->panel36->Location = System::Drawing::Point(35, 142);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(90, 90);
			this->panel36->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 82);
			this->label7->TabIndex = 4;
			this->label7->Text = L"A";
			// 
			// panel37
			// 
			this->panel37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel37->BackColor = System::Drawing::Color::White;
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Controls->Add(this->label8);
			this->panel37->Location = System::Drawing::Point(178, 142);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(90, 90);
			this->panel37->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 82);
			this->label8->TabIndex = 4;
			this->label8->Text = L"A";
			// 
			// panel38
			// 
			this->panel38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel38->BackColor = System::Drawing::Color::White;
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Controls->Add(this->label9);
			this->panel38->Location = System::Drawing::Point(313, 142);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(90, 90);
			this->panel38->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 82);
			this->label9->TabIndex = 4;
			this->label9->Text = L"A";
			// 
			// panel39
			// 
			this->panel39->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel39->BackColor = System::Drawing::Color::White;
			this->panel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel39->Controls->Add(this->label10);
			this->panel39->Location = System::Drawing::Point(441, 142);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(90, 90);
			this->panel39->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 82);
			this->label10->TabIndex = 4;
			this->label10->Text = L"A";
			// 
			// panel40
			// 
			this->panel40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel40->BackColor = System::Drawing::Color::White;
			this->panel40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel40->Controls->Add(this->label11);
			this->panel40->Location = System::Drawing::Point(572, 142);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(90, 90);
			this->panel40->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(3, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 82);
			this->label11->TabIndex = 4;
			this->label11->Text = L"A";
			// 
			// panel41
			// 
			this->panel41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel41->BackColor = System::Drawing::Color::White;
			this->panel41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel41->Controls->Add(this->label16);
			this->panel41->Location = System::Drawing::Point(35, 271);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(90, 90);
			this->panel41->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(3, 3);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 82);
			this->label16->TabIndex = 4;
			this->label16->Text = L"A";
			// 
			// panel42
			// 
			this->panel42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel42->BackColor = System::Drawing::Color::White;
			this->panel42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel42->Controls->Add(this->label15);
			this->panel42->Location = System::Drawing::Point(178, 271);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(90, 90);
			this->panel42->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(3, 3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 82);
			this->label15->TabIndex = 4;
			this->label15->Text = L"A";
			// 
			// panel43
			// 
			this->panel43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel43->BackColor = System::Drawing::Color::White;
			this->panel43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel43->Controls->Add(this->label14);
			this->panel43->Location = System::Drawing::Point(313, 271);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(90, 90);
			this->panel43->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(3, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 82);
			this->label14->TabIndex = 4;
			this->label14->Text = L"A";
			// 
			// panel44
			// 
			this->panel44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel44->BackColor = System::Drawing::Color::White;
			this->panel44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel44->Controls->Add(this->label13);
			this->panel44->Location = System::Drawing::Point(441, 271);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(90, 90);
			this->panel44->TabIndex = 1;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(3, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 82);
			this->label13->TabIndex = 4;
			this->label13->Text = L"A";
			// 
			// panel45
			// 
			this->panel45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel45->BackColor = System::Drawing::Color::White;
			this->panel45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel45->Controls->Add(this->label12);
			this->panel45->Location = System::Drawing::Point(572, 271);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(90, 90);
			this->panel45->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(3, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 82);
			this->label12->TabIndex = 4;
			this->label12->Text = L"A";
			// 
			// panel46
			// 
			this->panel46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel46->BackColor = System::Drawing::Color::White;
			this->panel46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel46->Controls->Add(this->label17);
			this->panel46->Location = System::Drawing::Point(35, 398);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(90, 90);
			this->panel46->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(3, 3);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(83, 82);
			this->label17->TabIndex = 4;
			this->label17->Text = L"A";
			// 
			// panel47
			// 
			this->panel47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel47->BackColor = System::Drawing::Color::White;
			this->panel47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel47->Controls->Add(this->label18);
			this->panel47->Location = System::Drawing::Point(178, 398);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(90, 90);
			this->panel47->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(3, 3);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 82);
			this->label18->TabIndex = 4;
			this->label18->Text = L"A";
			// 
			// panel48
			// 
			this->panel48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel48->BackColor = System::Drawing::Color::White;
			this->panel48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel48->Controls->Add(this->label19);
			this->panel48->Location = System::Drawing::Point(313, 398);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(90, 90);
			this->panel48->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(3, 3);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 82);
			this->label19->TabIndex = 4;
			this->label19->Text = L"A";
			// 
			// panel49
			// 
			this->panel49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel49->BackColor = System::Drawing::Color::White;
			this->panel49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel49->Controls->Add(this->label20);
			this->panel49->Location = System::Drawing::Point(441, 398);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(90, 90);
			this->panel49->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(3, 3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 82);
			this->label20->TabIndex = 4;
			this->label20->Text = L"A";
			// 
			// panel50
			// 
			this->panel50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel50->BackColor = System::Drawing::Color::White;
			this->panel50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel50->Controls->Add(this->label21);
			this->panel50->Location = System::Drawing::Point(572, 398);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(90, 90);
			this->panel50->TabIndex = 1;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(3, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(83, 82);
			this->label21->TabIndex = 4;
			this->label21->Text = L"A";
			// 
			// panel51
			// 
			this->panel51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel51->BackColor = System::Drawing::Color::White;
			this->panel51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel51->Controls->Add(this->label26);
			this->panel51->Location = System::Drawing::Point(35, 526);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(90, 90);
			this->panel51->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(3, 3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(83, 82);
			this->label26->TabIndex = 4;
			this->label26->Text = L"A";
			// 
			// panel52
			// 
			this->panel52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel52->BackColor = System::Drawing::Color::White;
			this->panel52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel52->Controls->Add(this->label25);
			this->panel52->Location = System::Drawing::Point(178, 526);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(90, 90);
			this->panel52->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(3, 3);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 82);
			this->label25->TabIndex = 4;
			this->label25->Text = L"A";
			// 
			// panel53
			// 
			this->panel53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel53->BackColor = System::Drawing::Color::White;
			this->panel53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel53->Controls->Add(this->label24);
			this->panel53->Location = System::Drawing::Point(313, 526);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(90, 90);
			this->panel53->TabIndex = 1;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(3, 3);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(83, 82);
			this->label24->TabIndex = 4;
			this->label24->Text = L"A";
			// 
			// panel54
			// 
			this->panel54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel54->BackColor = System::Drawing::Color::White;
			this->panel54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel54->Controls->Add(this->label23);
			this->panel54->Location = System::Drawing::Point(441, 526);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(90, 90);
			this->panel54->TabIndex = 1;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(3, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(83, 82);
			this->label23->TabIndex = 4;
			this->label23->Text = L"A";
			// 
			// panel55
			// 
			this->panel55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel55->BackColor = System::Drawing::Color::White;
			this->panel55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel55->Controls->Add(this->label22);
			this->panel55->Location = System::Drawing::Point(572, 526);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(90, 90);
			this->panel55->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(3, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(83, 82);
			this->label22->TabIndex = 4;
			this->label22->Text = L"A";
			// 
			// panel56
			// 
			this->panel56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel56->BackColor = System::Drawing::Color::White;
			this->panel56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel56->Controls->Add(this->label27);
			this->panel56->Location = System::Drawing::Point(35, 654);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(90, 90);
			this->panel56->TabIndex = 1;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(3, 3);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 82);
			this->label27->TabIndex = 4;
			this->label27->Text = L"A";
			// 
			// panel57
			// 
			this->panel57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel57->BackColor = System::Drawing::Color::White;
			this->panel57->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel57->Controls->Add(this->label28);
			this->panel57->Location = System::Drawing::Point(178, 654);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(90, 90);
			this->panel57->TabIndex = 1;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(3, 3);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(83, 82);
			this->label28->TabIndex = 4;
			this->label28->Text = L"A";
			// 
			// panel58
			// 
			this->panel58->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel58->BackColor = System::Drawing::Color::White;
			this->panel58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel58->Controls->Add(this->label29);
			this->panel58->Location = System::Drawing::Point(313, 654);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(90, 90);
			this->panel58->TabIndex = 1;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(3, 3);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(83, 82);
			this->label29->TabIndex = 4;
			this->label29->Text = L"A";
			// 
			// panel59
			// 
			this->panel59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel59->BackColor = System::Drawing::Color::White;
			this->panel59->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel59->Controls->Add(this->label30);
			this->panel59->Location = System::Drawing::Point(441, 654);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(90, 90);
			this->panel59->TabIndex = 1;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(3, 3);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(83, 82);
			this->label30->TabIndex = 4;
			this->label30->Text = L"A";
			// 
			// panel60
			// 
			this->panel60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel60->BackColor = System::Drawing::Color::White;
			this->panel60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel60->Controls->Add(this->label31);
			this->panel60->Location = System::Drawing::Point(572, 654);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(90, 90);
			this->panel60->TabIndex = 1;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(3, 3);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(83, 82);
			this->label31->TabIndex = 4;
			this->label31->Text = L"A";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(572, 781);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(35, 781);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 51);
			this->textBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(276, 781);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 51);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ввести";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(39, 758);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(533, 20);
			this->label32->TabIndex = 5;
			this->label32->Text = L"¬ведите 5 букв через нижний регистр, после нажмите кнопку ввести";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(720, 844);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel60);
			this->Controls->Add(this->panel59);
			this->Controls->Add(this->panel58);
			this->Controls->Add(this->panel57);
			this->Controls->Add(this->panel56);
			this->Controls->Add(this->panel55);
			this->Controls->Add(this->panel54);
			this->Controls->Add(this->panel53);
			this->Controls->Add(this->panel52);
			this->Controls->Add(this->panel51);
			this->Controls->Add(this->panel50);
			this->Controls->Add(this->panel49);
			this->Controls->Add(this->panel48);
			this->Controls->Add(this->panel47);
			this->Controls->Add(this->panel46);
			this->Controls->Add(this->panel45);
			this->Controls->Add(this->panel44);
			this->Controls->Add(this->panel43);
			this->Controls->Add(this->panel42);
			this->Controls->Add(this->panel41);
			this->Controls->Add(this->panel40);
			this->Controls->Add(this->panel39);
			this->Controls->Add(this->panel38);
			this->Controls->Add(this->panel37);
			this->Controls->Add(this->panel36);
			this->Controls->Add(this->panel35);
			this->Controls->Add(this->panel34);
			this->Controls->Add(this->panel33);
			this->Controls->Add(this->panel32);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(742, 900);
			this->MinimumSize = System::Drawing::Size(742, 828);
			this->Name = L"MyForm";
			this->Text = L"Wordly";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel36->PerformLayout();
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			this->panel39->ResumeLayout(false);
			this->panel39->PerformLayout();
			this->panel40->ResumeLayout(false);
			this->panel40->PerformLayout();
			this->panel41->ResumeLayout(false);
			this->panel41->PerformLayout();
			this->panel42->ResumeLayout(false);
			this->panel42->PerformLayout();
			this->panel43->ResumeLayout(false);
			this->panel43->PerformLayout();
			this->panel44->ResumeLayout(false);
			this->panel44->PerformLayout();
			this->panel45->ResumeLayout(false);
			this->panel45->PerformLayout();
			this->panel46->ResumeLayout(false);
			this->panel46->PerformLayout();
			this->panel47->ResumeLayout(false);
			this->panel47->PerformLayout();
			this->panel48->ResumeLayout(false);
			this->panel48->PerformLayout();
			this->panel49->ResumeLayout(false);
			this->panel49->PerformLayout();
			this->panel50->ResumeLayout(false);
			this->panel50->PerformLayout();
			this->panel51->ResumeLayout(false);
			this->panel51->PerformLayout();
			this->panel52->ResumeLayout(false);
			this->panel52->PerformLayout();
			this->panel53->ResumeLayout(false);
			this->panel53->PerformLayout();
			this->panel54->ResumeLayout(false);
			this->panel54->PerformLayout();
			this->panel55->ResumeLayout(false);
			this->panel55->PerformLayout();
			this->panel56->ResumeLayout(false);
			this->panel56->PerformLayout();
			this->panel57->ResumeLayout(false);
			this->panel57->PerformLayout();
			this->panel58->ResumeLayout(false);
			this->panel58->PerformLayout();
			this->panel59->ResumeLayout(false);
			this->panel59->PerformLayout();
			this->panel60->ResumeLayout(false);
			this->panel60->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void visibility() {
			this->label6->Visible = false;
			this->label3->Visible = false;
			this->label2->Visible = false;
			this->label4->Visible = false;
			this->label5->Visible = false;

			this->label7->Visible = false;
			this->label8->Visible = false;
			this->label9->Visible = false;
			this->label10->Visible = false;
			this->label11->Visible = false;

			this->label16->Visible = false;
			this->label15->Visible = false;
			this->label14->Visible = false;
			this->label13->Visible = false;
			this->label12->Visible = false;

			this->label17->Visible = false;
			this->label18->Visible = false;
			this->label19->Visible = false;
			this->label20->Visible = false;
			this->label21->Visible = false;

			this->label26->Visible = false;
			this->label25->Visible = false;
			this->label24->Visible = false;
			this->label23->Visible = false;
			this->label22->Visible = false;

			this->label27->Visible = false;
			this->label28->Visible = false;
			this->label29->Visible = false;
			this->label30->Visible = false;
			this->label31->Visible = false;

			this->panel1->BackColor = BackColor.White;
			this->panel32->BackColor = BackColor.White;
			this->panel33->BackColor = BackColor.White;
			this->panel34->BackColor = BackColor.White;
			this->panel35->BackColor = BackColor.White;

			this->panel36->BackColor = BackColor.White;
			this->panel37->BackColor = BackColor.White;
			this->panel38->BackColor = BackColor.White;
			this->panel39->BackColor = BackColor.White;
			this->panel40->BackColor = BackColor.White;

			this->panel41->BackColor = BackColor.White;
			this->panel42->BackColor = BackColor.White;
			this->panel43->BackColor = BackColor.White;
			this->panel44->BackColor = BackColor.White;
			this->panel45->BackColor = BackColor.White;

			this->panel46->BackColor = BackColor.White;
			this->panel47->BackColor = BackColor.White;
			this->panel48->BackColor = BackColor.White;
			this->panel49->BackColor = BackColor.White;
			this->panel50->BackColor = BackColor.White;

			this->panel51->BackColor = BackColor.White;
			this->panel52->BackColor = BackColor.White;
			this->panel53->BackColor = BackColor.White;
			this->panel54->BackColor = BackColor.White;
			this->panel55->BackColor = BackColor.White;

			this->panel56->BackColor = BackColor.White;
			this->panel57->BackColor = BackColor.White;
			this->panel58->BackColor = BackColor.White;
			this->panel59->BackColor = BackColor.White;
			this->panel60->BackColor = BackColor.White;
			this->word = "бол€м";
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		visibility();
		this->button2->Enabled = true;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->line < 7 && win == false) {
			String^ line1 = this->textBox1->Text;
			if (line1->Length != 5) {
				MessageBox::Show("¬ведите 5 буквы!!");
			}
			else {
				this->textBox1->Text = "";

				if (this->line == 1) {
					this->label6->Visible = true;
					this->label3->Visible = true;
					this->label2->Visible = true;
					this->label4->Visible = true;
					this->label5->Visible = true;
					this->label6->Text = line1[0].ToString();
					this->label3->Text = line1[1].ToString();
					this->label2->Text = line1[2].ToString();
					this->label4->Text = line1[3].ToString();
					this->label5->Text = line1[4].ToString();
					bool truth0 = false;
					bool truth1 = false;
					bool truth2 = false;
					bool truth3 = false;
					bool truth4 = false;
					if (word[0].ToString() == this->label6->Text) {
						truth0 = true;
						panel1->BackColor = BackColor.Green;
					}
					if (word[1].ToString() == this->label3->Text) {
						truth1 = true;
						panel32->BackColor = BackColor.Green;
					}
					if (word[2].ToString() == this->label2->Text) {
						truth2 = true;
						panel33->BackColor = BackColor.Green;
					}
					if (word[3].ToString() == this->label4->Text) {
						truth3 = true;
						panel34->BackColor = BackColor.Green;
					}
					if (word[4].ToString() == this->label5->Text) {
						truth4 = true;
						panel35->BackColor = BackColor.Green;
					}
					this->line++;
					if (truth0 && truth1 && truth2 && truth3 && truth4) {
						button2->Enabled = false;
						this->line = 1;
					}
					return;
				}

				if (this->line == 2) {
					this->label7->Visible = true;
					this->label8->Visible = true;
					this->label9->Visible = true;
					this->label10->Visible = true;
					this->label11->Visible = true;
					this->label7->Text = line1[0].ToString();
					this->label8->Text = line1[1].ToString();
					this->label9->Text = line1[2].ToString();
					this->label10->Text = line1[3].ToString();
					this->label11->Text = line1[4].ToString();
					bool truth0 = false;
					bool truth1 = false;
					bool truth2 = false;
					bool truth3 = false;
					bool truth4 = false;
					if (word[0].ToString() == this->label7->Text) {
						truth0 = true;
						panel36->BackColor = BackColor.Green;
					}
					if (word[1].ToString() == this->label8->Text) {
						truth1 = true;
						panel37->BackColor = BackColor.Green;
					}
					if (word[2].ToString() == this->label9->Text) {
						truth2 = true;
						panel38->BackColor = BackColor.Green;
					}
					if (word[3].ToString() == this->label10->Text) {
						truth3 = true;
						panel39->BackColor = BackColor.Green;
					}
					if (word[4].ToString() == this->label11->Text) {
						truth4 = true;
						panel40->BackColor = BackColor.Green;
					}
					this->line++;
					if (truth0 && truth1 && truth2 && truth3 && truth4) {
						button2->Enabled = false;
						this->line = 1;
					}
					return;
				}

				if (this->line == 3) {
					this->label16->Visible = true;
					this->label15->Visible = true;
					this->label14->Visible = true;
					this->label13->Visible = true;
					this->label12->Visible = true;
					this->label16->Text = line1[0].ToString();
					this->label15->Text = line1[1].ToString();
					this->label14->Text = line1[2].ToString();
					this->label13->Text = line1[3].ToString();
					this->label12->Text = line1[4].ToString();
					bool truth0 = false;
					bool truth1 = false;
					bool truth2 = false;
					bool truth3 = false;
					bool truth4 = false;
					if (word[0].ToString() == this->label16->Text) {
						truth0 = true;
						panel41->BackColor = BackColor.Green;
					}
					if (word[1].ToString() == this->label15->Text) {
						truth1 = true;
						panel42->BackColor = BackColor.Green;
					}
					if (word[2].ToString() == this->label14->Text) {
						truth2 = true;
						panel43->BackColor = BackColor.Green;
					}
					if (word[3].ToString() == this->label13->Text) {
						truth3 = true;
						panel44->BackColor = BackColor.Green;
					}
					if (word[4].ToString() == this->label12->Text) {
						truth4 = true;
						panel45->BackColor = BackColor.Green;
					}
					this->line++;
					this->win = truth0 && truth1 && truth2 && truth3 && truth4;
					return;
					if (this->win) {
						button2->Enabled = false;
						this->line = 1;
					}
				}

				if (this->line == 4) {
					this->label17->Visible = true;
					this->label18->Visible = true;
					this->label19->Visible = true;
					this->label20->Visible = true;
					this->label21->Visible = true;
					this->label17->Text = line1[0].ToString();
					this->label18->Text = line1[1].ToString();
					this->label19->Text = line1[2].ToString();
					this->label20->Text = line1[3].ToString();
					this->label21->Text = line1[4].ToString();
					bool truth0 = false;
					bool truth1 = false;
					bool truth2 = false;
					bool truth3 = false;
					bool truth4 = false;
					if (word[0].ToString() == this->label17->Text) {
						truth0 = true;
						panel46->BackColor = BackColor.Green;
					}
					if (word[1].ToString() == this->label18->Text) {
						truth1 = true;
						panel47->BackColor = BackColor.Green;
					}
					if (word[2].ToString() == this->label19->Text) {
						truth2 = true;
						panel48->BackColor = BackColor.Green;
					}
					if (word[3].ToString() == this->label20->Text) {
						truth3 = true;
						panel49->BackColor = BackColor.Green;
					}
					if (word[4].ToString() == this->label21->Text) {
						truth4 = true;
						panel50->BackColor = BackColor.Green;
					}
					this->line++;
					if (truth0 && truth1 && truth2 && truth3 && truth4) {
						button2->Enabled = false;
						this->line = 1;
					}
					return;
				}

				if (this->line == 5) {
					this->label26->Visible = true;
					this->label25->Visible = true;
					this->label24->Visible = true;
					this->label23->Visible = true;
					this->label22->Visible = true;
					this->label26->Text = line1[0].ToString();
					this->label25->Text = line1[1].ToString();
					this->label24->Text = line1[2].ToString();
					this->label23->Text = line1[3].ToString();
					this->label22->Text = line1[4].ToString();
					bool truth0 = false;
					bool truth1 = false;
					bool truth2 = false;
					bool truth3 = false;
					bool truth4 = false;
					if (word[0].ToString() == this->label26->Text) {
						truth0 = true;
						panel51->BackColor = BackColor.Green;
					}
					if (word[1].ToString() == this->label25->Text) {
						truth1 = true;
						panel52->BackColor = BackColor.Green;
					}
					if (word[2].ToString() == this->label24->Text) {
						truth2 = true;
						panel53->BackColor = BackColor.Green;
					}
					if (word[3].ToString() == this->label23->Text) {
						truth3 = true;
						panel54->BackColor = BackColor.Green;
					}
					if (word[4].ToString() == this->label22->Text) {
						truth4 = true;
						panel55->BackColor = BackColor.Green;
					}
					this->line++;
					if (truth0 && truth1 && truth2 && truth3 && truth4) {
						button2->Enabled = false;
						this->line = 1;
					}
					return;
				}

				if (this->line == 6) {
					this->label27->Visible = true;
					this->label28->Visible = true;
					this->label29->Visible = true;
					this->label30->Visible = true;
					this->label31->Visible = true;
					this->label27->Text = line1[0].ToString();
					this->label28->Text = line1[1].ToString();
					this->label29->Text = line1[2].ToString();
					this->label30->Text = line1[3].ToString();
					this->label31->Text = line1[4].ToString();
					bool truth0 = false;
					bool truth1 = false;
					bool truth2 = false;
					bool truth3 = false;
					bool truth4 = false;
					if (word[0].ToString() == this->label27->Text) {
						truth0 = true;
						panel56->BackColor = BackColor.Green;
					}
					if (word[1].ToString() == this->label28->Text) {
						truth1 = true;
						panel57->BackColor = BackColor.Green;
					}
					if (word[2].ToString() == this->label29->Text) {
						truth2 = true;
						panel58->BackColor = BackColor.Green;
					}
					if (word[3].ToString() == this->label30->Text) {
						truth3 = true;
						panel59->BackColor = BackColor.Green;
					}
					if (word[4].ToString() == this->label31->Text) {
						truth4 = true;
						panel60->BackColor = BackColor.Green;
					}
					this->line++;
					if (truth0 && truth1 && truth2 && truth3 && truth4) {
						button2->Enabled = false;
						this->line = 1;
					}
					return;
				}
			}
		}
		else {
			this->button2->Enabled = false;
		}
	}
	};
}
