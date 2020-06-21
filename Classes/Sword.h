#ifndef _Sword_H_
#define _Sword_H_

#include "Weapon.h"

class Sword: public Weapon {

public:
	Sword();										//��ʼ����ʱ�������ײģ��
	~Sword();

	static Sword* create(const std::string& filename);
	virtual bool init(const std::string& filename);
	virtual void fire(Scene* _currentScene, const Vec2& pos, Entity* player);

private:
	Animate* attackAnimate;							//��ս������������

};

#endif // !_Sword_H_

#pragma once
