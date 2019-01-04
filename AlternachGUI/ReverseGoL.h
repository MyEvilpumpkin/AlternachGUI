#pragma once

// ������� - ���������� ������ � �������� 3x3, ���������� � ���� ���������� ������� �����, ������� � �������
// ���� - ���������� ���������
// ��������������� ���� - ����, � ������� ��� �������� �������� �� ������������� �� ���������� ������ � �����

enum dir { UP, LEFT, DOWN, RIGHT }; // ����������� ������ ���������

int** FreeField(int**, int); // ������������ ������ �� ��� �����
void FreePatterns(); // ������������ ������ �� ��� ���������
void FindAllPatterns(); // ���������� ���� ���������, ��������� � �� ��������� �����
int MovePattern(int, dir); // ����� ��������
bool MatchCheck(int, int); // �������� �� ������� ���������� � ���� ���������
bool FullMatchCheck(int, int); // �������� �� ���������� ������ �������� � ������
int InversePattern(int); // ����������� ��������, ������������ �������� ������� �� ������� (���������� ������ �� ������)
int* FindNeighboursOneSide(int, dir, bool); // ����� ��������� ���������, ���� ���� �������� ������� ������ � ����� �� ������ (������ ��� �����)
int* FindNeighboursTwoSide(int, int, bool); // ����� ��������� ���������, ���� ���� �������� �������� � ���� ������ (������ � �����)
int** CopyField(int**, int, int); // �������� ����� ����
bool BoundaryCheck(int**, int, int, int, int); // �������� ���������, ����������� �� ������� ���� (�������� �� ������� �� ������ ��������� ����� �� ��������� ����)
void FindAllFields(int**, int, int); // ���������� �����, �������������� ��������� ����
int** ReformField(int**, int, int); // ����������� �� ���� ��������� ���������������� ����
void Set_FIELDS(int***);
void Set_NUM_OF_FIELDS(int);
int*** Get_FIELDS();
int Get_NUM_OF_FIELDS();