#ifndef _ShotGun_H_
#define _ShotGun_H_

#include "Gun.h"
class ShotGun :public Gun {
public:
	ShotGun();													//���ڳ�ʼ�����������ԣ�֮��ŵ�����������������ȥ
	~ShotGun();													//������������ûɶ�ã��ȷ�����
	static ShotGun* create(const std::string& filename);
	virtual bool init(const std::string& filename);
	
	Vec2 increaseBy15Degree(const Vec2& pos);					//�ı��ӵ��ķ���Ƕ� +30��
	Vec2 reduceBy15Degree(const Vec2& pos);						//�ı��ӵ��ķ���Ƕ� -30��
	virtual void fire(Scene* _currentScene, const Vec2& pos, Entity* player);
	
};

#endif
#pragma once