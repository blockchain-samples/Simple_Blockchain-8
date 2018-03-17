/*
 * Block.cpp
 *
 *  Created on: Mar 16, 2018
 *      Author: tjferrara
 */

#include "Block.h"

Block::Block(int index, char* payload, int prevHash) {
	this->index = index;
	hash = 0;
	this->payload = payload;
	timestamp = 0; // actual timestamp
	this->prevHash = prevHash;
}

Block::~Block() {
	// TODO Auto-generated destructor stub
}

int Block::getPrevHash() {
	return prevHash;
}

char* Block::getPayload() {
	return payload;
}

void Block::setPayload(char* payload) {
	this->payload = payload;
}
