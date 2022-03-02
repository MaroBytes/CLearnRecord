/*全局变量
static int g_val = 2022;
static定义的全局变量只能被自己所在的源文件使用
*/

/*int Add(int x, int y)
{
	return x + y;
}*/

//static修饰函数也只能被自己所在的源文件使用
static int Add(int x, int y)
{
	return x + y;
}