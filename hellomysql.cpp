#include "StudentManager.h"

int main()
{
	//Student stu{2222, "吴彦祖", "网工二班"};
	vector<Student> ret = StudentManager::GetInstance()->get_student();

	for (auto& t : ret)
	{
		std::cout << t.student_id << "  " << t.student_name << "  " << t.class_id << std::endl;
	}

	return 0;
}