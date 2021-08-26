#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int choice;
		cout<<endl;
		cout <<"\t\t\t-------------------------GROUP MEMBERS--------------------------\n";
		cout <<"\t\t\tNAMES"<<setw(60)<<"INDEX NUMBERS\n";
		cout <<"\t\t\tAVIKE APUSIYINE SAMUEL                                  06201090\n";
		cout <<"\t\t\tISSIFU ABDALLAH FOBUR                                   06201159\n";
		cout <<"\t\t\tHARRIET ARKO                                            06201081\n";
		cout <<"\t\t\tFOSU RICHARD                                            06201136\n";
		cout <<"\t\t\tKWOYIRE REX                                             06201169\n";
		cout<<endl;
		cout<<endl;
		cout <<"\t\t\t*******************************************************\n";
		cout <<"\t\t\t*    WELCOME, PLEASE SELECT ONE OPTION  AT A TIME     *\n";
		cout <<"\t\t\t*******************************************************\n";
		cout<<endl;
		cout<<endl;
		cout <<"\t\t\t\t 1.  Area of a Cycle\n";
		cout <<"\t\t\t\t 2.  Parameter of Rectangle\n";
		cout <<"\t\t\t\t 3.  SquareRoot of a Number\n";
		cout <<"\t\t\t\t 4.  Exponent of a Number\n";
		cout <<"\t\t\t\t 5.  Grading System\n";
		cout <<"\t\t\t\t 6.  Prime Numbers\n";
		cout <<"\t\t\t\t 7.  Factorial of a Number\n";
		cout <<"\t\t\t\t 8.  Total resistance in Parrelle Resistor\n";
		cout <<"\t\t\t\t 9.  Trignometry Ratio\n";
		cout <<"\t\t\t\t 10. Check the number of 3s and 7s\n";
		cout <<"\n";
		cout <<"\t\t\t\t Please! Enter your choice_ ";
		cin >>choice;
		cout <<"\n";
		
		switch(choice){
			//area of a cycle
			case 1:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*                 AREA OF CIRCLE PROGRAM              *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				float radius_of_circle,area_of_circle;
				cout <<"\t\t\t\tPlease, Enter the radius :";
				cin >>radius_of_circle;
				area_of_circle = 3.14 * radius_of_circle * radius_of_circle;
				cout <<"\t\t\t\tThe Area of the circle = "<<area_of_circle;
				break;
			}
				
				
			//parimeter of a rectangle
			case 2:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*         PARAMETER OF RECTANGLE PROGRAM              *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				float lenght_of_rect, width_of_rect, parimeter_of_rect;
				cout<<"\t\t\t\t Enter the lenght_";
				cin>>lenght_of_rect;
				cout<<"\t\t\t\t Enter the width_";
				cin>>width_of_rect;
				parimeter_of_rect = 2 * lenght_of_rect + 2 * width_of_rect;
				cout<<"\t\t\t\t Parimeter = "<<parimeter_of_rect;
				break;
			}
				
				
			//Squareroot
			case 3:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*            CALCULATE SQUARE-ROOT PROGRAM            *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				float user_num, square_root;
				cout<<"\t\t\t\tEnter a Number to check the SquareRoot_";
				cin>>user_num;
				square_root = sqrt(user_num);
				cout<<"\t\t\t\t The SquareRoot = "<<square_root;
				break;
			}
				
				
			//exponent of a number	
			case 4:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*               POWER OF NUMBER PROGRAM               *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int base_num, power_num, exponent_num;
				cout <<"\t\t\t\t Enter the Base_";
				cin>>base_num;
				cout <<"\t\t\t\t Enter the exponent_";
				cin>>exponent_num;
				power_num = pow(base_num,exponent_num);
				cout<<"\t\t\t\t"<<base_num <<" to the power "<<exponent_num <<" = "<<power_num;
				break;
			}
				
				
			//grading system
			case 5:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*                   GRADING SYSTEM                    *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int score;
				cout <<"\t\t\t\t Enter your score to check your grade_";
				cin>>score;
				switch(score){
					case 0 ... 49:
						cout<<"\t\t\t\t You had F"<<endl;
						break;
					case 50 ... 54:
						cout<<"\t\t\t\t You had D"<<endl;
						break;
					case 55 ... 59:
						cout<<"\t\t\t\t You had D+"<<endl;
						break;
					case 60 ... 64:
						cout<<"\t\t\t\t You had C"<<endl;
						break;
					case 65 ... 69:
						cout<<"\t\t\t\t You had C+"<<endl;
						break;
					case 70 ... 74:
						cout<<"\t\t\t\t You had B"<<endl;
						break;
					case 75 ... 79:
						cout<<"\t\t\t\t You had B+"<<endl;
						break;
					case 80 ... 84:
						cout<<"\t\t\t\t You had A"<<endl;
						break;
					case 85 ... 100:
						cout<<"\t\t\t\t You had A+"<<endl;
						break;
					default:
						cout<<"\t\t\t\t Invalid Input"<<endl;
				}
				break;
			}
				
				
			//check for prime number
			case 6:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*                 CHECK PRIME NUMBER                  *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int num; 
				bool is_prime = true;
				cout <<"\t\t\t\t Enter a number to check for prime_";
				cin >>num;
			    for(int i=2; i<=num/2; i++){
					if(num % i==0){
			            is_prime = false;
			        }
				}
			    if(is_prime){
			        cout<<"\t\t\t\t "<<num<<" is a Prime number"<<endl;
			    }else{
			        cout<<"\t\t\t\t "<<num <<" is Not a Prime Number"<<endl;
			    }
				break;
			}
	
			//factorial of a number
			case 7:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*               FACTORIAL OF A NUMBER                 *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int fact_num = 0, fact_ans = 1;
				cout<<"\t\t\t\t Enter a number to compute the factorial_ ";
				cin>>fact_num;
				for(int i = 1; i <= fact_num; i++){
					fact_ans = fact_ans * i;
				}
				cout<<"\t\t\t\t Factorial of "<<fact_num <<" is "<<fact_ans<<endl;
				break;
			}
			
			//total resistance in paralle resistors
			case 8:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*       TOTAL RESISTANCE IN PARALLE RESISTORS         *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int i = 1, num_of_resistors;
				float x = 0, resistor, total_Resistor;
				cout<<"\t\t\t\tHow many resistors do you want to find_ ";
				cin>>num_of_resistors;
				while(i <= num_of_resistors){
					cout<<"\t\t\t\tEnter the resistor "<<i<<" : ";
					cin>>resistor;
					x = x + (1/resistor);
					i=i+1;
				}
				total_Resistor = 1/x;
				cout<<"\t\t\t\tThe total resistor = "<<total_Resistor<<endl;
				break;
			}
			
			//trigonometry functions
			case 9:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*              TRIGONOMETRIC FUNCTIONS                *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int trigonometry_choice;
				cout<<"\t\t\t\tSELECT YOUR OPTION\n\n\n";
				cout<<"\t\t\t\t1. Find sine\n";
				cout<<"\t\t\t\t2. Find cos\n";
				cout<<"\t\t\t\t3. Find tan\n";
				cout<<"\t\t\t\tEnter your choice_ ";
				cin>>trigonometry_choice;
	
				if(trigonometry_choice == 1){
					int sin_num;
					cout<<"\t\t\t\tEnter a number to find it's sin_ ";
					cin>>sin_num;
					cout<<"\t\t\t\tsine = "<<sin(sin_num)<<endl;
				}else if(trigonometry_choice == 2){
					int cos_num;
					cout<<"\t\t\t\tEnter a number to find it's cos_ ";
					cin>>cos_num;
					cout<<"\t\t\t\tCos = "<<cos(cos_num)<<endl;
				}else if(trigonometry_choice == 3){
					int tan_num;
					cout<<"\t\t\t\tEnter a number to find it's tan_ ";
					cin>>tan_num;
					cout<<"\t\t\t\ttan = "<<tan(tan_num)<<endl;
				}else{
					cout<<"\t\t\t\tInvalid input"<<endl;
				}
	
				break;
			}
			
			//the number of 3s and 7s
			case 10:{
				system("cls");
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout <<"\t\t\t*******************************************************\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*            THE NUMBER OF 3S AND 7S                  *\n";
				cout <<"\t\t\t*                                                     *\n";
				cout <<"\t\t\t*******************************************************\n";
				cout<<endl;
				cout<<endl;
				int arr_elements[5];
				int count3 = 0;
				int count7 = 0;
				cout<<"\t\t\t\tEnter five(5) numbers "<<endl;
				for(int i = 1; i <= 5; i++){
			
					cout<<"\t\t\t\tEnter number "<<i<<" :: ";
					cin>>arr_elements[i];	
				}
			
				for(int i = 1; i <= arr_elements[i]; i++){
					if(arr_elements[i] == 3){
						++count3;
					}
					if(arr_elements[i] == 7){
						++count7;
					}
				}
				cout<<endl;
				cout<<"\t\t\t\tThe number of 3s = "<<count3<<endl;
				cout <<"\t\t\t\tThe number of 7s = "<<count7<<endl;
				break;
			}
			
			default:{
				cout<<"\t\t\t\tInvalid Input"<<endl;
			}		
		}
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
