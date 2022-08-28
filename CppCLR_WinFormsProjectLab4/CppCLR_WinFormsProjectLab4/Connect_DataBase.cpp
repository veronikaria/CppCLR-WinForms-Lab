#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Data::Odbc;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;


	class Connect_DataBase
	{
	public: ref struct MyStruct
	{
		String^ name;
		String^ date;
		int price;
		int count;
	};
		  OdbcConnection^ conn = gcnew OdbcConnection();
		  OdbcCommand^ MyCommand;
		  OdbcDataReader^ MyDataReader;
		  

	};


#pragma endregion

};
