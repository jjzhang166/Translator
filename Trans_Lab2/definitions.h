/* 
���������������� ��� ��������� zlib,
��. http://www.gzip.org/zlib/zlib_license.html
����������� - ���� ������.
*/

#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#define TRUE	1
#define FALSE	0
#define EQ_STRINGS 0
typedef int BOOL;

/* ��������� ���������� */
//#define DEBUG

#define PRINT_TABLES
#define PRINT_TREES

#ifdef DEBUG

#ifdef PRINT_TABLES
#define PRINT_VAR_TABLE
#define PRINT_TMP_VAR_TABLE
#define PRINT_TYPE_TABLE
#define PRINT_LABEL_TABLE
#define PRINT_LITERAL_TABLE
#define PRINT_TYPE_SIZE
#define PRINT_VARIABLE_MEMORY_ALLOCATE
#endif /* PRINT_TABLES */

#define PRINT_3AC_AST
#define PRINT_AST

#define NO_PROPAGATION
#define NO_FOLDING

#endif 

/* ��������� ����� */
#ifndef LANG_DEFINED
#define LANG_ENG
#define LANG_DEFINED
#endif

/* ��������� ����� ���� */
#define NAME_LENGTH	64

/* ����� ���������� �������� */
#define STRING_LITERAL_LENGTH 256
#endif /* _DEFINITIONS_H_ */