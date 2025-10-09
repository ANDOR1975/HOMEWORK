////Избежание циклических ссылок с weak_ptr
////Создайте два класса: Parent и Child. Parent содержит std::shared_ptr<Child>, а Child хранит std::weak_ptr<Parent>. 
////Убедитесь, что при удалении Parent объект Child корректно освобождается.
//#include<iostream>
//#include<memory>
//
//class Parent;
//
//class Child
//{
//private:
//    std::weak_ptr<Parent>parent_ptr;
//public:
//    void  setChild(std::shared_ptr<Parent>parent)
//    {
//        parent_ptr = parent;
//    }
//};
//
//class Parent
//{
//private:
//    std::shared_ptr<Child>child_ptr;
//public:
//
//    Parent() :child_ptr()
//    {
//        child_ptr = std::make_shared<Child>();
//    }
//    std::shared_ptr<Child> GetChild()
//    {
//        return child_ptr;
//    }
//};
//int main()
//{
//    std::shared_ptr<Parent> W1 = std::make_shared<Parent>();
//    W1->GetChild()->setChild(W1);
//}
