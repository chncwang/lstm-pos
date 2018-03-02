#ifndef _JST_READER_
#define _JST_READER_

#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <regex>


#include "Instance.h"
#include "Targets.h"

std::vector<std::string> readLines(const std::string &fullFileName) {
    std::vector<string> lines;
    std::ifstream input(fullFileName);
    for (std::string line; getline(input, line);) {
        lines.push_back(line);
    }
    return lines;
}

void readLineToInstance(const std::string &line, Instance *instance) {
    int start = 0;
    std::cout << "line:" << line << std::endl;

    while (true) {
        auto slash = line.find("/", start);
        if (slash == std::string::npos) {
            break;
        } else {
            //std::cout << "slash:" << slash << std::endl;
            std::string word = line.substr(start, slash - start);
            //std::cout << "word:" << word << std::endl;
            auto space_pos = line.find(" ", slash);
            //std::cout << "space_pos:" << space_pos << std::endl;
            if (space_pos == std::string::npos) {
                //std::cout << "line:" << line << std::endl;
                //std::cout << "slash:"<< slash << std::endl;
                abort();
            }
            std::string pos = line.substr(slash + 1, space_pos - slash - 1);
            //std::cout << "pos:" << pos << std::endl;
            Category category = ToCategory(pos);
            std::pair<std::string, Category> pair =
                std::make_pair(word, category);
            instance->m_seq.push_back(pair);
            start = space_pos + 2;
        }
    }
}

std::vector<Instance> readInstancesFromFile(const std::string &fullFileName) {
    std::vector<std::string> lines = readLines(fullFileName);
    std::vector<Instance> instances;
    for (const std::string &line : lines) {
        Instance instance;
        readLineToInstance(line, &instance);
        instances.push_back(instance);
        //std::cout << instance.tostring() << std::endl;
    }

    return instances;
}

#endif
