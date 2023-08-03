#include <stdio.h>

struct student {

	char name[20];
	int money;
	struct student* link;
};

int main(void) {
	struct student stu1 = { "Kim",90,NULL };
	struct student stu2 = { "Lee",80,NULL };
	struct student stu3 = { "Goo",60,NULL };
	
	stu1.link = &stu2;
	stu2.link = &stu3;

	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.link->name, stu1.link->money);
	printf("%s %d \n", stu1.link->link->name, stu1.link->link->money);

	return 0;
}

//
// 
// 
// �ڱ� ���� ����ü�� �ܺ� ���� ����ü
// 
// �ڱ� ���� ����ü�� ����ü ������ �ڱ� �ڽ��� �����ϴ� ���� �ǹ��Ѵ�.
// 
// �ܺ� ���� ����ü�� �ǹ̴� ����ü ������ �ٸ� ����ü�� �����ϴ� ���̶�� ������ �� �ִ�.
// 
// 
// 
// ex) �ڱ� ���� ����ü
// 
// struct student{
// 
// char name[20];
// int age;
// struct student *p;
// };
// 
// 
// ex)
// 
// struct student{
//			char name[20];
//			int age;
//			struct score* p;
// };
// 
// 
// ù��° ����ü student ������ �ٽ� �ڽ��� ����ü student�� ������ �� �ְ�
// 'struct student *p'�� ������ �ڱ� ���� ����ü�̴�.
// 
// �ݴ�� �������� ����ü student ������ �ٸ� ����ü�� �����ϴ� 'struct score *p'��
// ������ �ܺ� ���� ����ü�̴�. ũ�� ���� �� �� ����ü�� ��� ������ ����ü ������ ������
// ����ϴ� ���̴�.
// 
// 
// 
// 7�࿡�� �ڱ� ���� ����ü ������ ���� link�� ���b����. 12����� 14��������� ����ü ����
// stu1, stu2, stu3�� �����ϰ� ���ÿ� �ʱ�ȭ�Ѵ�. Ư���� ���� �ʱ�ȭ�ϴ� ���� NULL �����Ͱ�
// �ִ�. ��, ����ü student�� �� ��° ��� ������ link�� �ƹ� �͵� �������� �ʰڴٴ� �ǹ��̴�.
// 
// 16��� 17�࿡�� stu1.link�� &stu2(����ü ���� stu2�� ���� �ּ�)�� �����ϰ�, stu2.link��
// &stu3(����ü ���� stu3�� ���� �ּ�)�� �����Ѵ�.
// 
// 
// 20���� stu1.link=>name���� ���� stu1.link���� &stu2�� ����Ǿ� �ֱ� ������ stu1.link==&stu2�� �����ȴ�.
// �� �Ŀ� => name�� ����Ǿ� ���ڿ� Lee�� ����� �ȴ�. �������� stu1.link=>money���� stu1.link���� &stu2��
// ����Ǿ� �ֱ� ������ stu1.link==&stu2�� �����ǰ�, �� �Ŀ� => money�� ����Ǿ� 80�� ��µȴ�.
// 
// 
// 21���� stu1.link=> link=>name���� stu1.link�� &stu2�̰�, =>link�� ����Ǿ� stu1.link=>link�� &stu3�� �ȴ�.
// ���������� =>name�� ����Ǿ� ���ڿ� Goo�� ��µȴ�.
//