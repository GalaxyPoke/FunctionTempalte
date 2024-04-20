#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
//template<class T>
//class Score
//{
//public:
//	void Print()
//	{
//		cout << "数学:" << _Math << endl;
//		cout << "语文:" << _Chinese << endl;
//		cout << "英语:" << _English << endl;
//	}
//private:
//	T _Math;
//	T _Chinese;
//	T _English;
//};
//
//int main()
//{
//
//	return 0;
//}

//template <class T>
//class ExamScores {
//private:
//    vector<T> scores;  // 存储成绩的动态数组
//
//public:
//    // 向成绩列表中添加一个成绩
//    void addScore(T score) {
//        scores.push_back(score);
//    }
//    // 打印所有成绩
//    void printScores() const {
//        cout << "成绩列表: ";
//        for (T score : scores) {
//            cout << score << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    ExamScores<double> myScoresD; // 创建一个存储double类型成绩的实例
//
//    // 添加成绩
//    myScoresD.addScore(90.5);
//    myScoresD.addScore(87.2);
//    myScoresD.addScore(78.6);
//    // 打印double类型成绩
//    myScoresD.printScores();
//
//    ExamScores<int> myScoresI; // 创建一个存储int类型成绩的实例
//    myScoresI.addScore(90);
//    myScoresI.addScore(80);
//    myScoresI.addScore(78);
//    // 打印int类型成绩
//    myScoresI.printScores();
//
//    ExamScores<std::string> myScoresC;  // 创建一个存储std::string类型成绩的实例
//    myScoresC.addScore("优秀");
//    myScoresC.addScore("良好");
//    myScoresC.addScore("不及格");
//
//    // 打印成绩
//    myScoresC.printScores();
//    return 0;
//}

//template<typename T>
//void Swap(T& left, T& right)
//{
//	{
//		T temp = left;
//		left = right;
//		right = temp;
//	}
//
//}
//
//int main()
//{
//	int LeftI = 2;
//	int RightI = 3;
//	cout << LeftI << RightI << endl;
//	Swap(LeftI,RightI);
//	cout << LeftI << RightI << endl;
//
//	double LeftD = 2.5;
//	double RightD = 3.5;
//	cout << LeftD << RightD << endl;
//	Swap(LeftD, RightD);
//	cout << LeftD << RightD << endl;
//
//	char LeftC = 'A';
//	char RightC = 'B';
//	cout << LeftC << RightC << endl;
//	Swap(LeftC, RightC);
//	cout << LeftC << RightC << endl;
//	return 0;
//}

//void Swap(int& left, int& right)
//{
//	{
//		int temp = left;
//		left = right;
//		right = temp;
//	}
//}
//
//void Swap(double& left, double& right)
//{
//	{
//		double temp = left;
//		left = right;
//		right = temp;
//	}
//}
//
//void Swap(char& left, char& right)
//{
//	{
//		char temp = left;
//		left = right;
//		right = temp;
//	}
//}


//int main()
//{
//	int LeftI = 2;
//	int RightI = 3;
//	cout << LeftI << " " << RightI << endl;
//	swap(LeftI, RightI); //要注意小写的swap才是库里的，如Swap,SwaP等，想要用都需要自己去写模板
//	cout << LeftI << " " << RightI << endl;
//
//	double LeftD = 2.5;
//	double RightD = 3.5;
//	cout << LeftD << " " << RightD << endl;
//	swap(LeftD, RightD);
//	cout << LeftD << " " << RightD << endl;
//
//	char LeftC = 'A';
//	char RightC = 'B';
//	cout << LeftC << " " << RightC << endl;
//	swap(LeftC, RightC);
//	cout << LeftC << " " << RightC << endl;
//	return 0;
//}

//template <typename T>
//void Swap(T& a, T& b) {
//    T temp = a;
//    a = b;
//    b = temp;
//}
//int main()
//{
//    int a1 = 10, a2 = 20;
//    double b1 = 10.0, b2 = 20.0;
//    //显示实例化
//    Swap<int>(a1, a2);
//    Swap<double>(b1, b2);
//    return 0;
//}

//template<class K, class V> //两个模板参数
//void Func(const K& key, const V& value)
//{
//	cout << key << ":" << value << endl;
//}
//int main()
//{
//	Func(1, 1); //K和V均int
//	Func(1, 1.1);//K是int，V是double
//	Func<int, char>(1, 'A'); //多个模板参数也可指定显示实例化不同类型
//}


////专门用于int类型加法的非模板函数
//int Add(const int& x, const int& y)
//{
//	return x + y;
//}
////通用类型加法的函数模板
//template<typename T1, typename T2>
//T1 Add(const T1& x, const T2& y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = Add(10, 20); //与非模板函数完全匹配，不需要函数模板实例化
//	int b = Add(2.2, 2); //函数模板可以生成更加匹配的版本，编译器会根据实参生成更加匹配的Add函数
//	return 0;
//}



int main() {
    ExamScores<double> myScoresD; // 创建一个存储double类型成绩的实例

    // 添加成绩
    myScoresD.addScore(90.5);
    myScoresD.addScore(87.2);
    myScoresD.addScore(78.6);
    // 打印double类型成绩
    myScoresD.printScores();

    ExamScores<int> myScoresI; // 创建一个存储int类型成绩的实例
    myScoresI.addScore(90);
    myScoresI.addScore(80);
    myScoresI.addScore(78);
    // 打印int类型成绩
    myScoresI.printScores();

    ExamScores<std::string> myScoresC;  // 创建一个存储std::string类型成绩的实例
    myScoresC.addScore("优秀");
    myScoresC.addScore("良好");
    myScoresC.addScore("不及格");

    // 打印成绩
    myScoresC.printScores();
    return 0;
}
