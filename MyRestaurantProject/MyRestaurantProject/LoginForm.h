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
	/// Sumário para LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TBPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCANCEL;
	private: System::Windows::Forms::LinkLabel^ LinkRegister;




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
			this->TBEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TBPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCANCEL = (gcnew System::Windows::Forms::Button());
			this->LinkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email: ";
			// 
			// TBEmail
			// 
			this->TBEmail->Location = System::Drawing::Point(133, 104);
			this->TBEmail->Name = L"TBEmail";
			this->TBEmail->Size = System::Drawing::Size(291, 31);
			this->TBEmail->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password: ";
			// 
			// TBPassword
			// 
			this->TBPassword->Location = System::Drawing::Point(133, 139);
			this->TBPassword->Name = L"TBPassword";
			this->TBPassword->PasswordChar = '*';
			this->TBPassword->Size = System::Drawing::Size(291, 31);
			this->TBPassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(133, 227);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(117, 35);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCANCEL
			// 
			this->btnCANCEL->Location = System::Drawing::Point(307, 227);
			this->btnCANCEL->Name = L"btnCANCEL";
			this->btnCANCEL->Size = System::Drawing::Size(117, 35);
			this->btnCANCEL->TabIndex = 6;
			this->btnCANCEL->Text = L"CANCEL";
			this->btnCANCEL->UseVisualStyleBackColor = true;
			this->btnCANCEL->Click += gcnew System::EventHandler(this, &LoginForm::btnCANCEL_Click);
			// 
			// LinkRegister
			// 
			this->LinkRegister->AutoSize = true;
			this->LinkRegister->Location = System::Drawing::Point(332, 265);
			this->LinkRegister->Name = L"LinkRegister";
			this->LinkRegister->Size = System::Drawing::Size(92, 25);
			this->LinkRegister->TabIndex = 7;
			this->LinkRegister->TabStop = true;
			this->LinkRegister->Text = L"Register";
			this->LinkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::LinkRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(436, 299);
			this->Controls->Add(this->LinkRegister);
			this->Controls->Add(this->btnCANCEL);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->TBPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCANCEL_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	 public: User^ user = nullptr;

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->TBEmail->Text;
	String^ password = this->TBPassword->Text;


	if (email->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please enter email and password",
			"Email or Password Empty", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=HENRIQUE\\HENRIQUE;Initial Catalog=MyRestaurant;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);
		
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
			user->email = reader->GetString(2);
			user->phone = reader->GetString(3);
			user->address = reader->GetString(4);
			user->password = reader->GetString(5);
			this->Close();
		}
		else {
			MessageBox::Show("Email or password is incorrect",
				"Email or Password ERROR", MessageBoxButtons::OK);
		}


	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);

	}
}

	   public: bool switchToRegister = false;

private: System::Void LinkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->switchToRegister = true;
	this->Close();
}
};
}
