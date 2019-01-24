#pragma once

enum formula { DNF, CNF, CNF3 };

using namespace System;
using namespace System::IO;

public ref class SBE {

	array<array<String^>^>^ DNF0;
	array<array<String^>^>^ DNF1;
	array<array<String^>^>^ CNF0;
	array<array<String^>^>^ CNF1;
public:
	SBE();
	~SBE();
	void CreateHTML(formula option, int** field, int maxM, int maxN);
	void DeleteHTML();

};
