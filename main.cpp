#include<stdio.h>
#include<chrono> 
#include<string>
using namespace std::chrono;

int main() {
	system_clock::time_point start, end;
	std::string str(100000, 'a');
	double elapsed;

	start = system_clock::now();//�v���J�n����
	std::string str2 = str;//str���R�s�[
	end = system_clock::now();// �v���I������
	elapsed = duration_cast<microseconds>(end - start).count();//�����ɗv��������
	printf("�R�s�[�ɂ�����������->%lf(�}�C�N���b)\n\n", elapsed);

	start = system_clock::now();
	std::string str3 = std::move(str);//str�̒��g��str3�Ƀ��[�u
	end = system_clock::now();
	elapsed = duration_cast<microseconds>(end - start).count();
	printf("�ړ��ɂ�����������->%lf(�}�C�N���b)", elapsed);

	return 0;
}