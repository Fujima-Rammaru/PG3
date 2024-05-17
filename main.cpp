#include<stdio.h>
#include<list>
#include<vector>
#include<iostream>

using namespace std;

int main() {

	//可変長配列宣言
	vector<const char*> stationName = {
		"Tokyo","Kanda","Akkihabara","Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
		"Hamamatsucho","Shimbashi","Yurakucho"
	};

	//駅名の情報が入った双方向リスト
	list<const char*> stationList{
		stationName[0],stationName[1],stationName[2],stationName[3],stationName[4],
		stationName[5],stationName[6],stationName[7],stationName[8],stationName[9],
		stationName[10],stationName[11],stationName[12],stationName[13],stationName[14],
		stationName[15],stationName[16],stationName[17],stationName[18],stationName[19],
		stationName[20],stationName[21],stationName[22],stationName[23],stationName[24],
		stationName[25],stationName[26],stationName[27],
	};

	//イテレーター宣言
	list<const char*>::iterator itr;

	//追加用の可変長配列
	vector<const char*>  stationName2 = { "Nishi-Nippori" , "TakanawaGateway" };

	printf("1970年の山手線\n");
	//全ての要素を参照して順番に表示する
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		printf("%s\n", *itr);
	}

	printf("\n2019年の山手線\n");
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == stationName[7]) {//任意の位置に要素を追加
			itr = stationList.insert(itr, stationName2[0]);
			printf("%s\n", *itr);
			itr++;
		}
		printf("%s\n", *itr);
	}

	printf("\n2022年の山手線\n");
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == stationName[24]) {//任意の位置に要素を追加
			itr = stationList.insert(itr, stationName2[1]);
			printf("%s\n", *itr);
			itr++;
		}
		printf("%s\n", *itr);
	}
	return 0;
}