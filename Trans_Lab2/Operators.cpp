#include "Operators.h"


OperatorStack::OperatorStack(void)
	: g_operatorStack()
{
	m_stackTop = 0;
}


OperatorStack::~OperatorStack(void)
{
}

void PrintOperator(FILE *stream, void *item)
{
	//TODO:
}

/*
void WriteCaseGoto(FILE *stream, void *item)
{
	TCaseOperator *caseOp = (TCaseOperator *)item;
	TSwitchOperator *switchOp = caseOp->switchOp;
	NodeAST *assignNode = HandleBinaryOperation(OP_EQ, switchOp->key, caseOp->keyVal);
	CodegenGoto(stream, OP_IFTRUE, caseOp->label, assignNode);
	// �������� - ������ ������������ ����� FreeAST, �.�. � ���� ������ ����� ������� ���� key � keyVal
	// ��������� - ���� ������ �������� � ��������� ����������� ������ � ast, �� ��� ������ ���������
	if(assignNode)
		free(assignNode);
}
*/

void OperatorStack::Push(TOperator *op)
{
	this->g_operatorStack.emplace_back(op);
}

TOperator *OperatorStack::Pop()
{
	auto result = Top();
	g_operatorStack.erase(--g_operatorStack.end());
	return result;
}

TOperator *OperatorStack::Top()
{
	if (g_operatorStack.size() == 0)
		return nullptr;
	else
		return this->g_operatorStack.back();
}

bool OperatorStack::IsEmpty()
{
	return g_operatorStack.empty();
}

bool OperatorStack::IsLoopOperator(TOperator *op)
{
	if (op != nullptr)
	{
		switch(op->GetType())
		{
		case OT_FOR:
		case OT_WHILE:
		case OT_DO_WHILE:
			return true;
		}
	}
	return false;
}

bool OperatorStack::IsConditionalOperator(TOperator *op)
{
	if (op != nullptr)
	{
		switch(op->GetType())
		{
		case OT_IF_ELSE:
			return true;
		}
	}
	return false;
}

bool OperatorStack::IsSwitchOperator(TOperator *op)
{
	if (op != nullptr)
	{
		switch(op->GetType())
		{
		case OT_SWITCH:
			return true;
		}
	}
	return false;
}
