#pragma once
#ifndef __ACTION_NODE__
#define __ACTION_NODE__
#include "TreeNode.h"

// "Interface" or abstract class
class ActionNode : public TreeNode
{
public:
	ActionNode() { isLeaf = true; }
	virtual ~ActionNode() = default;

	virtual bool Action() = 0;
};

#endif
