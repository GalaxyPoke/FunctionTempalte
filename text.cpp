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
//		cout << "��ѧ:" << _Math << endl;
//		cout << "����:" << _Chinese << endl;
//		cout << "Ӣ��:" << _English << endl;
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
//    vector<T> scores;  // �洢�ɼ��Ķ�̬����
//
//public:
//    // ��ɼ��б������һ���ɼ�
//    void addScore(T score) {
//        scores.push_back(score);
//    }
//    // ��ӡ���гɼ�
//    void printScores() const {
//        cout << "�ɼ��б�: ";
//        for (T score : scores) {
//            cout << score << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    ExamScores<double> myScoresD; // ����һ���洢double���ͳɼ���ʵ��
//
//    // ��ӳɼ�
//    myScoresD.addScore(90.5);
//    myScoresD.addScore(87.2);
//    myScoresD.addScore(78.6);
//    // ��ӡdouble���ͳɼ�
//    myScoresD.printScores();
//
//    ExamScores<int> myScoresI; // ����һ���洢int���ͳɼ���ʵ��
//    myScoresI.addScore(90);
//    myScoresI.addScore(80);
//    myScoresI.addScore(78);
//    // ��ӡint���ͳɼ�
//    myScoresI.printScores();
//
//    ExamScores<std::string> myScoresC;  // ����һ���洢std::string���ͳɼ���ʵ��
//    myScoresC.addScore("����");
//    myScoresC.addScore("����");
//    myScoresC.addScore("������");
//
//    // ��ӡ�ɼ�
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
//	swap(LeftI, RightI); //Ҫע��Сд��swap���ǿ���ģ���Swap,SwaP�ȣ���Ҫ�ö���Ҫ�Լ�ȥдģ��
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
//    //��ʾʵ����
//    Swap<int>(a1, a2);
//    Swap<double>(b1, b2);
//    return 0;
//}

//template<class K, class V> //����ģ�����
//void Func(const K& key, const V& value)
//{
//	cout << key << ":" << value << endl;
//}
//int main()
//{
//	Func(1, 1); //K��V��int
//	Func(1, 1.1);//K��int��V��double
//	Func<int, char>(1, 'A'); //���ģ�����Ҳ��ָ����ʾʵ������ͬ����
//}


////ר������int���ͼӷ��ķ�ģ�庯��
//int Add(const int& x, const int& y)
//{
//	return x + y;
//}
////ͨ�����ͼӷ��ĺ���ģ��
//template<typename T1, typename T2>
//T1 Add(const T1& x, const T2& y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = Add(10, 20); //���ģ�庯����ȫƥ�䣬����Ҫ����ģ��ʵ����
//	int b = Add(2.2, 2); //����ģ��������ɸ���ƥ��İ汾�������������ʵ�����ɸ���ƥ���Add����
//	return 0;
//}



int main() {
    ExamScores<double> myScoresD; // ����һ���洢double���ͳɼ���ʵ��

    // ��ӳɼ�
    myScoresD.addScore(90.5);
    myScoresD.addScore(87.2);
    myScoresD.addScore(78.6);
    // ��ӡdouble���ͳɼ�
    myScoresD.printScores();

    ExamScores<int> myScoresI; // ����һ���洢int���ͳɼ���ʵ��
    myScoresI.addScore(90);
    myScoresI.addScore(80);
    myScoresI.addScore(78);
    // ��ӡint���ͳɼ�
    myScoresI.printScores();

    ExamScores<std::string> myScoresC;  // ����һ���洢std::string���ͳɼ���ʵ��
    myScoresC.addScore("����");
    myScoresC.addScore("����");
    myScoresC.addScore("������");

    // ��ӡ�ɼ�
    myScoresC.printScores();
    return 0;
}
