// class.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Stret 
{
public:
	
	int house;
	float housevolume;
	float paint;
	float parquet;
	float glass;

	class  House  // базовый класс
	{
	protected:
		int	partment;
	public:
		int floor;
		House()
		{
			partment = 0;
			
		}

		House(int input)
		{
			partment = input;
			
		}
				
	};
		//вложеный класс 
		class Flat:	public House		// производный класс
		{
		protected:
			int rooms;
		public:
			Flat():House() // конструктор класса Flat вызывает конструктор класса House
			{}
			Flat(int  roomS) : House(roomS)// rooms передается в конструктор с параметром класса  House
			{}
						
			
			/* Flat()
			{
				rooms = 0;
			}

			Flat(int input)
			{
				rooms = input;
			}	
			*/
									
		};
		class Room :public Flat  // производный класс
		{		
		public:
			Room():Flat()// конструктор класса Room  вызывает конструктор класса Flat
			{}
			Room(int roomS):Flat(roomS)  // rooms передается в конструктор с параметром класса  House
			{}

		

			char colour;
			float l;
			float h;
			float w;
			float Numliters;

			class Parquet
			{
			public:

				float w;
				float l;
			};

			class Numglass
			{
				float w;
				float h;
			};

		};
	

	
};



int main()
{
	
	
	getchar();
}

