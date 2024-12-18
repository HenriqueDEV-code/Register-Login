#pragma once
#include "User.h"
namespace MyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Sumário para RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ BtnOK;
	private: System::Windows::Forms::Button^ BtnCancel;
	private: System::Windows::Forms::LinkLabel^ LinkLogin;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BtnOK = (gcnew System::Windows::Forms::Button());
			this->BtnCancel = (gcnew System::Windows::Forms::Button());
			this->LinkLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 9);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(674, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(205, 108);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(461, 31);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(205, 143);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(461, 31);
			this->tbEmail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(205, 180);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(461, 31);
			this->tbPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(205, 220);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(461, 31);
			this->tbAddress->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(205, 259);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(461, 31);
			this->tbPassword->TabIndex = 2;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(205, 299);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(461, 31);
			this->tbConfirmPassword->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 305);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 25);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Confirm Password";
			// 
			// BtnOK
			// 
			this->BtnOK->Location = System::Drawing::Point(205, 359);
			this->BtnOK->Name = L"BtnOK";
			this->BtnOK->Size = System::Drawing::Size(240, 33);
			this->BtnOK->TabIndex = 4;
			this->BtnOK->Text = L"OK";
			this->BtnOK->UseVisualStyleBackColor = true;
			this->BtnOK->Click += gcnew System::EventHandler(this, &RegisterForm::BtnOK_Click);
			// 
			// BtnCancel
			// 
			this->BtnCancel->Location = System::Drawing::Point(451, 359);
			this->BtnCancel->Name = L"BtnCancel";
			this->BtnCancel->Size = System::Drawing::Size(215, 33);
			this->BtnCancel->TabIndex = 5;
			this->BtnCancel->Text = L"Cancel";
			this->BtnCancel->UseVisualStyleBackColor = true;
			this->BtnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::BtnCancel_Click);
			// 
			// LinkLogin
			// 
			this->LinkLogin->AutoSize = true;
			this->LinkLogin->Location = System::Drawing::Point(601, 399);
			this->LinkLogin->Name = L"LinkLogin";
			this->LinkLogin->Size = System::Drawing::Size(65, 25);
			this->LinkLogin->TabIndex = 6;
			this->LinkLogin->TabStop = true;
			this->LinkLogin->Text = L"Login";
			this->LinkLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::LinkLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(678, 433);
			this->Controls->Add(this->LinkLogin);
			this->Controls->Add(this->BtnCancel);
			this->Controls->Add(this->BtnOK);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void BtnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	   public: bool switchToLogin = false;

private: System::Void LinkLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->switchToLogin = true;
	this->Close();
	  
}

	   public: User^ user = nullptr;
private: System::Void BtnOK_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name = tbName->Text;
	String^ email = tbEmail->Text;
	String^ phone = tbPhone->Text;
	String^ address = tbAddress->Text;
	String^ password = tbPassword->Text;
	String^ confirmpassword = tbConfirmPassword->Text;

	if (name->Length == 0 || email->Length == 0
		|| phone->Length == 0 || address->Length == 0
		|| password->Length == 0)
	{
		MessageBox::Show("Please enter all the fields",
			"On or more fields", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(password, confirmpassword) != 0)
	{
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=HENRIQUE\\HENRIQUE;Initial Catalog=MyRestaurant;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users " +
			"(name, email, phone, address, password) VALUES " +
			"(@name, @email, @phone, @address, @password);";


		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@password", password);
        
		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = password;
		this->Close();
	}
	catch(Exception^ ex){
		MessageBox::Show("Falied to register new user",
			"Register Failure", MessageBoxButtons::OK);
	}

}
};
}
