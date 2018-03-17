/*
 * Blockchain.h
 *
 *  Created on: Mar 16, 2018
 *      Author: tjferrara
 */
#include "Block.h";

#ifndef BLOCKCHAIN_H_
#define BLOCKCHAIN_H_

class Blockchain {
public:
	Blockchain();
	virtual ~Blockchain();
	void addBlock();
	Block getTail();
	Block getBlockAt(int index);
private:
	Block head;
	Block tail;
};

#endif /* BLOCKCHAIN_H_ */
