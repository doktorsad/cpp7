#include <iostream>
#define MODE 0
#if !defined MODE
#error MODE not defined
#endif

#if MODE == 1
int add(const int& x, const int& y) {
	return x + y;
}
#endif

int main()
{
#if MODE == 0
	std::cout << "I work in training mode\n";
#elif MODE == 1
	int x = 0, y = 0;
	std::cout << "I work in combat mode\n" <<
		"Enter two digits\n=> ";
	std::cin >> x;
	std::cout << "=> ";
	std::cin >> y;
	std::cout << "result = " << add(x, y);
#else 
	std::cout << "Unknown mode. Completion of work\n";
#endif
	return 0;
}
