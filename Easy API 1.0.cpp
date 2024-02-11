/*

[C] : Copyright by Grassinternet.Inc [2022 - 2024]

[D] : Design by Easy.Inc [2023 - 2024]

[A] : Assembled by Easy.Inc [2023 - 2024] in China

Checked by Grassinternet.Inc [2022 - 2024]

(The workgroup 'Easy.Inc' is buiding under 'Grassinternet.Inc')

*/

/*

Project Name : Coffie API (Version : 1.0 RC)

Eula : MIT lisence

Programming languege : C++ & C & FlashE

Workflow : Under Grassinternet(R) EasyOS(R) 4.0
		   		 Grassinternet(R) FlashE(R) 1.0

Work group : Easy.Inc [2023 - 2024]

Checker : grass_block & Grassinternet.Inc [2022 - 2024]

Product : Producted by Grassproducing.Inc [2024] in CNA , Guizhou

Finally copyright :

Copyright by Grassinternet.Inc [2022 - 2024]
All rights revices
Do not change or reproduce

*/

/*
Easy.Inc [2023 - 2024]

Creator : grass_block

Creators & Builders :

Zhunjunjie_Official (AZ Studio [2023 - 2024]) 
webside : github.com/zhujunjie-official , azstudio.net.cn

Xbodw
webside : github.com/xbodw 

不知道从哪来的WIN7
webside : bzdcnldw7.mysxl.cn

Srz123123 (SimpleOS.Inc [2023])
webside : github.com/Srz123123 

grass_block
webside : github.com/grassblock123

Inside Studios : 
Grassinternet.Inc , Easy.Inc , Srz Studio ,AZ Studio
*/

//library & included
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <windows.h>
#define random(x)(rand()%x)
using namespace std;

//Define varibles ( CONST ONLY ! )
	int cnt = 0;
	int war_win_len = 27;
	int war_win_mainly_len = 25;
	int lose = 0;
	int lose_half = 0;
	
//define funtions
	int window_side(int len){
		for(int i = 0; i <= len - 1; i++){
				if(i == 0 || i == len - 1){
					cout << "#";
				}else{
					cout << "-";
				}
			}
		return 0;
	}
	
	int window_title(string title , int len){
		lose = len - title.size();
		lose_half = ceil(lose / 2);
		for(int i = 0; i < lose_half; i++){
			cout << " ";
		}
		cout << title;
		for(int i = 0; i < len - lose_half; i++){
			cout << " ";
		}
		cout << "\n ";
		return 0;
	}
	
	int window_type(string message , int len){
		for(int i = 0; i < message.size(); i++){
				cout << message[i];
				if(message[i] == '\n'){
					cout << " ";
					cnt = 0;
				}else{
					cnt ++;
				}
				if(cnt == len - 2){
					cout << " \n ";
					cnt = 0;
				}
			}
			cout << "\n\n";
	}
	
	int window_button(string kind , int length){
		//PATH : [YES]   [NO]
		//PATH : [CLOSE]
		if(kind == "choose"){
			lose = length - 12;
			lose_half = ceil(lose / 2);
			for(int i = 0; i < lose_half; i++){
				cout << " ";
			}
			cout << "[YES]   [NO]";
			for(int i = 0; i < length - lose_half; i++){
				cout << " ";
			}
			cout << "\n\n";
		}else if(kind == "close"){
			lose = length - 7;
			lose_half = ceil(lose / 2);
			for(int i = 0; i < lose_half; i++){
				cout << " ";
			}
			cout << "[CLOSE]";
			for(int i = 0; i < length - lose_half; i++){
				cout << " ";
			}
			cout << "\n\n";
		}
		
	}
	
	int window_checker(int length , int mx_length , int hight , int mx_hight, string title , string mainly){
		if(length > mx_length){
			cout << "Error!\nCause : Length is too long!(Don't more than 120 pixels)\n";
			return 0;
		}else if(hight > mx_hight){
			cout << "Error!\nCause : Hight is too long!(Don't more than 30 pixels)\n";
			return 0;
		}else if(floor(mainly.size() / (length - 2))> mx_hight){
			cout << "Error!\nCause : Message is too long!\n";
			return 0;
		}else if(title.size() > mx_length - 2){
			cout << "Error!\nCause : Title is too long!\n";
			return 0;
		}else{
			return 1;
		}
		return 0;
	}
	
	int waring_window(string title , string mainly , string kind){
		if(!window_checker(27,27,30,30,title,mainly)){
			
		}else{
			cout << "[-------------------------]\n";
			window_title(title,27);
			cout << "\n ";
			window_type(mainly,27);
			window_button(kind,27);
			cout << "[-------------------------]\n";
			return 0;
		}
	}
	
	int application_window(int length , int hight , string title , string mainly){
		if(!window_checker(length , 120 , hight , 30 , title , mainly)){
			
		}else{
			window_side(length);
			window_title(title,length);
			window_type(mainly,length);
			window_side(length);
			return 0;
		}
	}
	
	int rect_drawer(int x , int y){
		for(int i = 0; i < y; i++){
			for(int j = 0; j < x; j++){
				if(i == 0 || i == y - 1){
					cout << "* ";
				}else if(j == 0 || j == x - 1){
					cout << "*";
				}else{
					cout << "  ";
				}
			}
			cout << "\n";
		}
		return 0;
	}
	
	int window_updater(){
		for(int i = 4; i <= 30; i++){
			rect_drawer(i * 2,i);
			system("cls");
		}
	} 
	
//main funtion & test
int main(){
	//TYPE HERE !!!!!!!!!
	return 0;
}
