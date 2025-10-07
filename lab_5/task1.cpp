//
// Created by danil on 06.10.2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "include/header.hpp"


int main() {
    std::vector<Student> students;
    Student anna={
        "Anna",
        "RT1-14",
        {5,5,2,4,5,5},
        {"Math", "Literature", "Russian", "English", "Physics", "Biology"}
    };
    Student ivan={
        "Ivan",
        "IU7-11",
        {5,4,4,5,4,3},
        {"Math", "Literature", "Russian", "English", "Physics", "Biology"}
    };
    Student sergey={
        "Sergey",
        "RT1-14",
        {5,5,5,5,5,5},
        {"Math", "Literature", "Russian", "English", "Physics", "Biology"}
    };
    students={ivan,anna,sergey};


    int task;
    std::cout << "select a task number ";  std::cin >> task;
    switch (task) {
        case 1: {
            SortByName(students);
            std::cout<<students[0].Name<<" "<<students[1].Name<<" "<<students[2].Name<<std::endl;
            break;
        }
        case 2: {
            SortByRating(students);
            std::cout<<students[0].Name<<" "<<students[1].Name<<" "<<students[2].Name<<std::endl;
            break;
        }
        case 3: std::cout<<CountTwoness(students)<<std::endl; break;
        case 4: std::cout<<CountExcellent(students)<<std::endl; break;
        case 5: std::cout<<VectorMathExcellent(students).size()<<std::endl; break;
        case 6: for (int i=0;i<GroupsId(students).size();i++) std::cout<<GroupsId(students)[i]<<std::endl; break;
        case 7: {
            std::vector<Group> groups=Groups(students);
            for (int i =0; i<groups.size();i++) std::cout<<groups[i].Id<<" "<<groups[i].Students.size()<<std::endl;
            break;
        }
        default: std::cout<<"Invalid task number";
    }

    return 0;
}

float mean (const std::vector<unsigned>& ratings) {
    float sum=0;
    for (int i=0;i<ratings.size();i++) sum+=ratings[i];
    return sum/(float)ratings.size();
}
//задание 1
void SortByName(std::vector<Student>& students) {
    std::vector<std::string> names;
    for (int i=0;i<students.size();i++) names.push_back(students[i].Name);
    std::sort(names.begin(), names.end());
    std::vector<Student> students_save= students;
    students={};
    for (int n=0; n<students_save.size();n++) {
        for (int i=0;i<students_save.size();i++) {
            if (students_save[i].Name==names[n]){
                students.push_back(students_save[i]);
                students_save.erase(students_save.begin()+i,students_save.begin()+i+1);
            }
        }
    }
    students.push_back(students_save[0]);
    students_save={};
    students_save.shrink_to_fit();
}
//задание 2
void SortByRating(std::vector<Student>& students){
    std::vector<float> ratings;
    for (int i=0;i<students.size();i++) ratings.push_back(mean(students[i].Ratings));
    std::sort(ratings.begin(), ratings.end());
    std::vector<Student> students_save= students;
    students={};
    for (int n=0; n<students_save.size();n++) {
        for (int i=0;i<students_save.size();i++) {
            if (mean(students_save[i].Ratings)==ratings[n]) {
                students.push_back(students_save[i]);
                students_save.erase(students_save.begin()+i,students_save.begin()+i+1);
            }
        }
    }
    students.push_back(students_save[0]);
    students_save={};
    students_save.shrink_to_fit();
}
//задание 3
size_t CountTwoness(const std::vector<Student>& students) {
    size_t rez=0;
    for (int n=0;n<students.size();n++) {
        bool two=false;
        for (int i=0;i<students[n].Ratings.size();i++) {
            if (students[n].Ratings[i] == 2) {
                two=true;
                break;
            }
        }
        if (two) rez+=1;
    }
    return rez;
}
//задание 4
size_t CountExcellent(const std::vector<Student>& students) {
    size_t rez=0;
    for (int n=0;n<students.size();n++) {
        bool excellent=true;
        for (int i=0;i<students[n].Ratings.size();i++) {
            if (students[n].Ratings[i] != 5) {
                excellent=false;
                break;
            }
        }
        if (excellent) rez+=1;
    }
    return rez;
}
//задание 5
std::vector<Student> VectorMathExcellent(const std::vector<Student>& students) {
    std::vector<Student> rez;
    for (int i=0; i< students.size(); i++) {
        auto id = std::find(students[i].Subjects.begin(), students[i].Subjects.end(), "Math" );
        if (students[i].Ratings[std::distance(students[i].Subjects.begin(),id)]==5) rez.push_back(students[i]);
    }
    return rez;
}
//задание 6
std::vector<std::string> GroupsId(const std::vector<Student>& students) {
    std::vector<std::string> groups;
    for (int i=0; i< students.size(); i++) {
        if (std::find(groups.begin(), groups.end(),students[i].GroupId)==end(groups)) groups.push_back(students[i].GroupId);
    }
    return groups;
}
//задание 7
std::vector<Group> Groups(const std::vector<Student>& students) {
    std::vector<Group> GROUPS;
    std::vector<std::string> groups = GroupsId(students);
    for (int i=0; i<groups.size(); i++) {
        std::vector<Student> group_members;
        for (int j=0; j<students.size(); j++) {
            if (students[j].GroupId==groups[i]) group_members.push_back(students[j]);
        }
        Group group={
            groups[i],
            group_members
        };
        GROUPS.push_back(group);
    }
    return GROUPS;
}
