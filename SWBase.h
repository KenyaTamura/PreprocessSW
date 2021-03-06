#ifndef SWBASE_H
#define SWBASE_H

class Data;

class SWBase {
public:
	SWBase(int threshold);
	SWBase();
	virtual ~SWBase() {};
	int max_score();
	int max_position();
	int* all_score();
	void traceback(const Data& db, const Data& q) const;
protected:
	int* mScore;
	int mSize;
	int mThreshold;
private:
	void search_max();
	int mMaxPos;
	int mMaxScore;
};

#endif
