//pdf 格式复制需要先转换成Word格式
#include<iostream>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
#include<string>
#include<iomanip>
#include<inttypes.h>
#include<time.h>
#define M 100
using namespace std;
char* strrcat(char *str, char *str2);
void maxmin(int *arr, int **max, int **min,int count);
void addp(int number1, int number2, char symbol, int &result);

//二维数组输出元素的两种方式
void for_out(){
	int a[4][5] = {
		{ 1 },
		{ 2 },
		{ 2, 3, 5, 6, 7 },
		{ 0 }
	};
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){

			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "--------------------------\n";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j< 5; j++){

			cout << a[i % 4][j % 5] << " "; //除不了的都是余数 比如 0/4 余0  1/4 余1   
		}
		cout << "\n";
	}
}

//解决指针的一些问题
void point(){
	int a[5] = { 1, 10, 3, 4, 6 };
	int *ptr = &a[1]; //取地址加1 代表加了一个 同样的数组地址
	cout << *(a + 1) << endl;
	cout << *(ptr-1) << endl;  //指针减1 是地址向前移1位
}

//new  delete 的一些问题
void dll(){
	char c[16] = "test";  
	char *a =c; //指向常量区的指针 不需要释放
	
	for (int i = 0; i < sizeof(c) / sizeof(char);i++){
		cout << *(a + i);
	}
	cout << "\n";
	

}

//easyX的一些使用
void graph(){
	IMAGE bg_img;
    const int start_x = 0; //文字输出起始坐标 横向
    const int start_y = 0; //文字输出起始坐标 纵向

    char name[16] = {0}; //用户名
	char pwd[16] = {0};  //密码

	int offset_x = 60; //横向偏移量
	int offset_y = 30; 

	initgraph(780, 900);
	loadimage(&bg_img, "bg.jpg", 780, 900, true);
	putimage(0, 0, &bg_img);

	setbkmode(TRANSPARENT); //设置当前字体背景色为透明

	//重复验证 用户名 密码
	while (1){
		if (strcmp(name, "pengyulong")!=0 || (strcmp(pwd, "w836116")!=0)){
			
			 InputBox(name, sizeof(name), "用户名：");
			if (strlen(name)<=0 ){
				MessageBox(NULL, "用户名不能为空", "注意！", MB_OK);

			}
					
					
			InputBox(pwd, sizeof(pwd), "密码：");
					if (strlen(pwd)<=0){
						MessageBox(NULL, "密码不能为空！", "注意", MB_OK);
					}
			
		}
		else{

			break;
		}
		
	}
	//显示用户名 
	
	outtextxy(start_x, start_y, "用户名:");
	outtextxy(start_x + offset_x, start_y, name);


	//用*代替密码 输出  显示和密码一样长的 * 号

	int pwdCount=strlen(pwd);
	char str[16];
   for (int i = 0; i < pwdCount;i++){
	
		str[i] = '*';
		str[pwdCount] = '\0';
	}

	outtextxy(start_x, start_y + offset_y, "密码:");
	outtextxy(start_x + offset_x, start_y + offset_y, str);
	
	_getch();

}

//反转字符串
void Student_for(){
	
	string  str;
	cin >> str;
	for (int k1 = 0, k2 = str.length() - 1; k2> k1;k1++,k2--){
	 char tmp = str[k1];
		str[k1] = str[k2];
		str[k2] = tmp;
	}
	for (int i = 0; i < str.length();i++){
		cout << str[i];
	}
	cout << "\n";
}

void forTriangle(int n) {
	int k = 1; //一共有K个数字
	int arr[M][M];
	int arr2[M][M]; //用来跟arr数组交换


	for (int i = 0; i <n; i++) {
		for (int j = 0; j < n;j++) {
		arr[i][j] = k;
		arr2[j][i] = arr[i][j];
		k++;
		}
	}


	for (int i = 0; i < n; i++) {

		for (int j = 0; j <=i; j++) {
			cout << setw(2) << left << arr2[i][j] << " ";
			
		}
		cout << "\n";
	}




	string line(50,'=');
	cout << line<<endl;

	
		//一共有K个数字
	for (int i = 0; i < n; i++) {

		//输出前面的空格
		for (int j = 0; j < n - i; j++) {

			cout << "  ";
		}



		//行跟列对换 在输出

	}
}
struct node {
	
	int cc;
	int dd;
	char aa;
	short  bb;
};
class nodeclass {
public:
	nodeclass(int text);
	~nodeclass();
private:
	char aa;
	short  bb;
	int cc;
	int dd;
};
int main8(){
	//int m;
	//cout << "输入要";
	//cin >> m;
	//forTriangle(m);

	/*forRect();*/


	/*string str("some string");
	for (char c:str) {
		cout << c << endl;
	
	}*/


	//float x = 100;
	//printf("%le",x);
	//int arr[4] = { 127,100,54,46 };
	//int *p= &arr[0];
	////int *parry = arr;
	//long long *p1 = (long long *)arr;
	//char *p2 = (char *)arr;
	//for (int i = 0; i < 4;i++) {
	//	printf("%4ull", *p);
	//	p++;
	//}
	//putchar('\n');
	//for (int i = 0; i < 4; i++) {
	//
	//	printf("%3d", *p2); p2++;
	//
	//}
	//putchar('\n');
	//printf("%d\n",sizeof(long long));

	//time_t t;
	//struct tm * timeinfo;
	//time(&t);//获取距1970-1-1日的秒数
	//timeinfo=localtime(&t); //localtime()转为当地时间，返回类型 为 tm
	//cout << asctime(timeinfo) << endl;//asctime()转为标准的ASCII格式 
 /*
	字符串反转 
	获取字符串的总长度
	第一个跟最后一个交换位置
	第二个跟倒数第二个交换位置
	从第0个开始交换 次数小于总长度除以2
 
 */

	
 
 
     //char str[] = "abcdef";
	//for (int i = 0; i < strlen(str)/2;i++) {
	//
	//	char tmp = str[i];
	//	
	//	str[i]=str[(strlen(str) - 1)-i];
	//	
	//	str[(strlen(str) - 1)-i] = tmp;
	//	
	//}
	//cout << str << endl;






	//1.中文字符串反转
	//string str2 = "我是小萌新";

	//int len = str2.length();
	//for (int i = 0; i < str2.length() / 2;i+=2,len-=2) {
	//	char tmp = str2[i];
	//	str2[i] = str2[len - 2];
	//	str2[len - 2] = tmp;

	//	char tmp2 = str2[i + 1];
	//	str2[i + 1] = str2[len - 1];
	//	str2[len - 1] = tmp2;
	//
	//}
	//cout << str2 << endl;





	////4.字符串拼接

	//char str[128] ;
	//char str2[128] ;

	//
	//scanf("%s",&str);
	//scanf("%s",&str2);

	//char *p=strrcat(str,str2);
	//cout << p<<endl;
	//delete p;

	//



 //   //3.找到数组中最大元素和最小元素  最大元素和最小元素的位置
	//int a, b;
	//int *pa = &a, *pb = &b;
 //  int **max=&pa, **min=&pb;
 //  int arr[] = {4,5,-3,588,34,23};


 //  int *parr = arr;
 //  int count = sizeof(arr) / sizeof(arr[0]);
	//maxmin(arr,max,min,count);
	//printf("max=%d",**max);










	////2.指针实现数组成员，由小到大排列 
	////数组的冒泡排序
	///*
	//	从第一个开始 两两相比，大的排后面 两两相比为一次循环  j的循环次数 为总个数-1-i
	//	j循环总个数-1 一组完成后，为i第一次循环完成 
	//	直到把所有的大的数组放到后面
	//*/
 //
	//int  arr[9] = { 7,2,5,8,9,0,4 ,14,244};
	//int count = sizeof(arr) / sizeof(int);
	//int *min=arr;

	//for (int i = 0; i < count-1;i++) {
	//	for (int j = 0; j < count-1- i;j++) {
	//		if (arr[j]>arr[j+1]) {
	//			int tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//		}
	//	}
	//}
	//for (int i = 0; i < count;i++) {
	//
	//	printf("%4d",arr[i]);
	//}
	//putchar('\n');
	

	//指针实现冒泡排序
	int  arry[9] = { 7,2,5,8,9,0,4 ,14,244 };

	int *parry = arry;
	int arrcount = sizeof(arry) / sizeof(arry[0]);

	for (int i = 0; i < arrcount - 1;i++) {
	
		for (int j = 0; j < arrcount - 1 - i;j++) {
			
			if (*(parry+j)>*(parry+(j+1))) {
			int a;
			int *tmp=&a;
			*tmp=*(parry + j);
			*(parry +j) = *(parry + j + 1);
			*(parry + j + 1) = *tmp;
			}
		}
	}

	for (int i = 0; i < arrcount;i++) {
	
		printf("%4d",*(parry+i));
	}





	system("pause");






	node n1;
	printf("%d\n", sizeof(n1));
	int number=0;
	
	nodeclass n2(number);
	printf("%d\n",sizeof(n2));

	int result = 0,number1,number2;
	printf("第一个数:");
	scanf("%d",&number1);

	printf("第二个数:");
	scanf("%d", &number2);

	char symbol='+';
	printf("选择计算符号(+ - * /)");
	//不是字符'\n'和EOF 就一直读取到一个字符变量中
	while (char getBuff = getchar() != '\n' && getBuff != EOF);
	scanf("%c",&symbol);
	addp(number1,number2,symbol,result);
	printf("计算结果:%d\n",result);

	char str[128];
	scanf("%s", &str);
	printf("%s\n", str);

	char *str2 = (char*)malloc(sizeof(char) * 64);

	printf("指向堆区的针作为输入");
	scanf("%s", &(*str2));
	printf("%s\n",str2);


	free(str2);
	point();

	system("pause");
	return 0;
}


char* strrcat(char *str,char *str2) {
	
	char *target =(char *) malloc(strlen(str)+strlen(str2)+1);
	if (target == NULL)exit(1);
	char *tmp = target;
	while (*str != '\0')//循环走到str的尾部
		*target++ = *str++;
	
	while ((*target++ = *str2++)!='\0');//str2拿出内容给str str2往后走一步，str也往后走一步
	

	return tmp;
}






void maxmin(int *arr,int **max,int **min,int count) {
	//if (max == NULL || min == NULL)return;
	int tmp = 0;
	for (int i = 0; i < count;i++) {
		
		if (arr[i] > tmp) {
			tmp = arr[i];
			
		}
	}
	
	**max =tmp;

}

void addp(int number1,int number2,char symbol,int &result) {
	
	switch (symbol) {
	case '+':
		result = number1 + number2;
		break;
	case'-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		if (number2!=0){ 
			result = number1 / number2; 
		}
		else {
			cerr << "除数不能为0" << endl;
		}
		if (number1 == 0) {
			cerr << "被除数为0没有意义" << endl;
		}
		
		break;
	default:
		break;
	
	}

}

nodeclass::nodeclass(int text)
{
}

nodeclass::~nodeclass()
{
}
