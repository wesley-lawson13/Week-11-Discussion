/*
 * Author: Amittai Aviram - aviram@bc.edu
 */

#pragma once

#include <string>

enum Department {
    AADS,
    ART,
    ART_HISTORY,
    ASTRONOMY,
    BIOLOGY,
    CLASSICS,
    CHEMISTRY,
    COMPUTER_SCIENCE,
    EARTH_SCIENCE,
    ECONOMICS,
    GEOGRAPHY,
    HISTORY,
    LANGUAGES,
    LINGUISTICS,
    MATHEMATICS,
    PHILOSOPHY,
    PHYSICS,
    RELIGION,
    POLITICAL_SCIENCE,
    SOCIOLOGY,
    STATISTICS,
    THEATER,
    THEOLOGY,
    UNSUPPORTED
};

const std::string department_codes[] = {
    "AADS",
    "ART",
    "ART_HISTORY",
    "ASTRONOMY",
    "BIOLOGY",
    "CLASSICS",
    "CHEMISTRY",
    "COMPUTER_SCIENCE",
    "EARTH_SCIENCE",
    "ECONOMICS",
    "GEOGRAPHY",
    "HISTORY",
    "LANGUAGES",
    "LINGUISTICS",
    "MATHEMATICS",
    "PHILOSOPHY",
    "PHYSICS",
    "RELIGION",
    "POLITICAL_SCIENCE",
    "SOCIOLOGY",
    "STATISTICS",
    "THEATER",
    "THEOLOGY",
    "UNSUPPORTED"
};

const std::string department_names[] = {
    "AADS",
    "Art",
    "Art History",
    "Astronomy",
    "Biology",
    "Classics",
    "Chemistry",
    "Computer Science",
    "Earth Science",
    "Economics",
    "Geography",
    "History",
    "Languages",
    "Linguistics",
    "Mathematics",
    "Philosophy",
    "Physics",
    "Religion",
    "Political Science",
    "Sociology",
    "Statistics",
    "Theater",
    "Theology"
};
    
std::string department_to_string(Department department);

Department code_to_department(std::string code);
