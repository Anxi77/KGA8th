#include "Game.h"

void Game::InitItems()
{
	availableItems.push_back(Item("��", "����", 10, 0));
	availableItems.push_back(Item("����", "��", 0, 20));
	availableItems.push_back(Item("����", "��", 0, 30));
	availableItems.push_back(Item("�����", "�Ǽ��縮", 0, 5));
}

void Game::Run()
{

	while (true)
	{
		ShowMenu();

		int choice;
		std::cin >> choice;

		Menu::Option op = static_cast<Menu::Option>(choice);

		switch (op)
		{
		case Menu::Option::EQUIP_ITEM:
			EquipItem();
			break;
		case Menu::Option::UNEQUIP_ITEM:
			UnEquipItem();
			break;
		case Menu::Option::DISPLAY_EQUIPPED:
			player->displayEquippedItems();
			break;
		case Menu::Option::DISPLAY_AVAILABLE:
			player->displayAvailableItems(availableItems);
			break;
		case Menu::Option::EXIT:
			std::cout << "����" << std::endl;
			return;
		default:
			std::cout << "�ٽ� �õ�" << std::endl;
			break;
		}
		std::cout << std::endl;
	}
	
}

void Game::ShowMenu()
{
	std::cout << "1. ������ �����ϱ�" << std::endl;
	std::cout << "2. ������ Ż���ϱ�" << std::endl;
	std::cout << "3. ������ ������ ���" << std::endl;
	std::cout << "4. ��밡���� ������ ���" << std::endl;
	std::cout << "5. ����" << std::endl;
	std::cout << "�޴��� �����Ͻÿ�" ;
	
	
}

void Game::EquipItem()
{
	std::cout << "������ �������� �����ض�! (1-" << availableItems.size() << ") : " << std::endl;
	
	player->displayAvailableItems(availableItems);

	int itemIdx;
	std::cin >> itemIdx;

	//������ �������ε����� ��ȿ����
	if (itemIdx >= 1 && itemIdx <= availableItems.size()) 
	{
		Item& selectItem = availableItems[itemIdx - 1];
		player->equipItem(selectItem);
	}
	else 
	{
		std::cout << "�ٽýõ�" << std::endl;
	}

}
void Game::UnEquipItem()
{
	player->displayEquippedItems();

	std::cout << "Ż���� �������� ����! (1-" << player->getEquippedItemCount() << ")";

	int itemIdx;
	std::cin >> itemIdx;

	if (itemIdx >= 1 && itemIdx <= player->getEquippedItemCount())
	{
		Item& selectItem = player->getEquippedItem(itemIdx - 1);
		player->UnEquipItem(selectItem);
	}
	else 
	{
		std::cout << "�ٽýõ� " << std::endl;
	}

}
