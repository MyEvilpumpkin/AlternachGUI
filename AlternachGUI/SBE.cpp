#include <iostream>
#include "ReverseGoL.h"
#include "SBE.h"

extern Cell* PATTERNS0; // Паттерны не создающие жизнь в центе
extern int NUM_OF_PATTERNS0; // Количество паттернов, не создающих жизнь в центе
extern Cell* PATTERNS1; // Паттерны создающие жизнь в центре
extern int NUM_OF_PATTERNS1; // Количество паттернов, создающих жизнь в центре

SBE::SBE() {
	DNF0 = gcnew array<array<String^>^>(NUM_OF_PATTERNS0);
	CNF1 = gcnew array<array<String^>^>(NUM_OF_PATTERNS0);
	for (int i = 0; i < NUM_OF_PATTERNS0; i++) {
		DNF0[i] = gcnew array<String^>(9);
		CNF1[i] = gcnew array<String^>(9);
		for (int j = 1; j <= 9; j++) {
			if (MatchCheck(j, PATTERNS0[i].pattern)) {
				DNF0[i][j - 1] = "x";
				CNF1[i][j - 1] = "¬x";
			}
			else {
				DNF0[i][j - 1] = "¬x";
				CNF1[i][j - 1] = "x";
			}
		}
	}
	DNF1 = gcnew array<array<String^>^>(NUM_OF_PATTERNS1);
	CNF0 = gcnew array<array<String^>^>(NUM_OF_PATTERNS1);
	for (int i = 0; i < NUM_OF_PATTERNS1; i++) {
		DNF1[i] = gcnew array<String^>(9);
		CNF0[i] = gcnew array<String^>(9);
		for (int j = 1; j <= 9; j++) {
			if (MatchCheck(j, PATTERNS1[i].pattern)) {
				DNF1[i][j - 1] = "x";
				CNF0[i][j - 1] = "¬x";
			}
			else {
				DNF1[i][j - 1] = "¬x";
				CNF0[i][j - 1] = "x";
			}
		}
	}
}

SBE::~SBE() {
	for (int i = 0; i < NUM_OF_PATTERNS0; i++) {
		delete[] DNF0[i];
		delete[] CNF1[i];
	}
	delete[] DNF0;
	delete[] CNF1;
	for (int i = 0; i < NUM_OF_PATTERNS1; i++) {
		delete[] DNF1[i];
		delete[] CNF0[i];
	}
	delete[] DNF1;
	delete[] CNF0;
}

void SBE::CreateHTML(formula option, int** field, int maxM, int maxN) {
	int Ycounter = 1;
	StreamWriter^ sw = gcnew StreamWriter("SBE.html");
	sw->Write("<html><meta charset=\"utf-8\"><h1>System of Boolean Equations</h1><br><p style = \"word-wrap: break-word\"><em>");
	for (int m = 0; m < maxM; m++) {
		for (int n = 0; n < maxN; n++) {
			int nums[9] = { m*(maxN + 2) + n + 1, m*(maxN + 2) + n + 2, m*(maxN + 2) + n + 3, m*(maxN + 2) + n + 1 + (maxN + 2), m*(maxN + 2) + n + 2 + (maxN + 2), m*(maxN + 2) + n + 3 + (maxN + 2), m*(maxN + 2) + n + 1 + (maxN + 2) * 2, m*(maxN + 2) + n + 2 + (maxN + 2) * 2, m*(maxN + 2) + n + 3 + (maxN + 2) * 2 };
			if (field[m][n] + 2)
				if (option == DNF) {
					for (int i = 0; i < NUM_OF_PATTERNS1; i++) {
						sw->Write("(");
						for (int j = 0; j < 9; j++)
							sw->Write(DNF1[i][j] + "<sub>" + nums[j] + "</sub>");
						sw->Write(")");
						if (i != NUM_OF_PATTERNS1 - 1)
							sw->Write("V");
					}
				}
				else {
					for (int i = 0; i < NUM_OF_PATTERNS0; i++)
						if (option == CNF) {
							sw->Write("(");
							for (int j = 0; j < 9; j++) {
								sw->Write(CNF1[i][j] + "<sub>" + nums[j] + "</sub>");
								if (j != 8)
									sw->Write("V");
							}
							sw->Write(")");
						}
						else {
							for (int j = 1; j < 8; j++) {
								if (j == 1)
									sw->Write("(" + CNF1[i][j - 1] + "<sub>" + nums[j - 1] + "</sub>V" + CNF1[i][j] + "<sub>" + nums[j] + "</sub>Vy" + "<sub>" + Ycounter + "</sub>)");
								if (j > 1 && j <= 6)
									sw->Write("(¬y<sub>" + (Ycounter - 1) + "</sub>V" + CNF1[i][j] + "<sub>" + nums[j] + "</sub>Vy" + "<sub>" + Ycounter + "</sub>)");
								if (j == 7)
									sw->Write("(¬y<sub>" + (Ycounter - 1) + "</sub>V" + CNF1[i][j] + "<sub>" + nums[j] + "</sub>V" + CNF1[i][j + 1] + "<sub>" + nums[j + 1] + "</sub>)");
								if (j <= 6)
									Ycounter++;
							}
						}
				}
			else
				if (option == DNF) {
					for (int i = 0; i < NUM_OF_PATTERNS0; i++) {
						sw->Write("(");
						for (int j = 0; j < 9; j++)
							sw->Write(DNF0[i][j] + "<sub>" + nums[j] + "</sub>");
						sw->Write(")");
						if (i != NUM_OF_PATTERNS0 - 1)
							sw->Write("V");
					}
				}
				else {
					for (int i = 0; i < NUM_OF_PATTERNS1; i++)
						if (option == CNF) {
							sw->Write("(");
							for (int j = 0; j < 9; j++) {
								sw->Write(CNF0[i][j] + "<sub>" + nums[j] + "</sub>");
								if (j != 8)
									sw->Write("V");
							}
							sw->Write(")");
						}
						else {
							for (int j = 1; j < 8; j++) {
								if (j == 1)
									sw->Write("(" + CNF0[i][j - 1] + "<sub>" + nums[j - 1] + "</sub>V" + CNF0[i][j] + "<sub>" + nums[j] + "</sub>Vy" + "<sub>" + Ycounter + "</sub>)");
								if (j > 1 && j <= 6)
									sw->Write("(¬y<sub>" + (Ycounter - 1) + "</sub>V" + CNF0[i][j] + "<sub>" + nums[j] + "</sub>Vy" + "<sub>" + Ycounter + "</sub>)");
								if (j == 7)
									sw->Write("(¬y<sub>" + (Ycounter - 1) + "</sub>V" + CNF0[i][j] + "<sub>" + nums[j] + "</sub>V" + CNF0[i][j + 1] + "<sub>" + nums[j + 1] + "</sub>)");
								if (j <= 6)
									Ycounter++;
							}
						}
				}
		}
	}
	sw->Write("</em></p></html>");
	sw->Close();
}

void SBE::DeleteHTML() {
	String^ path = Directory::GetCurrentDirectory() + "\\SBE.html";
	if (File::Exists(path))
		File::Delete(path);
}
