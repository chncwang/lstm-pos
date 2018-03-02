#ifndef _INSTANCE_H_
#define _INSTANCE_H_

#include <iostream>
#include "Targets.h"
#include "Category.h"
#include <utility>

using namespace std;

class Instance {
public:
    int size() const {
        return m_seq.size();
    }

    std::string tostring();
public:
    vector<pair<string, Category>> m_seq;

    void evaluate(const std::vector<Category> &predicted_category,
            Metric& metric) const {
        for (int i = 0; i < m_seq.size(); ++i) {
            ++metric.overall_label_count;
            if (predicted_category.at(i) == m_seq.at(i).second) {
                metric.correct_label_count++;
            }
        }
    }
};

std::string Instance::tostring() {
    string result = "";

    for (auto & w : m_seq) {
        result += w.first + "," + std::to_string(w.second) + " ";
    }
    return result;
}

#endif /*_INSTANCE_H_*/
