/* 
���������������� ��� ��������� zlib,
��. http://www.gzip.org/zlib/zlib_license.html
����������� - ���� ������.
*/

#ifndef _TML_GENERATOR_H_
#define _TML_GENERATOR_H_

#include "definitions.h"
#include "tml.h"
#include "ast.h"
#include "types.h"
#include "variable.h"
#include "HashTable.h"
#include "label.h"
#include <stdio.h>
/*******************************************************************
	���������� � ����������������, �������������� ��������� 
	����� �������������� ������������ � ����������� ��������� ����
********************************************************************/

#include "basic-ops.h"

/* ���������� ��������� ����� */
void TMLWriteHeader(FILE *outputFile);
/* ���������� ������� ������� ���� � ������*/
void TMLSegmentSize(FILE *outputFile, unsigned short codeSegmentSize, unsigned short dataSegmentSize);
/* ���������� �������� �������������� �������� */
void TMLBinaryArith(FILE* outputFile, opEnum op, AstNode* leftOperand, AstNode* rightOperand);
void TMLBinaryArith(FILE* outputFile, char op, AstNode* leftOperand, AstNode* rightOperand);
/* ���������� �������� ���������� �������� */
void TMLBinaryLogical(FILE* outputFile, opEnum op, AstNode* leftOperand, AstNode* rightOperand);
/* ���������� ������� �������������� �������� */
void TMLUnaryArith(FILE* outputFile, opEnum op, AstNode* operand);
/* ���������� ������� ���������� �������� */
void TMLUnaryLogical(FILE* outputFile, opEnum op, AstNode* operand);
/* ���������� �������� �����-������ */
void TMLInputOutput(FILE* outputFile, opEnum op, AstNode *operand);
/* ���������� �������� ����������-�������� */
void TMLSaveLoad(FILE* outputFile, opEnum op, AstNode* operand);
/* ���������� � �������� ��������� ��������*/
void TMLSaveLoadArrayItem(FILE* outputFile, opEnum op, AstNode* arr, AstNode* index);
/* ���������� � �������� ��������� ��������� */
void TMLSaveLoadStructItem(FILE* outputFile, opEnum op, AstNode* str, AstNode* field);
/* ���������� iffalse */
void TMLIf(FILE* outputFile, opEnum op, AstNode* condition, AstNode* label);
/* ���������� �������� ��������� */
void TMLComparison(FILE* outputFile, opEnum op, AstNode* leftOperand, AstNode* rightOperand);
/* ���������� goto */
void TMLGoto(FILE* outputFile, opEnum op, AstNode* label);
/* ���������� ������ ������� */
void TMLFillDataSegment(FILE *outputFile);

/*******************************************************************
	���������� ���������� � ����������������, �������������� ������
	���������� ��������� ����
********************************************************************/

#define TML_TRUE	"1"
#define TML_FALSE	"0"

extern THashTable<std::string, TLabel*> g_labelTable;
extern THashTable<std::string, TVariable*> g_tmpVarsTable;
extern THashTable<std::string, TVariable*> g_literalTable;

/* ���������� �������� ���������� ��� ��������� */ 
MachineInstruction GenerateNoArgInstruction(TMLCOMMAND op, enumTypes typeId);
/* ���������� �������� ���������� � ����� ��������� */
MachineInstruction GenerateSingleArgInstruction(TMLCOMMAND op, AstNode *operand);
/* ���������� �������� ���������� �������� */
MachineInstruction GenerateJumpInstruction(unsigned char opCode);
/* ���������� �������� ������� ��� ������ �� ������ */
MachineInstruction GeneratePushPopInstruction(unsigned char opCode);
/* ���������� �������� ���������� ����������-�������� �������� ������� */
MachineInstruction GenerateSaveLoadArrayItemInstruction(TMLCOMMAND op, AstNode* arr, AstNode* index);
/* ���������� �������� ���������� ����������-�������� �������� ��������� */
MachineInstruction GenerateSaveLoadStructFieldInstruction(TMLCOMMAND op, AstNode* structNode, AstNode* fieldNode);
/* ����� � �������� ���� ����� ��������� ��� �������� ���������� �������� ��� ���������� ������������ � ��������� */
void WriteBinaryLogicalInstructionSet(FILE* outputFile, opEnum op, AstNode* operand);
/* ����� � �������� ���� ����� ��������� ��� ������� ���������� �������� ��� ���������� ������������ */
void WriteUnaryLogicalInstructionSet(FILE* outputFile, opEnum op, enumTypes typeId);
/* ���������� ��� �������������� ���������� ��������� */
unsigned char GetTypedOperator(TMLCOMMAND op, enumTypes typeId);
/* ��������� � ���������� ����� ��������� � ��������� */
MachineInstruction AddAddressingModeAndArgs(MachineInstruction instruction, AstNode *operand);
/* ����� ���������� � �������� ����� */
void WriteInstruction(FILE *outputFile, MachineInstruction instruction);

#endif