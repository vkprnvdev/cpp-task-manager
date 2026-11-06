#pragma once
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

struct Task
{
    int id;
    std::string name;
    int priority;
    bool status;
    std::string deadline;
    std::vector<std::string> tags;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Task, id, name, priority, status, deadline, tags)
};
