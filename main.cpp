/*
 * Author: Amittai Aviram - aviram@bc.edu
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "department.h"
#include "professor.h"
#include "student.h"

Person ** populate_db(int * num_people) {
    *num_people = 0;
    std::cin >> *num_people;
    Person ** people = new Person *[*num_people];
    std::string person_type, first_name, last_name, department_code;
    for (int i = 0; i < *num_people; ++i) {
        std::cin >> person_type;
        std::cin >> first_name;
        std::cin >> last_name;
        std::cin >> department_code;
        Department department = code_to_department(department_code); 
        if (person_type == "student") {
            people[i] = new Student(first_name, last_name, department); 
        } else if (person_type == "professor") {
            people[i] = new Professor(first_name, last_name, department);
        } else {
            std::cerr << "Unsupported person type: " << person_type << std::endl;
        }
    }
    return people;
}

int main() {
    int num_people;
    Person ** people = populate_db(&num_people);
    for (int i = 0; i < num_people; ++i) {
        std::cout << people[i]->to_string() << std::endl;
    }
    std::cout << "Students:" << std::endl;
    for (int i = 0; i < num_people; ++i) {
        if (typeid(* people[i]) == typeid(Student)) {
            std::cout << "\t" << ((Student *)people[i])->get_full_name() << std::endl;
        }
    }

    for (int i = 0; i < num_people; ++i) {
        delete people[i];
    }

    delete[] people;

    return EXIT_SUCCESS;
}