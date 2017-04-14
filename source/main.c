#include <3ds.h>
/*
IMPORTANT :- Do not remove any function , or the program will not work.
Replace https://reddit.com/r/3dshacks with the site you want to make the forwader for
Replace 29 with the len of the provided link(strlen).
*/
int main()
{
	gfxInitDefault();
	APT_PrepareToStartSystemApplet(0x114);
APT_StartSystemApplet(0x114, "https://reddit.com/r/3dshacks", 1024, 0);
	gspWaitForVBlank();
	gfxSwapBuffers();
	gfxExit();
	return 0;
}