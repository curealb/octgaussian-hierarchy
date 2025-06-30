#pragma once

#include "common.h"

class PointbasedOcTreeGenerator
{
public:
	ExplicitTreeNode* generate(const std::vector<Gaussian>& gaussians);
};