/*
 * Block.h
 *
 *  Created on: Mar 16, 2018
 *      Author: tjferrara
 */

#ifndef BLOCK_H_
#define BLOCK_H_

class Block {
public:
	Block(int index, char* payload, int prevHash);
	virtual ~Block();
	int getNext();
	char* getPayload();
	int getPrevHash();
	void setPayload(char* payload);
private:
	int hash;
	int prevHash;
	int index;
	int timestamp;
	char* payload;
};

#endif /* BLOCK_H_ */
