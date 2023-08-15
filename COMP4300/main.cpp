#include <iostream>
#include <vector>

class Student
{
  std::string m_first{"First"};
  std::string m_last{"Last"};
  int m_id{0};
  float m_avg{0};

public:
  Student()
  {
  }

  Student(std::string first, std::string last, int id, int avg)
      : m_first(first), m_last(last), m_id(id), m_avg(avg)
  {
  }

  int getAvg() const
  {
    return m_avg;
  }

  int getID() const
  {
    return m_id;
  }

  std::string getFirst() const
  {
    return m_first;
  }

  std::string getLast() const
  {
    return m_last;
  }

  void print() const
  {
    std::cout << m_first << " "
              << m_last << " "
              << m_id << " "
              << m_avg << std::endl;
  }
};

class Course
{
  std::string m_name = "Course";
  std::vector<Student> m_students;

public:
  Course() {}

  Course(const std::string &name)
      : m_name(name)
  {
  }

  void addStudent(const Student &s)
  {
    // m_student.push_back(s);
  }


};

int main(int argc, char *argv[])
{
  Student s1;
  Student s2("Shamsul", "Arifin", 1640, 3.14);
  const Student s3("Jane", "Doe", 164023, 99.9);

  s3.print();
  return 0;
}