#include<iostream>
using namespace std;
class Student
{
private:
	int id;
	double score;
public:
	void set_value(int m_id, double m_score)
	{
		id = m_id;
		score = m_score;
	}
	int get_id()
	{
		return id;
	}
	double get_score()
	{
		return score;
	}
};
void max(Student* student, int size)
{
	int max_id = student[0].get_id();
	double max_score = student[0].get_score();
	for (int i = 1; i < size; i++)
	{
		if (student[i].get_score() > max_score)
		{
			max_id = student[i].get_id();
			max_score = student[i].get_score();
		}
	}
	cout << "最高分数同学的id是：" << max_id << " " << "最高分数同学的分数是:" << max_score;
}
int main()
{
	int size = 5;
	Student students[5];
	for (int i = 0; i < 5; i++)
	{
		int id;
		double score;
		cout << "请输入第" << i + 1 << "个同学的学号和分数";
		cin >> id >> score;
		students[i].set_value(id, score);
	}
	max(students, size);
}