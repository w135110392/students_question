//pdf ��ʽ������Ҫ��ת����Word��ʽ
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

//��ά�������Ԫ�ص����ַ�ʽ
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

			cout << a[i % 4][j % 5] << " "; //�����˵Ķ������� ���� 0/4 ��0  1/4 ��1   
		}
		cout << "\n";
	}
}

//���ָ���һЩ����
void point(){
	int a[5] = { 1, 10, 3, 4, 6 };
	int *ptr = &a[1]; //ȡ��ַ��1 �������һ�� ͬ���������ַ
	cout << *(a + 1) << endl;
	cout << *(ptr-1) << endl;  //ָ���1 �ǵ�ַ��ǰ��1λ
}

//new  delete ��һЩ����
void dll(){
	char c[16] = "test";  
	char *a =c; //ָ��������ָ�� ����Ҫ�ͷ�
	
	for (int i = 0; i < sizeof(c) / sizeof(char);i++){
		cout << *(a + i);
	}
	cout << "\n";
	

}

//easyX��һЩʹ��
void graph(){
	IMAGE bg_img;
    const int start_x = 0; //���������ʼ���� ����
    const int start_y = 0; //���������ʼ���� ����

    char name[16] = {0}; //�û���
	char pwd[16] = {0};  //����

	int offset_x = 60; //����ƫ����
	int offset_y = 30; 

	initgraph(780, 900);
	loadimage(&bg_img, "bg.jpg", 780, 900, true);
	putimage(0, 0, &bg_img);

	setbkmode(TRANSPARENT); //���õ�ǰ���屳��ɫΪ͸��

	//�ظ���֤ �û��� ����
	while (1){
		if (strcmp(name, "pengyulong")!=0 || (strcmp(pwd, "w836116")!=0)){
			
			 InputBox(name, sizeof(name), "�û�����");
			if (strlen(name)<=0 ){
				MessageBox(NULL, "�û�������Ϊ��", "ע�⣡", MB_OK);

			}
					
					
			InputBox(pwd, sizeof(pwd), "���룺");
					if (strlen(pwd)<=0){
						MessageBox(NULL, "���벻��Ϊ�գ�", "ע��", MB_OK);
					}
			
		}
		else{

			break;
		}
		
	}
	//��ʾ�û��� 
	
	outtextxy(start_x, start_y, "�û���:");
	outtextxy(start_x + offset_x, start_y, name);


	//��*�������� ���  ��ʾ������һ������ * ��

	int pwdCount=strlen(pwd);
	char str[16];
   for (int i = 0; i < pwdCount;i++){
	
		str[i] = '*';
		str[pwdCount] = '\0';
	}

	outtextxy(start_x, start_y + offset_y, "����:");
	outtextxy(start_x + offset_x, start_y + offset_y, str);
	
	_getch();

}

//��ת�ַ���
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
	int k = 1; //һ����K������
	int arr[M][M];
	int arr2[M][M]; //������arr���齻��


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

	
		//һ����K������
	for (int i = 0; i < n; i++) {

		//���ǰ��Ŀո�
		for (int j = 0; j < n - i; j++) {

			cout << "  ";
		}



		//�и��жԻ� �����

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
	//cout << "����Ҫ";
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
	//time(&t);//��ȡ��1970-1-1�յ�����
	//timeinfo=localtime(&t); //localtime()תΪ����ʱ�䣬�������� Ϊ tm
	//cout << asctime(timeinfo) << endl;//asctime()תΪ��׼��ASCII��ʽ 
 /*
	�ַ�����ת 
	��ȡ�ַ������ܳ���
	��һ�������һ������λ��
	�ڶ����������ڶ�������λ��
	�ӵ�0����ʼ���� ����С���ܳ��ȳ���2
 
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






	//1.�����ַ�����ת
	//string str2 = "����С����";

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





	////4.�ַ���ƴ��

	//char str[128] ;
	//char str2[128] ;

	//
	//scanf("%s",&str);
	//scanf("%s",&str2);

	//char *p=strrcat(str,str2);
	//cout << p<<endl;
	//delete p;

	//



 //   //3.�ҵ����������Ԫ�غ���СԪ��  ���Ԫ�غ���СԪ�ص�λ��
	//int a, b;
	//int *pa = &a, *pb = &b;
 //  int **max=&pa, **min=&pb;
 //  int arr[] = {4,5,-3,588,34,23};


 //  int *parr = arr;
 //  int count = sizeof(arr) / sizeof(arr[0]);
	//maxmin(arr,max,min,count);
	//printf("max=%d",**max);










	////2.ָ��ʵ�������Ա����С�������� 
	////�����ð������
	///*
	//	�ӵ�һ����ʼ ������ȣ�����ź��� �������Ϊһ��ѭ��  j��ѭ������ Ϊ�ܸ���-1-i
	//	jѭ���ܸ���-1 һ����ɺ�Ϊi��һ��ѭ����� 
	//	ֱ�������еĴ������ŵ�����
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
	

	//ָ��ʵ��ð������
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
	printf("��һ����:");
	scanf("%d",&number1);

	printf("�ڶ�����:");
	scanf("%d", &number2);

	char symbol='+';
	printf("ѡ��������(+ - * /)");
	//�����ַ�'\n'��EOF ��һֱ��ȡ��һ���ַ�������
	while (char getBuff = getchar() != '\n' && getBuff != EOF);
	scanf("%c",&symbol);
	addp(number1,number2,symbol,result);
	printf("������:%d\n",result);

	char str[128];
	scanf("%s", &str);
	printf("%s\n", str);

	char *str2 = (char*)malloc(sizeof(char) * 64);

	printf("ָ�����������Ϊ����");
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
	while (*str != '\0')//ѭ���ߵ�str��β��
		*target++ = *str++;
	
	while ((*target++ = *str2++)!='\0');//str2�ó����ݸ�str str2������һ����strҲ������һ��
	

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
			cerr << "��������Ϊ0" << endl;
		}
		if (number1 == 0) {
			cerr << "������Ϊ0û������" << endl;
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
