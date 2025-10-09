//#include<iostream>
////#include<ctime>
//using namespace std;
//int main()
//{
//    srand(time(NULL));
//    setlocale(LC_ALL, "ru");
//    const int RAZ = 5;
//    int ass[RAZ];
//
//    for (int i = 0; i < RAZ; i++)
//    {
//        ass[i] = rand() % 100;
//        cout << ass[i] << " ";
//    }
//    cout << "\n";
//      int min = ass[RAZ-1];
//      for (int x = RAZ-1 ; x >= 0; x-- )
//      {
//        min = ass[x];
//          for (int i = RAZ-1; i >= 0; i-- )
//          {
//            if (ass[i] < min)
//            {
//                min = ass[i];
//                
//                ass[i] = ass[x];
//                ass[x] = min;
//            }          
//          }       
//       }
//    for (int i = 0;i < RAZ; i++)
//        cout << ass[i] << " ";
//}
//   
