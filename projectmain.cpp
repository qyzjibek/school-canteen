#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <tchar.h>
using namespace std;
void input();
void searchname();
void searchage();
void searchsalary();
void searchtime();
void quit();
void displayall();
void search();
void deleteFile();
void editFile();
void review();
void otz();
void list();
void deleting();
void menu();
void mmenu();
void watch();
void edit();
void deleteMenu();

int main()
{   
setlocale(LC_ALL,"Russian");
system ("title DREAM TEAM  Database Program");
system ("cls");
system ("color 0F");
int choice;
cout<<"\t\t-----------------------------------------\n";
cout<<"\t\t     ������ �������� ����� ����\n";
cout<<"\t\t-----------------------------------------\n";
cout<<"    w        w   e e e e   l         c c c c   o o o o    m      m   e e e e" << endl;
cout<<"    w            e         l         c         o     o    m m  m m   e      " << endl;
cout<<"    w   w w  w   e e e e   l         c         o     o    m  m   m   e e e e" << endl;
cout<<"    w w    w w   e         l         c         o     o    m      m   e      " << endl;
cout<<"    w        w   e e e e   l l l l   c c c c   o o o o    m      m   e e e e" << endl;
cout << " " << endl;
cout << "1.����" << endl;
cout << "2.�������� ���" << endl;
cout << "3.������ ��������� �� ���� ������" << endl;
cout << "4.�������� ���������" << endl;
cout << "5.����� � ��������� " << endl;
cout << "6.����� �� ���������" << endl;
cout << " " << endl;
cout << "������� ��������� ���� �����: ";
cin >> choice;
switch (choice){
	case 1:
		menu();
		break;
   	case 2:
   		input();
        break;
    case 3:
        search();
        break;
    case 4:
        deleteFile();
        break;
    case 5:
        review();
        break;
    case 6:
        quit();
        break;
    cin.get();
}
}

void gotoxy(int x, int y)
{
    COORD ord;
    ord.X = x;
    ord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
}

void menu(){
	setlocale(LC_ALL,"Russian");
	system ("title DREAM TEAM  Database Program");
	system ("cls");
	system ("color 0F");
	int choice3;
	cout<<"\t\t-----------------------------------------\n";
	cout<<"\t\t    ���� ������ �������� ����� ����\n";
	cout<<"\t\t-----------------------------------------\n";
	cout << "1.�������� ����� � ����" << endl;
	cout << "2.���������� ��� ����" << endl;
	cout << "3.�������� ����" << endl;
	cout << "4.�����" << endl;
	cout << " " << endl;
	cout << "������� ��������� ���� �����: ";
	cin >> choice3;
	switch (choice3){
	case 1:
		mmenu();
		break;
   	case 2:
   		watch();
        break;
    case 3:
        deleteMenu();
        break;
    case 4:
        main();
        break;
}
}

void mmenu(){
	setlocale(LC_ALL,"Russian");      
	string Food2;
	int price; 
	string Food3;
	int pprice; 
	string Food4;
	int ppprice; 
	ofstream newmenu1("menu1.txt", ios::app);
	ofstream newmenu2("menu2.txt", ios::app);
	ofstream newmenu3("menu3.txt", ios::app);
	cout << " " << endl;
	cout << "1.������� ������ ��� ������ �����: ";
	cin >> Food2;
	cout << "������� ���� ������� ��� ������� �����: ";
	cin >> price;
	newmenu1 << Food2 << ' ' << price << endl;
	cout << " " << endl;
	cout << "2.������� �������: ";
	cin >> Food3;
	cout << "������� ���� �������: ";
	cin >> pprice;
	newmenu2 << Food3 <<  ' ' << pprice << endl;
	cout << " " << endl;
	cout << "3.������� ������: ";
	cin >> Food4;
	cout << "������� ���� ������: ";
	cin >> ppprice;
	cout << " " << endl; 
	newmenu3 << Food4 << ' ' << ppprice << endl;     
	system ("pause");
	newmenu1.close(); 
	newmenu2.close(); 
	newmenu3.close(); 
	main();
}

void watch(){
	setlocale(LC_ALL,"Russian"); 
    ifstream newmenu1("menu1.txt");
    ifstream newmenu2("menu2.txt");
    ifstream newmenu3("menu3.txt");
	string Food2;
	int price; 
	string Food3;
	int pprice; 
	string Food4;
	int ppprice;
	int num;
    system("cls");
    cout << "\t\t\t���� ����: " ;
    gotoxy(10,5);
    std::cout << "___________________________________________";
    gotoxy(10,6);
    cout << "������ � ������ ����� " << endl;
    gotoxy(10,7);
    std::cout << "___________________________________________";
    gotoxy(10,8);
    std::cout << "No  Food Name          PRICE       ";
    gotoxy(10,9);
    std::cout << "___________________________________________";
    int pos=10;
    for( int i=0; i<6; i++){
    	while (newmenu1 >> Food2 >> price){
    	gotoxy(10,pos);
    	i = i + 1;
        std::cout << i;
        gotoxy(14,pos);
        std::cout << Food2;
        gotoxy(33,pos);
        std::cout << price << "tg";
        pos++;
		}
    }  
	gotoxy(10,15);
    std::cout << "___________________________________________";
    gotoxy(10,16);
    cout << " ������� " << endl;
    gotoxy(10,17);
    std::cout << "___________________________________________";
    gotoxy(10,18);
    std::cout << "No  Food Name          PRICE       ";
    gotoxy(10,19);
    std::cout << "___________________________________________";
    int pos1=20;
    for(int l=0; l<4; l++){
    	while (newmenu2 >> Food3 >> pprice){
    		gotoxy(10,pos1);
    		l = l + 1;
            std::cout << l;
            gotoxy(14,pos1);
            std::cout << Food3;
            gotoxy(33,pos1);
            std::cout << pprice << "tg";
            pos1++;
		}
	}
	gotoxy(10,23);
    std::cout << "___________________________________________";
    gotoxy(10,24);
    cout << " ������ " << endl;
    gotoxy(10,25);
    std::cout << "___________________________________________";
    gotoxy(10,26);
    std::cout << "No  Food Name          PRICE       ";
    gotoxy(10,27);
    std::cout << "___________________________________________" << endl;
    int pos2=28;
    char j;
    for(j='A'-1; j<'D'; j++)
    {
    	while (newmenu3 >> Food4 >> ppprice){
    	gotoxy(10,pos2);
    	j = j + 1;
        std::cout << j;
        gotoxy(14,pos2);  
        std::cout << Food4<<endl;
        gotoxy(33,pos2);
        std::cout << ppprice << "tg" << endl;
        pos2++;
		}
	}
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
    system ("pause");
    main();
}

void deleteMenu(){
	setlocale(LC_ALL,"Russian");
	string decision; 
	string password = "fizmat2020";
	string word;
	system("cls");
	cout <<"\t\t-----------------------------------------\n";
	cout <<"\t\t              PASSWORD\n";
	cout <<"\t\t-----------------------------------------\n";
	cout << "������� ������:";
	cin >> word;
	if(word == password){
     	cout << "������ ����������! ������ �������� ������ �������!" << endl;
     	cout << " " << endl;
     	cout << "�� �������?[y]es[n]o" << endl;
		cin >> decision;
		if (decision == "y"){
		ofstream newmenu1("menu1.txt");
	    ofstream newmenu2("menu2.txt");
	    ofstream newmenu3("menu3.txt");
	    system("cls");
    	cout << "������� ���������!" << endl;
		system("pause");
		newmenu1.close(); 
		newmenu2.close(); 
		newmenu3.close(); 
		main();
		}
		else{
			main();
			}
	}
    else{
    	cout << "������ ������������ ������. ��������� �������!" << endl;
    	system("pause");
    	main();
	}
}

void review()
{
	setlocale(LC_ALL,"Russian");
    string age;
    string name;
    long double sum;
    int choice2;
    system ("CLS");
    cout << "\t\t-----------------------------------------\n";
	cout << "\t\t                ������\n";
	cout << "\t\t-----------------------------------------\n";
	cout << " " << endl;
    cout << "1.�������� ���� �����" << endl;
    cout << "-------------------------" << endl;
    cout << "2.���������� ��� ������" << endl;
    cout << "-------------------------" << endl;
    cout << "3.�������� ������ ������� " << endl;
    cout << "-------------------------" << endl;
    cout << "4.����� " << endl;
    cout << "-------------------------" << endl;
    cout << " " << endl;
    cout << "������� ��������� ���� �����: ";
    cin >> choice2;
    
    switch (choice2){
    	case 1:
            otz();
            break;
        case 2:
            list();
            break;
        case 3:
            deleting();
            break;
        case 4:
        	main();
            break;	
	}
}

void otz(){
	setlocale(LC_ALL,"Russian");      
	string rreview;
	string namee; 
	string star;
	ofstream newreview("review.txt", ios::app);
	cout << " " << endl;
	cout << "1.������� ��� : ";
	cin >> namee;
	cin.sync();
	cout << " " << endl;
	cout << "2.�� ������� ����� �� ������� ��� ���������(1-5)? ";
	cin >> star;
	cout << " " << endl;
	if(star == "4" || star == "5"){
		cout << "-������� ������� �� ���� ������� ������!!!";
	}
	else if(star == "1" || "2" || "3"){
		cout << "�� ����� ��������� ������(((";
	}
	cout << " " << endl;
	cout << " " << endl;
	cout << "3.������� ����� ������ ������: ";
	cin >> rreview;
	cout << " " << endl; 
	newreview << namee << ' ' << star << ' ' << rreview << endl;     
	system ("pause");
	newreview.close(); 
	main();
}

void list(){
	setlocale(LC_ALL,"Russian"); 
    ifstream review("review.txt");
    string star;
    string rreview;
    string namee;
    system("cls");
    gotoxy(10,4);
    std::cout << "���� ������ ���� �������";
    gotoxy(10,5);
    std::cout << "___________________________________________";
    gotoxy(10,6);
    std::cout << "   Student Name       Stars     Review   "<<endl;
    std::cout << "          ___________________________________________";
    int pos = 8;
    while (review >> namee >> star >> rreview)
    {
        gotoxy(14,pos);
        std::cout << namee;
        gotoxy(33,pos);
        std::cout << star;
        gotoxy(42,pos);
        std::cout << rreview;
        pos++;
    }
    gotoxy(10,pos++);
    std::cout << "___________________________________________";
    pos++;
    gotoxy(10,pos++);
    system ("pause");
    main();
}

void deleting(){
	setlocale(LC_ALL,"Russian");
	string decision; 
	string password = "fizmat2020";
	string word;
	system("cls");
	cout <<"\t\t-----------------------------------------\n";
	cout <<"\t\t              PASSWORD\n";
	cout <<"\t\t-----------------------------------------\n";
	cout << "������� ������:";
	cin >> word;
	if(word == password){
     	cout << "������ ����������! ������ �������� ������ �������!" << endl;
     	cout << " " << endl;
     	cout << "�� �������?[y]es[n]o" << endl;
		cin >> decision;
		if (decision == "y"){
		ofstream review("review.txt");
	    system("cls");
    	cout << "������� ���������!" << endl;
		system("pause");
		review.close();
		main();
		}
		else{
			main();
			}
	}
    else{
    	cout << "������ ������������ ������. ��������� �������!" << endl;
    	system("pause");
    	main();
	}
}
                
void input()
{ 
 setlocale(LC_ALL,"Russian");      
 string name;
 string age; 
 string food;
 string gar;
 string salad;
 string nan;
 string pay;
 int nnan;
 int sum = 0;
 string time;
 string Food2;
 int price; 
 string Food3;
 int pprice; 
 string Food4;
 int ppprice;
 ofstream newemployee("neworder.txt", ios::app);
 ifstream menu1("menu1.txt");
 ifstream menu2("menu2.txt"); 
 ifstream menu3("menu3.txt");
 system("cls");
    system("cls");
    cout << "\t\t\t���� ����: " ;
    gotoxy(10,1);
    std::cout << "___________________________________________";
    gotoxy(10,2);
    cout << "������ � ������ ����� " << endl;
    gotoxy(10,3);
    std::cout << "___________________________________________";
    gotoxy(10,4);
    std::cout << "No  Food Name          PRICE       ";
    gotoxy(10,5);
    std::cout << "___________________________________________";
    int pos=6;
    for( int i=0; i<7; i++){
    	while (menu1 >> Food2 >> price){
    	gotoxy(10,pos);
    	i = i + 1;
        std::cout << i;
        gotoxy(14,pos);
        std::cout << Food2;
        gotoxy(33,pos);
        std::cout << price << "tg";
        pos++;
		}
    }  
	gotoxy(10,12);
    std::cout << "___________________________________________";
    gotoxy(10,13);
    cout << " ������� " << endl;
    gotoxy(10,14);
    std::cout << "___________________________________________";
    gotoxy(10,15);
    std::cout << "No  Food Name          PRICE       ";
    gotoxy(10,16);
    std::cout << "___________________________________________";
    int pos1=17;
    for(int l=0; l<5; l++){
    	while (menu2 >> Food3 >> pprice){
    		gotoxy(10,pos1);
    		l = l + 1;
            std::cout << l;
            gotoxy(14,pos1);
            std::cout << Food3;
            gotoxy(33,pos1);
            std::cout << pprice << "tg";
            pos1++;
		}
	}
	gotoxy(10,21);
    std::cout << "___________________________________________";
    gotoxy(10,22);
    cout << " ������ " << endl;
    gotoxy(10,23);
    std::cout << "___________________________________________";
    gotoxy(10,24);
    std::cout << "No  Food Name          PRICE       ";
    gotoxy(10,25);
    std::cout << "___________________________________________" << endl;
    int pos2=26;
    char j;
    for(j='A'-1; j<'D'; j++)
    {
    	while (menu3 >> Food4 >> ppprice){
    	gotoxy(10,pos2);
    	j = j + 1;
        std::cout << j;
        gotoxy(14,pos2);  
        std::cout << Food4<<endl;
        gotoxy(33,pos2);
        std::cout << ppprice << "tg" << endl;
        pos2++;
		}
	}
 cout << " " << endl;
 cout << "1.������� ��� ���������: ";
 cin >> name;
 cin.sync();
 cout << " " << endl;
 cout << "2.������� ����� ���������: ";
 cin >> age;
 cout << " " << endl;
 cout << "3.������� ����� ������� ��� ������� �����: ";
 cin >> food;
 cout << " " << endl;
 if(food == "1"){
	sum = sum + 400;
 }
 else if(food == "2"){
 	sum = sum + 450;
 }
 cout << "4.������� ����� �������: ";
 cin >> gar;
 cout << " " << endl;
 if(gar >= "1" && gar <= "8"){
 	sum = sum + 150;
 }
 cout << "5.������� ����� ������: ";
 cin >> salad;
 cout << " " << endl;
 if(salad >= "A" && salad <= "H"){
 	sum =  sum + 300;
 }
 cout << "5.� ����� �����?" << endl;
 cout << "-9:25 " << endl;
 cout << "-11:05 " << endl;
 cout << "-12:55 " << endl;
 cout << "-14:40 " << endl;
 cout << "��� �����: ";
 cin >> time;
 cout << " " << endl;
 cout << "6.������ �� �� �������� ���� � ������ ������ (yes/no)?" << endl << "��� �����: ";
 cin >> nan;
 cout << " " << endl;
 if(nan == "yes"){
 	cout << "������� �������� ����� �� ������? " << endl << "��� �����: ";
 	cin >> nnan;
 	sum = sum +10*nnan;
	cout << " " << endl;
 	cout << "______________________________" << endl;
	cout << "����� ������ ������: " << " " << sum << "tg" << endl;
	cout << "______________________________" << endl;
	cout << " " << endl;
	cout << "-��� ��� ������ ��������?" << endl;
	cout << "1.Kaspi Gold " << endl;
	cout << "2.��������� " << endl;
	cout << "��� �����: ";
	cin >> pay;
	cout << " " << endl;
	if(pay == "1"){
		cout << "����� ����� �����: +7**********" << endl;
		cout << " " << endl;
	}
	if(pay == "2"){
		cout << "����� ����� ��� � ��������!";
		cout << " " << endl;
	}
 }
 if(nan == "no"){
 	cout << "_______________________________________________________________________________" << endl;
	cout << "����� ������ ������: " << " " << sum << "tg" << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << " " << endl;
	cout << "-��� ��� ������ ��������?" << endl;
	cout << "1.Kaspi Gold " << endl;
	cout << "2.��������� " << endl;
	cout << "��� �����: ";
	cin >> pay;
	cout << " " << endl;
	if(pay == "1"){
		cout << "����� ����� �����: +7**********" << endl;
		cout << " " << endl;
	}
	if(pay == "2"){
		cout << "����� ����� ��� � ��������!";
		cout << " " << endl;
	}
 }
 cout << " " << endl;
 cout << " " << endl;
 newemployee << name << ' ' << age << ' ' << time << ' ' << sum << endl;     
 system ("pause");
 newemployee.close(); 
 menu2.close(); 
 menu3.close(); 
 main();
}

void searchname()
{
	setlocale(LC_ALL,"Russian");  
    ifstream employee("neworder.txt");
    string name, age;
    string str, line;
    int offset;
    long int sum;
    string time;
    system("CLS");
    cout << " " << endl;
    cout << "������� ��� ���������: ";
    cin >> str;
    gotoxy(10,4);
    std::cout << "      ����� �� ����� ��������� ";
    gotoxy(10,5);
    std::cout << "______________________________________________";
    gotoxy(10,6);
    std::cout << "   Student Name       Grade     Time     Sum   "<<endl;
    std::cout << "          ______________________________________________" << endl;
    int pos = 8;
    while (employee >> name >> age >> time >> sum){
	if (str == name){
		gotoxy(14,pos);
        std::cout << name;
        gotoxy(33,pos);
        std::cout << age;
        gotoxy(42,pos);
        std::cout << time;
        gotoxy(51,pos);
        std::cout << sum << "tg"  << endl;
        pos++;
        cout << " " << endl;
        cout << " " << endl;
    }
    }
    if (str != name){
    	cout << "��� ��������� � ����� ������!" << endl;
		cout << " " << endl;  
	}
		system ("pause");
		main();
}

void searchage()
 {
 	setlocale(LC_ALL,"Russian");  
    ifstream employee("neworder.txt");
    string name;
    string age ;
    string fage;
    long int sum;
    string time;
    system ("CLS");
    cout << " " << endl;
    cout << "������� ����� ���������: ";
    cin >> fage;
    gotoxy(10,4);
    std::cout << "      ����� �� ������ ��������� ";
    gotoxy(10,5);
    std::cout << "______________________________________________";
    gotoxy(10,6);
    std::cout << "   Student Name       Grade     Time     Sum   "<<endl;
    std::cout << "          ______________________________________________"<< endl;
    int pos = 8;
    while (employee >> name >> age >> time >> sum)
	{
    	if (fage == age){
            gotoxy(14,pos);
            std::cout << name;
            gotoxy(33,pos);
            std::cout << age;
            gotoxy(42,pos);
            std::cout << time;
            gotoxy(51,pos);
            std::cout << sum << "tg"  << endl;
            pos++;
            cout << " " << endl;
            cout << " " << endl;
        }
    }   
	if (fage != age){
    	cout << "��� ��������� �� ����� ������!" << endl;
		cout << " " << endl;  
	}
    system ("pause");
    cin.get();
    main();
  }
  
void searchsum()
{
	setlocale(LC_ALL,"Russian");  
    ifstream employee ("neworder.txt");
    string name;
    string age ;
    long int sum;
    long int fsum;
    string time;
    system ("CLS");
    cout << " " << endl;
    cout << "������� ����� ���������: ";
    cin >> fsum;
    gotoxy(10,4);
    std::cout << "      ����� �� ����� ������ ";
    gotoxy(10,5);
    std::cout << "______________________________________________";
    gotoxy(10,6);
    std::cout << "   Student Name       Grade     Time     Sum   "<<endl;
    std::cout << "          ______________________________________________"<< endl;
    int pos = 8;
    while (employee >> name >> age >> time >> sum)
    {
    	if (fsum == sum ){
    		gotoxy(14,pos);
            std::cout << name;
            gotoxy(33,pos);
            std::cout << age;
            gotoxy(42,pos);
            std::cout << time;
            gotoxy(51,pos);
            std::cout << sum << "tg"  << endl;
            pos++;
            cout << " " << endl;
            cout << " " << endl;
		}
	}
	if (fsum != sum ){
    	cout << "��� ��������� � ����� ������ ������!" << endl;
		cout << " " << endl;  
	}
    system("pause");
    cin.get();
    main();
 }
 
void searchtime(){
	setlocale(LC_ALL,"Russian");  
    ifstream employee ("neworder.txt");
    string name;
    string age ;
    long int sum;
    string ftime;
    string time;
    system ("CLS");
    cout << " " << endl;
    cout << "������� ����� ������: ";
    cin >> ftime;
    gotoxy(10,4);
    std::cout << "      ����� �� ������� ������ ";
    gotoxy(10,5);
    std::cout << "______________________________________________";
    gotoxy(10,6);
    std::cout << "   Student Name       Grade     Time     Sum   "<<endl;
    std::cout << "          ______________________________________________"<< endl;
    int pos = 8;
    while (employee >> name >> age >> time >> sum)
    {
    	if (ftime == time ){
    		gotoxy(14,pos);
            std::cout << name;
            gotoxy(33,pos);
            std::cout << age;
            gotoxy(42,pos);
            std::cout << time;
            gotoxy(51,pos);
            std::cout << sum << "tg"  << endl;
            pos++;
            cout << " " << endl;
            cout << " " << endl;
		}
	}
	if (ftime != time ){
    	cout << "��� ��������� � ����� ������ ������!" << endl;
		cout << " " << endl;  
	}
    system("pause");
    cin.get();
    main();
}
 
void quit()
{
 setlocale(LC_ALL,"Russian"); 
 system ("CLS");
 cout << "-----------------------------------------------------------------------------" << endl;
 cout << "BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE" << endl;
 cout << "-----------------------------------------------------------------------------" << endl;
 cout << " " << endl;
 cout << " " << endl;
 cout << "������� ������� ��� ��c������������ ����� ����������!" << endl;
 cout << " " << endl;
 cout << " " << endl;
 cout << "-----------------------------------------------------------------------------" << endl;
 cout << "BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE   BYE" << endl;
 cout << "-----------------------------------------------------------------------------" << endl;
 cout << " " << endl;
 cout << " " << endl;
 cout << " " << endl;
 cout << " " << endl;
 system ("pause");
 cin.get();
} 

void displayall()
{
	setlocale(LC_ALL,"Russian"); 
    ifstream employee("neworder.txt");
    string age;
    long int sum;
    string name;
    string time;
    ::system("cls");
    gotoxy(10,4);
    std::cout << "���� ������ ���� ����������";
    gotoxy(10,5);
    std::cout << "______________________________________________";
    gotoxy(10,6);
    std::cout << "   Student Name       Grade     Time     Sum   "<<endl;
    std::cout << "          ______________________________________________";
    int pos = 8;
    while (employee >> name >> age >> time >> sum)
    {
        gotoxy(14,pos);
        std::cout << name;
        gotoxy(33,pos);
        std::cout << age;
        gotoxy(42,pos);
        std::cout << time;
        gotoxy(51,pos);
        std::cout << sum << "tg"  << endl;
        pos++;
        cout << " " << endl;
        cout << " " << endl;
    }
    gotoxy(10,pos++);
    std::cout << "______________________________________________";
    pos++;
    gotoxy(10,pos++);
    system ("pause");
    main();
}
     
void search()
{
	setlocale(LC_ALL,"Russian");
    string age;
    string name;
    long double sum;
    int choice2;
    string time;
    system ("CLS");
    cout << "\t\t-----------------------------------------\n";
    cout << "\t\t    ����� ��������� �� ���� ������\n";
	cout << "\t\t-----------------------------------------\n";
	cout << " " << endl;
    cout << "1.������ �� �����" << endl;
    cout << "------------------------" << endl;
    cout << "2.������ �� ������" << endl;
    cout << "------------------------" << endl;
    cout << "3.������ �� ����� ������" << endl;
    cout << "------------------------" << endl;
    cout << "4.������ �� �������" << endl;
    cout << "------------------------" << endl;
    cout << "5.����� ���� ����������" << endl;
    cout << "------------------------" << endl;
    cout << "6.�����" << endl;
    cout << "------------------------" << endl;
    cout << "7.����� �� ���������" << endl;
    cout << "------------------------" << endl;
    cout << " " << endl;
    cout << "������� ��������� ���� �����: ";
    cin >> choice2;
    switch (choice2){
    	case 1:
    		searchname();
            break;
        case 2:
            searchage();
            break;
        case 3:
            searchsum();
            break;
        case 4:
            searchtime();
            break;    
        case 5:
            displayall();
            break;
        case 6:
            main();
            break;
        case 7:
            quit();
            break;
    }
}

void deleteFile()
{
    setlocale(LC_ALL,"Russian");
    string decision;
    string password = "fizmat2020";
    string word;
    system("cls");
    cout <<"\t\t-----------------------------------------\n";
	cout <<"\t\t              PASSWORD\n";
	cout <<"\t\t-----------------------------------------\n";
    cout << "������� ������:";
    cin >> word;
    if(word == password){
     	cout << "������ ����������! ������ �������� ���������!" << endl;
     	cout << " " << endl;
     	cout << "�� �������?[y]es[n]o" << endl;
		cin >> decision;
		if (decision == "y"){
		ofstream employee("neworder.txt");
		system("cls");
		cout << "������� ���������!" << endl;
		system("pause");
		employee.close();
		main();
		}
		else{
		main();
		}
	}
    else{
    	cout << "������ ������������ ������. ��������� �������!" << endl;
    	system("pause");
    	main();
	}
}

