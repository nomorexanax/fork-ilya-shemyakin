#pragma once
#ifndef commands_h
#define commands_h
#include "Polygon.h"

namespace tabolina {
	double area(std::vector<Polygon>& data, std::string& arg);
	double maxArea(std::vector<Polygon>& data);
	int maxVertexes(std::vector<Polygon>& data);
	double minArea(std::vector<Polygon>& data);
	int minVertexes(std::vector<Polygon>& data);
	int count(std::vector<Polygon>& data, std::string& arg);
	int perms(std::vector<Polygon>& data, Polygon& polygon);
	int maxSeq(const std::vector<Polygon>& data, const Polygon& polygon);
}
#endif
