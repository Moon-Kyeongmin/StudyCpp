#pragma once
class Time {
private:
	int hour, min, sec;
public:
	void SetTime(int hour, int min, int sec);
	void outTime();
};