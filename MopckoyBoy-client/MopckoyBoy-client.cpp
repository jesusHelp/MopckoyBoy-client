#include <iostream>
#include "Render.h"
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) == 0)
	{
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&RunWindow, NULL, NULL, NULL);
		for (int i = 0; i < 100000; i++)
			cout << i << endl;
	}
	else cout << SDL_GetError();

	return 0;
}