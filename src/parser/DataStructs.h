#ifndef ZSCRIPT_DATASTRUCTS_H
#define ZSCRIPT_DATASTRUCTS_H

#include <vector>
#include "AST.h"
#include "ZScript.h"

namespace ZScript
{
	struct FunctionData
	{
		FunctionData(ZScript::Program& program);
		ZScript::Program& program;
		std::vector<ZScript::Datum*> globalData;
		std::vector<ZScript::Datum*> globalVariables;
	};

	struct IntermediateData
	{
		IntermediateData(FunctionData const& functionData);
		ZScript::Program& program;
		std::vector<Opcode *> globalsInit;
	};

	struct OpcodeContext
	{
		std::vector<Opcode*> initCode;
	};
}

#endif

