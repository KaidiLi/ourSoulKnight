#include "Sword.h"


Sword::Sword() {
	//��������
	_attack = 6;
	_mpConsumption = 0;
}

Sword::~Sword() {

}

Sword* Sword::create(const std::string& filename) {
	Sword* sprite = new Sword;
	if (sprite && sprite->init(filename)) {
		sprite->autorelease();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

bool Sword::init(const std::string& filename) {
	if (!Sprite::initWithFile(filename)) {
		return false;
	}
	this->setScale(0.075);
	this->setAnchorPoint(Vec2(0.1, 0.5));


	auto physicsBody = PhysicsBody::createBox(this->getContentSize(), PhysicsMaterial(0.0f, 0.0f, 0.0f));
	physicsBody->setDynamic(false);

	//��������ʱ��ͨ����ײ���뽫�����ó��޷��������ײ
	physicsBody->setCategoryBitmask(0x00);
	physicsBody->setContactTestBitmask(0x00);
	this->setTag(_attack);
	this->addComponent(physicsBody);

	//������������
	return true;
}

void Sword::fire(Scene* _currentScene, const Vec2& pos, Entity* player) {
	/*this->getPhysicsBody()->setCategoryBitmask(0x04);
	this->getPhysicsBody()->setContactTestBitmask(0x02);

	this->runAction(attackAnimate);

	this->getPhysicsBody()->setCategoryBitmask(0x00);
	this->getPhysicsBody()->setContactTestBitmask(0x00);
	*/
}
