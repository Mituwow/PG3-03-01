#include <stdio.h>
#include <list>

using namespace std;

int main() {
	//双方向リストを作成
	list<const char*> lst{};
	//要素を追加していく
	lst.push_front("Yurakucho");
	lst.push_front("Shimbashi");
	lst.push_front("Hamamatsucho");
	lst.push_front("Tamachi");
	lst.push_front("Shinagawa");
	lst.push_front("Osaki");
	lst.push_front("Gotanda");
	lst.push_front("Meguro");
	lst.push_front("Ebisu");
	lst.push_front("Shibuya");
	lst.push_front("Harajuku");
	lst.push_front("Yoyogi");
	lst.push_front("Shinjuku");
	lst.push_front("Shin-Okubo");
	lst.push_front("Takadanobaba");
	lst.push_front("Mejiro");
	lst.push_front("Ikebukuro");
	lst.push_front("Otsuka");
	lst.push_front("Sugamo");
	lst.push_front("Komagome");
	lst.push_front("Tabata");
	lst.push_front("Nippori");
	lst.push_front("Uguisudani");
	lst.push_front("Ueno");
	lst.push_front("Okachimachi");
	lst.push_front("Akihabara");
	lst.push_front("Kanda");
	lst.push_front("Tokyo");

	printf("1970年の山手線の駅一覧\n\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		printf("%s\n", *itr);
	}
	printf("------------------\n\n");

	//西日暮里を日暮里と田端の間に追加
	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if(*itr == "Tabata") {
			itr = lst.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	printf("2019年の山手線の駅一覧\n\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		printf("%s\n", *itr);
	}
	printf("------------------\n\n");

	//高輪ゲートウェイを品川と田町の間に追加
	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = lst.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	printf("2022年の山手線の駅一覧\n\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		printf("%s\n", *itr);
	}
	printf("------------------\n\n");

	return 0;
}