void print(const vector<Student>& student_list)
{
    for (int i = 0; i < int(student_list.size()); i++)
    {
        cout << student_list[i].id << " " << student_list[i].name << " " << student_list[i].gpa;
        cout << endl;
    }
}

int find(const vector<Student>& student_list, string id)
{
    for (int i = 0; i < int(student_list.size()); i++)
    {
        if (student_list[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

vector<Student> top3(const vector<Student>& student_list)
{
    vector<Student> studentList = student_list;
    for (int i = 0; i < int(student_list.size()) - 1; i++)
    {
        for (int j = i + 1; j < int(student_list.size()); j++)
        {
            if (studentList[i].gpa < studentList[j].gpa)
            {
                Student temp = studentList[i];
                studentList[i] = studentList[j];
                studentList[j] = temp;
            }
        }
    }
    while (int(studentList.size())>3)
    {
        studentList.pop_back();
    }
    return studentList;
}

