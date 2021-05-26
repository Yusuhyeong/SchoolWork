#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H
using namespace std;

class Subject
{
protected:
	string m_name; // 과목명
	int m_hakjum; // 학점
	string m_grade; // 등급
	float m_GPA; // 평점

public:
	Subject();
	Subject(string name, int hakjum, string grade);
	Subject(const Subject& sub);
	~Subject();
	//void Initialize(); // 멤버변수 초기화
	//void Initialize(string, int, string); // 인자값으로 멤버변수 초기화
	void InputValue(int&);
	void InputValue(string&);
	void InputData(); // 멤버변수 값 입력
	// 내부적으로 InputValue()이용
	void PrintTitle(); // 멤버변수에 대한 title Text 출력
	void PrintData(); // 멤버변수 값 출력
	void CalcGPA(); // 평점 계산
	float GetGPA();
	string GetName();
	string GetGrade();
	int GetHakjum();
	void Modify(); // 과목 정보 수정
	void SetName(string);
	void SetHakjum(int);
	void SetGrade(string);
	void SetGPA(float);
};

#endif SUBJECT_H