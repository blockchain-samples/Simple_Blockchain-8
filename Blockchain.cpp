/*
 * Blockchain.cpp
 *
 *  Created on: Mar 16, 2018
 *      Author: tjferrara
 */

#include "Blockchain.h"

Blockchain::Blockchain() {
	head = 0;
	tail = 0;

}

Blockchain::~Blockchain() {
	// TODO Auto-generated destructor stub
}

void Blockchain::addBlock() {
	// add block to end of chain
}

Block Blockchain::getTail() {
	return tail;
}

Block Blockchain::getBlockAt(int index) {
	return new Block();
}
