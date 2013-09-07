/* 
���������������� ��� ��������� zlib,
��. http://www.gzip.org/zlib/zlib_license.html
����������� - ���� ������.
*/

/************************************/
/*	���� �������������� �����������	*/
/************************************/

#ifndef _SEMANTIC_ANALYZER_
#define _SEMANTIC_ANALYZER_

#include "ast.h"
#include "HashTable.h"
#include "types.h"
#include "label.h"

extern void yyerror(char *s);

/********************/
/*	�������� �����	*/
/********************/

/* ��������� ������������� �����, ���� ���� ������������ - ���������� FALSE, ����� - TRUE*/
BOOL CheckNodeTypes(NodeAST *n1, NodeAST *n2);
BOOL CheckVarNodeTypes(char varName[NAME_LENGTH], NodeAST *n);
BOOL CheckNodeTypeByType(NodeAST *n, Type *t);
BOOL CheckNodeTypeByTypeId(NodeAST *n, enumTypes id);
BOOL CheckVarTypeByTypeId(TVariable *var, enumTypes id);

/****************************/
/*							*/
/****************************/

/* ��������� ���������� �� ���������������. � ������ ��������������� ���������� TRUE, ����� - FALSE*/
BOOL IsVariableRedefinition(char *varName);
/* ��������� ���������� �� ����������. � ������ ���� �� ���������� ���������� TRUE, ����� - FALSE*/
BOOL IsVariableUndeclared(char *varName);
/* ���������� ��� ����������. � ������ ���� ���������� �� ��������� ���������� typeInvalid */
Type* GetVariableTypeRef(char *varName);
/* ��������� ��������������� �������� ���� ����������������� ���� */
BOOL IsTypeRedefinition(char typeName[NAME_LENGTH]);
/* ��������� �� ����������� ����������� ���������������� ����� */
BOOL OnUserTypeDefinition();
/* ��������� �� ��������������� ���� ��������� */
BOOL IsStructFieldRedefinition(char *name, TypeStruct *t);
/* ��������� �������� �� ��� */
BOOL IsUndeclaredType(char *name);
/* ���������, ��������� �� ���� ��������� */
BOOL IsUndeclaredStructField(char *name, TypeStruct *t);
/* ��������, ��������� �� ����� */
BOOL IsLabelDeclared(char *name);
/* ��������� ������� ����� �� ����������� */
void VerifyLabelTable();
/* ��������� ����� �� ����������� */
void VerifyLabel(void *label);
/* ��������� �������� �� ��� ���������������� ��� ������� */
BOOL IsBaseType(enumTypes typeId);

BOOL IsCorrectOperatorInStack(TOperatorTypeEnum operatorType);
/* ������ � ���������� case */
BOOL IsRepeatedKeyVal(NodeAST *keyValNode);
BOOL IsInvalieKeyValNode(NodeAST *keyValNode);

BOOL CanUseContinue();
BOOL CanUseBreak();

#endif /* _SEMANTIC_ANALYZER_ */