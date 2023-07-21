#pragma once

#include <Windows.h>
#include <iostream>
#include <msclr/marshal.h>

namespace FirstCppProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace msclr::interop;

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

    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Timer^ timer1;
    private: System::Windows::Forms::Timer^ timer2;
    private: System::Windows::Forms::Timer^ timer3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;


    private: System::ComponentModel::IContainer^ components;
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AccessibleName = L"label";
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Maroon;
            this->label1->Location = System::Drawing::Point(28, 23);
            this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(291, 30);
            this->label1->TabIndex = 1;
            this->label1->Text = L" ITEMS IN THE CLIP BOARD";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(29, 132);
            this->label2->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(635, 24);
            this->label2->TabIndex = 3;
            this->label2->Text = L"                                                                                 "
                L"                                   .        ";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // timer2
            // 
            this->timer2->Enabled = true;
            this->timer2->Interval = 3000;
            this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(29, 76);
            this->label3->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(635, 24);
            this->label3->TabIndex = 4;
            this->label3->Text = L"                                                                                 "
                L"                                   .        ";
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Maroon;
            this->button1->Location = System::Drawing::Point(764, 413);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(88, 40);
            this->button1->TabIndex = 5;
            this->button1->Text = L"copy";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(852, 454);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }

           // Function to show clipboard items
           String^ clipboardTextmain = Clipboard::GetText();
           void ShowClipboardItems()
           {

               // Check if there are any items in the clipboard
               if (Clipboard::ContainsText())
               {
                   // Get the text data from the clipboard
                   String^ clipboardText = Clipboard::GetText();

                   if (!String::Equals(clipboardText, clipboardTextmain, StringComparison::Ordinal))
                   {
                       clipboardTextmain = clipboardText;
                       label2->Text = clipboardText;
                       label3->Text = "CLIP BOARD CHANGED";
                       label3->ForeColor = Color::Red;
                   }
                   else
                   {
                       clipboardTextmain = clipboardText;
                       label2->Text = clipboardText;

                   }

               }
               else
               {
                   label2->Text = "No items found in the clipboard.";
               }
           }


    private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
        ShowClipboardItems();
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {        }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        label3->Text = "CLIP BOARD UNCHANGED";
        label3->ForeColor = Color::Green;
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

    }
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Add STAThreadAttribute to run in STA mode
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and run the main form
    FirstCppProject::MyForm form;
    Application::Run(% form);

    return 0;
}