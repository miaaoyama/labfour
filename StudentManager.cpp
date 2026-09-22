#include "StudentManager.h"
#include <algorithm>

bool StudentManager::removeById(int id) {
    auto it = std::remove_if(students.begin(), students.end(),
        [id](const Student& s) { return s.getId() == id; });

    if (it == students.end()) {
        return false; // no student had that id
    }

    students.erase(it, students.end());
    return true;
}
