//
//  wolf.h
//  RabbitGame
//
//  Created by Daniel Walsh on 11/13/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#ifndef WOLFH
#define WOLFH
#include "terminal.h"

class wolf {
	const terminal const *t;
	unsigned x, y;
	char c;
    wolf(const wolf& another);
public:
	wolf(const terminal& initial_t, unsigned initial_x, unsigned initial_y);
    ~wolf();
	bool move();
};
#endif
