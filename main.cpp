#include<stdio.h>
#include<list>
#include<vector>
#include<iostream>

using namespace std;

int main() {

	//�ϒ��z��錾
	vector<const char*> stationName = {
		"Tokyo","Kanda","Akkihabara","Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
		"Hamamatsucho","Shimbashi","Yurakucho"
	};

	//�w���̏�񂪓������o�������X�g
	list<const char*> stationList{
		stationName[0],stationName[1],stationName[2],stationName[3],stationName[4],
		stationName[5],stationName[6],stationName[7],stationName[8],stationName[9],
		stationName[10],stationName[11],stationName[12],stationName[13],stationName[14],
		stationName[15],stationName[16],stationName[17],stationName[18],stationName[19],
		stationName[20],stationName[21],stationName[22],stationName[23],stationName[24],
		stationName[25],stationName[26],stationName[27],
	};

	//�C�e���[�^�[�錾
	list<const char*>::iterator itr;

	//�ǉ��p�̉ϒ��z��
	vector<const char*>  stationName2 = { "Nishi-Nippori" , "TakanawaGateway" };

	printf("1970�N�̎R���\n");
	//�S�Ă̗v�f���Q�Ƃ��ď��Ԃɕ\������
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		printf("%s\n", *itr);
	}

	printf("\n2019�N�̎R���\n");
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == stationName[7]) {//�C�ӂ̈ʒu�ɗv�f��ǉ�
			itr = stationList.insert(itr, stationName2[0]);
			printf("%s\n", *itr);
			itr++;
		}
		printf("%s\n", *itr);
	}

	printf("\n2022�N�̎R���\n");
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == stationName[24]) {//�C�ӂ̈ʒu�ɗv�f��ǉ�
			itr = stationList.insert(itr, stationName2[1]);
			printf("%s\n", *itr);
			itr++;
		}
		printf("%s\n", *itr);
	}
	return 0;
}