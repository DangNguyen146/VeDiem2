#include <graphics.h>
int main()
{
	system("color 0a");
	initwindow(500, 500, "Draw");
	line(250, 250, 250, 0);
	line(250, 250, 0, 250);
	line(250, 250, 500, 250);
	line(250, 250, 250, 500);
	line(490, 250, 470, 230);
	line(490, 250, 470, 270);
	line(250, 0, 230, 20);
	line(250, 0, 270, 20);
	putpixel(250 + 10, 250 - 12, WHITE);
	system("pause");
	return 0;


}