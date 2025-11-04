#pragma once

#include <string>

#include "department.h"

#include "person.h"

class Student : public Person {

    public:
        Student(std::string first_name, std::string last_name, Department major);
        Department get_major();
        std::string to_string() override;

    private:
        Department major;
};
