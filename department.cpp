/*
 * Author: Amittai Aviram - aviram@bc.edu
 */

#include <string>

#include "department.h"

std::string department_to_string(Department department) {
    return department_names[department];
};

Department code_to_department(std::string code) {
    int i = 0;
    for (; i < UNSUPPORTED; ++i) {
        if (department_codes[i] == code) {
            return (Department)i;
        }
    }
    return (Department)i;
}
