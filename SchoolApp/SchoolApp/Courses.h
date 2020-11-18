#pragma once
#include <string>
#include <vector>

#include "Student.h"
class Courses
{
public: 
	Courses();
	~Courses();
protected:
private:
	std::string name;
	std::string DoE; //Date of estabblishment

	int AoS; //Amount of Students
	std::vector<Student*>student;

};

