#include <stdio.h>
#include <list>

using namespace std;

int main() {
	//‘o•ûŒüƒŠƒXƒg‚ğì¬
	list<const char*> lst{};
	//—v‘f‚ğ’Ç‰Á‚µ‚Ä‚¢‚­
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

	printf("1970”N‚ÌRèü‚Ì‰wˆê——\n\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		printf("%s\n", *itr);
	}
	



	return 0;
}