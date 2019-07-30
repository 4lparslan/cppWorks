#include<iostream>
#include<string>
#include<fstream>
#include<stdio.h>
using namespace std;

	int interestCalculate(int bakiye){
		return (bakiye*3)/100;
	}

	int main(){
		
		struct person {
			string name;
			int balance;
			int interest;
			int debtInterest;
		}clients[5]={"isimsiz",0,0,0,"isimsiz",0,0,0,"isimsiz",0,0,0,"isimsiz",0,0,0,"isimsiz",0,0,0};
		int loop=1,choice,processSubs=0;
		string cName;
		while(loop==1){
			cout<<endl<<"Bankacılık Programına Hoşgeldin!"<<endl;
			cout<<"-1- Müşteri Ekle"<<endl;
			cout<<"-2- Müşteri Sil"<<endl;
			cout<<"-3- Diğer İşlemler"<<endl;
			cout<<"-4- Çıkış"<<endl;
			cin>>choice;

			if(choice==1){
				cout<<"Eklenecek Müşterinin Adını Girin : ";
				cin>>cName;
				while(clients[processSubs].name!="isimsiz"){//finding empty subscript
					processSubs++;
				}
				clients[processSubs].name=cName;
				ofstream dosya;
				dosya.open(cName.c_str());
				dosya<<"0"<<endl<<"0"<<endl<<"0"<<endl;
				dosya.close();
				dosya.open("müşteriler.txt",ios::app);
				dosya<<cName<<endl;
				cout<<endl<<"Başka bir işlem yapmak ister misin?  (0 / 1)"<<endl;
				cin>>loop;
			}
			else if(choice==2){
				cout<<"2";
				loop=0;
			}
			else if(choice==3){
				int temp=1,client,t1,t2,t3,p,para,borc;
				string cl[5];
				ifstream dosya;
				dosya.open("müşteriler.txt");
				cout<<endl<<"Müşteri Seçin:"<<endl;
				while(getline(dosya,cName)){
					cl[temp-1]=cName;
					cout<<temp++<<"- "<<cName<<endl;		
				}
				temp--;
				cin>>client;
				string tempName=cl[client-1];
				ifstream belge;
				belge.open(tempName);
				belge>>t1>>t2>>t3;
				belge.close();
				cout<<endl<<"Müşteri: "<<tempName<<endl;
				cout<<"Bakiye: "<<t1<<endl;
				cout<<"Faiz: "<<t2<<endl;
				cout<<"Borç Faizi: "<<t3<<endl;

				cout<<endl<<"-İŞLEMLER-"<<endl<<"0- Çıkış"<<endl<<"1- Para Yatır"<<endl;
				cout<<"2- Para Çek"<<endl<<"3- $ AY SONU $"<<endl;	
				cin>>p;
				if(p==0)
					loop=0;
				else if(p==1){
					cout<<"Yatırılacak Miktarı Girin."<<endl;	
					cin>>para;			
					ofstream belge;
					belge.open(tempName);
					t2=interestCalculate(t1+para);
					belge<<t1+para<<endl<<t2<<endl<<t3<<endl;
					belge.close();
					cout<<endl<<"Başka bir işlem yapmak ister misin?  (0 / 1)"<<endl;
					cin>>loop;
				}
				else if(p==2){
					cout<<"Çekilecek Miktarı Girin."<<endl;	
					cin>>para;	
					if(para>t1){
						cout<<"Bakiye Yetersiz!"<<endl;
						cout<<endl<<"Başka bir işlem yapmak ister misin?  (0 / 1)"<<endl;
						cin>>loop;
					}		
					else{
						ofstream belge;
						belge.open(tempName);
						t2=interestCalculate(t1-para);
						belge<<t1-para<<endl<<t2<<endl<<t3<<endl;
						belge.close();
						cout<<endl<<"Başka bir işlem yapmak ister misin?  (0 / 1)"<<endl;
						cin>>loop;
					}
				}
				else if(p==3){
					ofstream belge;
					belge.open(tempName);
					t2=interestCalculate(t1);
					belge<<t1+85+t2<<endl<<t2<<endl<<t3<<endl;
					belge.close();
					cout<<endl<<"Başka bir işlem yapmak ister misin?  (0 / 1)"<<endl;
					cin>>loop;
				}
				else{
					cout<<"Hatalı giriş!";
					cout<<endl<<"Başka bir işlem yapmak ister misin?  (0 / 1)"<<endl;
					cin>>loop;
				}

				
			}
			else if(choice==4){
				loop=0;
			}
			else{
				cout<<"Yanlış girdi verildi!";
			}
		}//while loop end	
	}
