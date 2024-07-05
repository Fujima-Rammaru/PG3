#include<stdio.h>
#include<chrono> 
#include<string>
using namespace std::chrono;

int main() {
	system_clock::time_point start, end;
	std::string str(100000, 'a');
	double elapsed;

	start = system_clock::now();//計測開始時間
	std::string str2 = str;//strをコピー
	end = system_clock::now();// 計測終了時間
	elapsed = duration_cast<microseconds>(end - start).count();//処理に要した時間
	printf("コピーにかかった時間->%lf(マイクロ秒)\n\n", elapsed);

	start = system_clock::now();
	std::string str3 = std::move(str);//strの中身をstr3にムーブ
	end = system_clock::now();
	elapsed = duration_cast<microseconds>(end - start).count();
	printf("移動にかかった時間->%lf(マイクロ秒)", elapsed);

	return 0;
}