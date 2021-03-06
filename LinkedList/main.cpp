#include "List.hpp"

#include <conio.h>
#include <iostream>

int main()
{
	system("CLS");

	List<double> list;

	list.pushFront(6);
	list.pushBack(5);
	list.pushBack(4);
	list.pushBack(3);
	list.pushBack(2);
	list.pushBack(1);

	std::cout << "Show from tale:" << std::endl;
	list.showFromTail();

	
	std::cout << "\nDelete from:" << std::endl;
	list.deleteFrom(3);
	list.showFromTail();

	list.pushFront(7);
	std::cout << "\nAdd In Head:" << std::endl;
	list.showFromHead();

	list.insert(4,22);
	std::cout << "\nInsert:" << std::endl;
	list.showFromHead();

	std::cout << "\nPop Back" << std::endl;
	std::cout << "Pop Front\n"  << std::endl;
	list.popFront();
	list.popBack();
	
	std::cout << "Result: ";
	list.showFromTail();

	std::cout << "\nList Copy:" << std::endl;

	List<double> listCopy(list);
	listCopy.showFromHead();

	std::cout << "\nAssignment operator:" << std::endl;

	List<double> assingList;
	assingList = listCopy;
	assingList.showFromHead();

	system("pause");
    return 0;
}

