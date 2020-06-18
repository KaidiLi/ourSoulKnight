#ifndef __Gun_H__
#define __Gun_H__

#include "Weapon.h"
#include "Bullet.h"
#include "Constant.h"

USING_NS_CC;

class Gun :public Weapon {
	CC_SYNTHESIZE(float, _bulletSpeed, BulletSpeed);			//�ӵ��ٶȣ���λ�����ص�
	CC_SYNTHESIZE(EActorType, _bulletType, BulletType);			//����ʹ�õ��ӵ����ͣ���ս��û��

public:
	Gun();													//���ڳ�ʼ�����������ԣ�֮��ŵ�����������������ȥ
	~Gun();													//������������ûɶ�ã��ȷ�����
	static Gun* create(const std::string& filename);
	virtual bool init(const std::string& filename);
	virtual void fire(Scene* currentScene,const Vec2& pos);

};
#endif