////Напишите программу, которая читает текст и выводит,
//// сколько раз каждое слово встречалось в нем.Для решения 
//// этой задачи отлично подойдёт словарь
//#include<iostream>
//#include<map>
//#include<string>
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	std::string a;
//	std::map<std::string, int>m;
//	while (true)
//	{
//		std::cout << "введите слово-";
//		std::cin >> a;
//		if (a == "0")break;
//		m[a]++;
//	}
//	for(auto it=m.begin();it!=m.end();it++)
//	{
//		std::cout << it->first << " " << it->second << '\n';
//	}
//
// //Реализуйте простую телефонную книгу. Команды:
////add <имя> <телефон> — добавить/обновить номер.
////find <имя> — найти номер. Если имени нет,
////вывести "Not found".
////del <имя> — удалить запись.
//    std::cout << "telephone Book" << '\n';
//    std::map<std::string, int>telBook;
//    while (true)
//    {
//        //std::map<std::string,int>telBook;
//        std::cout << " add  добавить  " << '\n';
//        std::cout << " find найти " << '\n';
//        std::cout << " del  удалить " << '\n';
//        std::cout << " 0    выйти -->";
//        std::string a;
//        std::cin >> a;
//        std::string name;
//        int number;
//
//        if (a == "0")break;
//        if (a == "add")
//        {
//            std::cout << "имя-";
//            std::cin >> name;
//            std::cout << "номер-";
//            std::cin >> number;
//            // telBook.insert(std::make_pair(name,number));
//            telBook[name] = number;
//        }
//        if (a == "find")
//        {
//            std::cout << "имя поиска- ";
//            std::cin >> name;
//            auto it = telBook.find(name);
//            if (it == telBook.end())
//            {
//                std::cout << "нет такого" << '\n';
//            }
//
//            if (it != telBook.end())
//            {
//                std::cout << it->first << " ";
//                std::cout << it->second << '\n';
//            }
//        }
//        if (a == "del")
//        {
//            std::cout << "имя для удаления-";
//            std::cin >> name;
//            auto it = telBook.find(name);
//            telBook.erase(it);
//        }
//    }
//}
//
//
//
//
//
//
