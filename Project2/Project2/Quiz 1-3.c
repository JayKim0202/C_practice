#include <stdio.h>

int main()
{
	/* ǥ�� �Է����� ����(�� ����)�� �Էµ˴ϴ�. ���⼭ �������� �����ֱ� ���� ���̿� ���� ���� ������ ����ϰ��� �մϴ�.
	�� 18�� �̸��̸� "û�ҳ� ���� �Ұ�"�� ����ϴ� ���α׷��� ���弼��
	(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
	
	���信�� c ��� �����Ϸ����� ���������� �����ϵǴ� ��ü �ڵ带 �Է��ؾ� �մϴ�.
	ex) ǥ���Է� 17
	    ǥ����� û�ҳ� ���� �Ұ�*/

	int num1;

	scanf("%d", &num1);

	if (num1 <= 17)
	{
		printf("û�ҳ� ���� �Ұ�\n");
	}
	
	return 0;
}