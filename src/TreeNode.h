#pragma once
#ifndef __TREE_NODE__
#define __TREE_NODE__
#include <string>

struct TreeNode
{
	TreeNode() = default;
	virtual ~TreeNode() = default;

	std::string name = "";
	bool data = false;

	TreeNode* Left = nullptr; // Left child
	TreeNode* Right = nullptr; // Right child
	TreeNode* Parent = nullptr; // So we can traverse back
	bool isLeaf = false;
};

#endif /* defined (__TREE_NODE__) */