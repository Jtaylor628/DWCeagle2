#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		System::Drawing::Brush^ yelloBrush;
		System::Drawing::Brush^ whiteBrush;
		System::Drawing::Graphics^ g;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Image/ Show";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 208);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Hide";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 284);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Click twice";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 349);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		yelloBrush = gcnew Drawing::SolidBrush(Color::Yellow);
		g = pictureBox1->CreateGraphics();
	}
			
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/*Drawing::Rectangle circleRect(38, 25, 150, 150);
		g->FillEllipse(yelloBrush, circleRect);*/
		
	
			Bitmap^ bmp = gcnew Bitmap(L"DWCeagle.bmp");		//Have to click button twice, one to create image and again to turn visibility on. Dont know why. 
			g->DrawImage(bmp, 0, 0);
			pictureBox1->Visible = true;
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		pictureBox1->Visible = false;
		Bitmap^ bmp = gcnew Bitmap(L"DWCeagle.bmp");
		g->DrawImage(bmp, 0, 0);

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


	pictureBox1->Visible = true;
}


};
}
