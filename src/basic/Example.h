#ifndef _EXAMPLE_H_
#define _EXAMPLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>
#include "Targets.h"
#include "Instance.h"
#include "Category.h"

using namespace std;

class Feature
{
public:
    vector<std::string> m_words;

    static Feature valueOf(const Instance &ins) {
        Feature feature;
        for (auto & p : ins.m_seq) {
            feature.m_words.push_back(p.first);
        }
        return feature;
    }
};

class Example
{
public:
    Feature m_feature;
    std::vector<Category> m_pos;
};

#endif /*_EXAMPLE_H_*/
